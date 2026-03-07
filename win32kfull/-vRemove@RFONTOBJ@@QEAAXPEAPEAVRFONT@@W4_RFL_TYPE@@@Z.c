void __fastcall RFONTOBJ::vRemove(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdx
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v4 = (__int64 *)(*(_QWORD *)a1 + 664LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 672LL);
    v7 = *v4 != 0;
    v8 = *v4 + 664;
    v9 = v6 + 664;
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 488LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v7 = *v4 != 0;
    v8 = *v4 + 488;
    v9 = v6 + 488;
  }
  v10 = v8 & -(__int64)v7;
  v11 = (_QWORD *)(v9 & -(__int64)(v6 != 0));
  v12 = v4[1];
  if ( v5 )
  {
    *(_QWORD *)(v10 + 8) = v12;
    if ( v11 )
      *v11 = *v4;
  }
  else
  {
    *a2 = v12;
    if ( v11 )
      *v11 = 0LL;
  }
}
