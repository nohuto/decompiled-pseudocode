/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140A17308
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402DCE90 (ExConvertExclusiveToSharedLite.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14060866C (ExTryConvertSharedToExclusiveLite.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x140A15FF8 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140A16224 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140A16FE4 (CmpGetVirtualStoreRoot.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, __int64 a2, char a3, ULONG_PTR *a4)
{
  __int64 v7; // r14
  char v8; // r15
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v10; // rcx
  _DWORD *v11; // rsi
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // r8
  unsigned int v14; // edx
  UNICODE_STRING *p_DestinationString; // rcx
  unsigned int v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+44h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  ULONG_PTR v21; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v22; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR *v23; // [rsp+70h] [rbp-9h]
  _OWORD v24[2]; // [rsp+78h] [rbp-1h] BYREF

  v23 = a4;
  v18 = 0;
  DestinationString = 0LL;
  v7 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v24, 0x20000LL);
  v21 = 0LL;
  P = 0LL;
  v17 = 0;
  v8 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v22 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v7 = a1;
  if ( !a3 )
  {
    v8 = ExTryConvertSharedToExclusiveLite();
    if ( !v8 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_22:
      if ( CmpTraceRoutine )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        CmpTraceRoutine(p_DestinationString, v24, (unsigned int)VirtualStoreRoot, 0LL, v7, &DestinationString);
      }
      if ( DestinationString.Buffer )
        RtlFreeUnicodeString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(a1);
  VirtualStoreRoot = CmRealKCBToVirtualPath(a1, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&DestinationString, &v17, &P) >= 0 )
    {
      v11 = P;
      if ( v17 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v21, &v18, &v22);
        if ( VirtualStoreRoot >= 0 )
        {
          v12 = v22;
          v13 = v21;
          v14 = v17;
          *v23 = v21;
          v11[8] = *(_DWORD *)(v12 + 40);
          *((_QWORD *)v11 + 2) = v12;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v14, v13, a1, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v17);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(a1);
    if ( v8 )
      ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
    goto LABEL_22;
  }
  if ( CmpTraceRoutine )
  {
    v10 = &DestinationString;
    LOBYTE(v10) = 26;
    CmpTraceRoutine(v10, v24, (unsigned int)VirtualStoreRoot, 0LL, v7, &DestinationString);
  }
  return (unsigned int)VirtualStoreRoot;
}
