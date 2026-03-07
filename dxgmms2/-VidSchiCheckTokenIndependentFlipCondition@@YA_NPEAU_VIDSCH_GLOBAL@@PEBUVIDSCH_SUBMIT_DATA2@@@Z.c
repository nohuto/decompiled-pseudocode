char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // r8
  bool v5; // zf
  int v6; // eax
  char v7; // dl
  char v8; // cl
  __int64 v9; // rax
  _QWORD *v10; // rdx

  if ( (*(_DWORD *)a2 & 0x1000000) == 0 || (*((_DWORD *)a2 + 1) & 1) != 0 )
  {
    WdLogSingleEntry3(8LL, *((_QWORD *)a2 + 13), *((unsigned int *)a2 + 28), *((_DWORD *)a2 + 1) & 1);
  }
  else
  {
    v4 = *((unsigned int *)a2 + 29);
    v5 = !_BitScanForward((unsigned int *)&v6, *((_DWORD *)a2 + 150) & 0x3FF);
    v7 = -1;
    if ( !v5 )
      v7 = v6;
    v8 = 0;
    if ( v7 != -1 )
      v8 = v7;
    v9 = *(int *)(288LL * (unsigned int)v8 + *((_QWORD *)a1 + v4 + 400) + 188);
    if ( (int)v9 > -1 )
    {
      v10 = (_QWORD *)(*((_QWORD *)a1 + 416) + 160 * v9);
      if ( v10 )
      {
        if ( *v10 == *(_QWORD *)((char *)a2 + 156) && v10[1] == *((_QWORD *)a2 + 21) && v10[11] == *((_QWORD *)a2 + 22) )
          return 1;
        WdLogSingleEntry5(
          8LL,
          *((_QWORD *)a2 + 13),
          *((unsigned int *)a2 + 28),
          *(_QWORD *)((char *)a2 + 156),
          *((_QWORD *)a2 + 21),
          *((_QWORD *)a2 + 22));
      }
    }
  }
  return 0;
}
