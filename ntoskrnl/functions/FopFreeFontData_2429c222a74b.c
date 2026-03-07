void __fastcall FopFreeFontData(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 *v7; // rsi
  __int64 v8; // rcx

  v1 = a1 + 13;
  v3 = (_QWORD *)a1[13];
  while ( v3 != v1 )
  {
    v6 = (__int64)v3;
    v3 = (_QWORD *)*v3;
    v7 = *(__int64 **)(v6 + 80);
    if ( v7 )
    {
      if ( *v7 )
        BgpFwFreeMemory(*v7);
      v8 = v7[2];
      if ( v8 )
        BgpFwFreeMemory(v8);
      BgpFwFreeMemory((__int64)v7);
    }
    BgpFwFreeMemory(v6);
  }
  v4 = a1[4];
  if ( v4 )
    BgpFwFreeMemory(v4);
  v5 = a1[3];
  if ( v5 )
    FopFreeMappingTable(v5);
  BgpFwFreeMemory((__int64)a1);
}
