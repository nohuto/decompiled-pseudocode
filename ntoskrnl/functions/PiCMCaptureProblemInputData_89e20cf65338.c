__int64 __fastcall PiCMCaptureProblemInputData(_OWORD *a1, unsigned int a2, __int64 a3, _OWORD *a4)
{
  int v4; // ebx
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  _OWORD *v7; // rax

  v4 = 0;
  if ( a1 && a2 >= 0x1A0 )
  {
    v5 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (unsigned __int64)a1 + a2;
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = a4;
    do
    {
      *v7 = *a1;
      v7[1] = a1[1];
      v7[2] = a1[2];
      v7[3] = a1[3];
      v7[4] = a1[4];
      v7[5] = a1[5];
      v7[6] = a1[6];
      v7 += 8;
      *(v7 - 1) = a1[7];
      a1 += 8;
      --v5;
    }
    while ( v5 );
    *v7 = *a1;
    v7[1] = a1[1];
    if ( *(_DWORD *)a4 == 416 )
      *((_WORD *)a4 + 203) = 0;
    else
      v4 = -1073741811;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 < 0 )
    memset(a4, 0, 0x1A0uLL);
  return (unsigned int)v4;
}
