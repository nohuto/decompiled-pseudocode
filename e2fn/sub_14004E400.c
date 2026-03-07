void __fastcall sub_14004E400(__int64 a1)
{
  __int64 v1; // r9
  void (__fastcall *v2)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = *(void (__fastcall **)(__int64))(a1 + 24);
    if ( v2 )
      v2(v1 + *(int *)(a1 + 32));
  }
}
