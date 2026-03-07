void __fastcall sub_14007F1E4(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  v2 = a1 + 2;
  v4 = a1[2];
  v6 = a1 + 2;
  if ( v4 >= a1[3] )
  {
    if ( (unsigned int)sub_14007EAE0(a1, v4 + 1) )
      return;
    v6 = a1 + 2;
  }
  v7 = a1[1];
  if ( v7 && *v2 < a1[3] )
  {
    v8 = 56LL * *v2;
    *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
    v9 = (_QWORD *)(v8 + v7 + 16);
    if ( v9 != (_QWORD *)(a2 + 16) )
    {
      sub_1400011A8(v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      v2 = v6;
    }
    ++*v2;
  }
}
