unsigned __int64 __fastcall SmPartitionCleanup(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rax
  struct _PRIVILEGE_SET **v3; // rdi
  struct _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rax
  struct _PRIVILEGE_SET *v6; // rcx
  void *v7; // rcx
  unsigned __int64 result; // rax

  if ( *(_DWORD *)(a1 + 2112) != -1 )
  {
    v2 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a1 + 2112) & 0x3FF);
    ExReleaseRundownProtection_0(v2 + 1);
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(a1);
  SmpKeyedStoreCtxCleanup(a1 + 2072);
  v3 = (struct _PRIVILEGE_SET **)(a1 + 2648);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (struct _PRIVILEGE_SET *)v3 )
      break;
    if ( (struct _PRIVILEGE_SET **)v4->Privilege[0].Luid != v3
      || (v5 = *(_QWORD *)&v4->PrivilegeCount, *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v4->PrivilegeCount + 8LL) != v4) )
    {
      __fastfail(3u);
    }
    *v3 = (struct _PRIVILEGE_SET *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    CmSiFreeMemory(v4);
  }
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 2672);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *(void **)(a1 + 2688);
  if ( v7 )
    ObfDereferenceObject(v7);
  SmFpCleanup(a1 + 2720);
  SmFpCleanup(a1 + 2840);
  if ( *(_QWORD *)(a1 + 2000) )
    SmTerminateStoreProcess(a1);
  result = *(unsigned int *)(a1 + 1976);
  if ( (result & 0x10) != 0 )
    return MmStoreReleaseResidentAvailableForRead(*(unsigned __int16 ***)(a1 + 1936), 1LL);
  return result;
}
