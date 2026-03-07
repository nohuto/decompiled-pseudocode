void __fastcall sub_140071984(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rsi

  v2 = a1[29];
  if ( v2 )
  {
    sub_140071B78(v2, a1);
    while ( a1[34] )
      sub_140071C04(*(_QWORD *)(a1[30] + 16LL), a1[29]);
  }
  else
  {
    for ( ; a1[34]; *(_QWORD *)(v5 + 232) = 0LL )
    {
      v3 = a1[34];
      if ( v3 )
        v4 = a1 + 30;
      else
        v4 = (_QWORD *)a1[31];
      v5 = *(_QWORD *)(*v4 + 16LL);
      if ( v3 )
        sub_1400A4398(a1 + 30, a1[30]);
    }
  }
}
