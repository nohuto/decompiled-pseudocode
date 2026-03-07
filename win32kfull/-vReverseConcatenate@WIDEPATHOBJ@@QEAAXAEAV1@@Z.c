void __fastcall WIDEPATHOBJ::vReverseConcatenate(WIDEPATHOBJ *this, struct WIDEPATHOBJ *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  const struct _POINTFIX *i; // rdi

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL);
  if ( v4 )
  {
    do
    {
      v5 = v4 + 24;
      v6 = *(_QWORD *)(v4 + 8);
      for ( i = (const struct _POINTFIX *)(v4 + 8 * (*(unsigned int *)(v4 + 20) + 3LL));
            (unsigned __int64)i > v5;
            WIDEPATHOBJ::vAddPoint(this, i) )
      {
        --i;
      }
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL) = **(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL);
      freepathalloc();
      v4 = v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) = 0LL;
}
