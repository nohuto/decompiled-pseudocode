__int64 __fastcall UnRegisterOperationRegionHandler(__int64 a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 **v14; // rcx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = (__int64 *)AcpiOpRegionHandlerList; ; i = (__int64 *)*i )
  {
    if ( i == &AcpiOpRegionHandlerList )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
      return 3221225712LL;
    }
    if ( i == a2 )
      break;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return 3221225558LL;
  }
  else
  {
    v6 = a2[1];
    v7 = (unsigned int *)a2 + 9;
    v8 = 0;
    *((_BYTE *)a2 + 40) = 1;
    if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
      && ((v9 = *v7, (__int64 *)*a2 == &AcpiOpRegionHandlerList) || *(_DWORD *)(*a2 + 36) != v9) )
    {
      if ( v9 < 0x1F )
      {
        AcpiRegisteredOpRegionMask &= ~(1 << v9);
      }
      else if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList
             || *(_DWORD *)(qword_1C006EC48 + 36) < 0x1Fu )
      {
        AcpiRegisteredOpRegionMask &= ~0x80000000;
      }
    }
    else
    {
      v8 = 1;
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    if ( !v8 )
    {
      if ( *v7 - 8 <= 1 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, *v7, 0);
      }
      else if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, (__int64)&v16, 1u) >= 0 )
      {
        memset(v15, 0, sizeof(v15));
        v10 = *v7;
        v15[7] = 0LL;
        WORD1(v15[0]) = 1;
        v15[2] = v10;
        WORD1(v15[5]) = 1;
        AMLIEvalNameSpaceObject(v16, 0LL, 2u, v15);
        AMLIDereferenceHandleEx((volatile signed __int32 *)v16, v11);
      }
    }
    v12 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL) != 0 ? 0xC0000001 : 0;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    v13 = *a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v14 = (__int64 **)a2[1], *v14 != a2) )
      __fastfail(3u);
    *v14 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    ExFreePoolWithTag(a2, 0);
    return v12;
  }
}
