unsigned __int64 __fastcall umptr<_POINTL>::internal_get_offset(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  char v4; // al
  __int64 v5; // r10
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v7 = 0LL;
    v4 = umptr<_POINTL>::ssizet_add_to_sizet(v3, v2, &v7);
    v3 = v7;
    if ( !v4 || v7 > *(_QWORD *)(v5 + 8) )
      *(_BYTE *)(v5 + 24) = 1;
  }
  return v3;
}
