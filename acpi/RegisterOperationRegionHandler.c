/*
 * XREFs of RegisterOperationRegionHandler @ 0x1C008BB24
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 *     ACPIIoctlRegisterOpRegionHandler @ 0x1C003133C (ACPIIoctlRegisterOpRegionHandler.c)
 *     ACPIEcInstallOpRegionHandler @ 0x1C00836FC (ACPIEcInstallOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C008BAC0 (RegisterOpRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00A8160 (OSInitializeCallbacks.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C00399A0 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C0048A7C (AMLIRegEventHandler.c)
 */

__int64 __fastcall RegisterOperationRegionHandler(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int **a6)
{
  __int64 v8; // rsi
  int v9; // edx
  int v11; // ebp
  __int64 Pool2; // rax
  unsigned int *v13; // rdi
  int v14; // ebx
  __int64 v15; // rbx
  __int64 i; // rax
  unsigned int **v17; // rcx
  unsigned int *v18; // rax
  int v19; // edx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 *v22; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v23[10]; // [rsp+40h] [rbp-68h] BYREF

  v22 = 0LL;
  v8 = a3;
  *a6 = 0LL;
  v9 = a2 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 3221225712LL;
    v11 = 6;
  }
  else
  {
    v11 = 7;
  }
  if ( a3 <= 5 )
  {
    if ( a3 == 5 || a3 <= 2 || a3 - 3 <= 1 )
      goto LABEL_10;
    return 3221225713LL;
  }
  if ( a3 != 6 && a3 != 7 && a3 != 8 && a3 != 9 && a3 != 11 && a3 - 128 > 0x7F )
    return 3221225713LL;
LABEL_10:
  Pool2 = ExAllocatePool2(64LL, 48LL, 1332765505LL);
  v13 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 16) = a4;
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_DWORD *)(Pool2 + 32) = v11;
  *(_DWORD *)(Pool2 + 36) = v8;
  *(_BYTE *)(Pool2 + 40) = 0;
  if ( v11 == 6 )
  {
    v14 = AMLIRegEventHandler(6u, v8, InternalOpRegionHandler, Pool2);
    if ( v14 )
    {
      v14 = -1073741823;
      goto LABEL_23;
    }
  }
  else
  {
    v14 = AMLIRegEventHandler(7u, v8, InternalRawAccessOpRegionHandler, Pool2);
    if ( v14 )
      v14 = -1073741823;
  }
  if ( v14 < 0 )
  {
LABEL_23:
    ExFreePoolWithTag(v13, 0);
    return (unsigned int)v14;
  }
  *a6 = v13;
  v15 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
  {
    v15 = i;
    if ( *(_DWORD *)(i + 36) >= (unsigned int)v8 && (*(_DWORD *)(i + 36) != (_DWORD)v8 || *(_DWORD *)(i + 32) == v11) )
      break;
  }
  v17 = *(unsigned int ***)(i + 8);
  v18 = *v17;
  if ( *((unsigned int ***)*v17 + 1) != v17 )
    __fastfail(3u);
  *(_QWORD *)v13 = v18;
  *((_QWORD *)v13 + 1) = v17;
  *((_QWORD *)v18 + 1) = v13;
  *v17 = v13;
  if ( v15 && *(_DWORD *)(v15 + 36) == (_DWORD)v8 )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
  }
  else
  {
    if ( (unsigned int)v8 < 0x1F )
      v19 = 1 << v8;
    else
      v19 = 0x80000000;
    AcpiRegisteredOpRegionMask |= v19;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    v20 = v13[9];
    if ( v20 - 8 <= 1 )
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v20, 1);
    }
    else if ( a1 )
    {
      if ( (int)AMLIGetNameSpaceObject("_REG", a1, (__int64)&v22, 1u) >= 0 )
      {
        memset(v23, 0, sizeof(v23));
        WORD1(v23[0]) = 1;
        v23[2] = v8;
        WORD1(v23[5]) = 1;
        v23[7] = 1LL;
        AMLIAsyncEvalObject(v22, 0LL, 2, v23, 0LL, 0LL);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v22, v21);
      }
    }
  }
  return 0LL;
}
