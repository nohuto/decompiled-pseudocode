void __fastcall DmrFreeRmrrTree(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 8);
  while ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v2 != v1 || (v3 = (_QWORD *)v2[1], (_QWORD *)*v3 != v2) )
LABEL_11:
      __fastfail(3u);
    v1[1] = v3;
    v4 = v2 + 2;
    *v3 = v1;
    while ( (_QWORD *)*v4 != v4 )
    {
      v5 = (_QWORD *)v2[3];
      if ( (_QWORD *)*v5 != v4 )
        goto LABEL_11;
      v6 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_11;
      v2[3] = v6;
      *v6 = v4;
      ExtEnvFreeMemory(a1, (unsigned __int64)v5);
    }
    ExtEnvFreeMemory(a1, (unsigned __int64)v2);
  }
}
