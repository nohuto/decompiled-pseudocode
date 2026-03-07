NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // ebx
  int v9; // edi
  unsigned __int64 v10; // rcx
  __int64 Pool2; // rax
  GUID v12; // xmm0

  v6 = SizeOfContext + 72;
  *EcpContext = 0LL;
  if ( SizeOfContext >= 0xFFFFFFB8 )
    return -1073741675;
  v9 = (Flags & 2) != 0 ? 66 : 2;
  v10 = (-(__int64)((Flags & 2) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  if ( (Flags & 1) != 0 )
    v10 |= 1uLL;
  Pool2 = ExAllocatePool2(v10, v6, PoolTag);
  if ( !Pool2 )
    return -1073741670;
  *(_DWORD *)(Pool2 + 4) = 0;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)Pool2 = 1215324997;
  v12 = *EcpType;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)(Pool2 + 64) = 0LL;
  *(GUID *)(Pool2 + 24) = v12;
  *(_QWORD *)(Pool2 + 40) = CleanupCallback;
  *(_DWORD *)(Pool2 + 48) = v9;
  *(_DWORD *)(Pool2 + 52) = v6;
  *EcpContext = (PVOID)(Pool2 + 72);
  return 0;
}
