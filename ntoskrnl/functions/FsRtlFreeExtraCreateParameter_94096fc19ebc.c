void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  char *v1; // rbx
  __int64 v2; // rdi
  void (__fastcall *v3)(PVOID, char *); // rax
  struct _PAGED_LOOKASIDE_LIST *v5; // rcx

  v1 = (char *)EcpContext - 72;
  v2 = 0LL;
  v3 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v3 )
    v3(EcpContext, v1 + 24);
  if ( (*((_DWORD *)v1 + 12) & 0x20) != 0 && FltMgrCallbacks )
  {
    v2 = *((_QWORD *)v1 + 8);
    (*(void (__fastcall **)(__int64, PVOID))FltMgrCallbacks)(v2, EcpContext);
  }
  v5 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 7);
  if ( v5 )
    ExFreeToNPagedLookasideList(v5, v1);
  else
    ExFreePoolWithTag(v1, 0);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v2);
}
