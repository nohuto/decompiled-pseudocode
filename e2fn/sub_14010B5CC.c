NTSTATUS __fastcall sub_14010B5CC(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  v2 = *(void **)(a1 + 360);
  if ( v2 )
  {
    result = ZwClose(v2);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  return result;
}
