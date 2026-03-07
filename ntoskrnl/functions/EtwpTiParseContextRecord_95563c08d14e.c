__int64 __fastcall EtwpTiParseContextRecord(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int16 v6; // si

  v6 = 0;
  memset(a1, 0, 0x60uLL);
  if ( (a2 & 0x10001) == 0x10001 )
  {
    v6 = 1;
    *a1 = *(unsigned int *)(a3 + 184);
    a1[1] = *(unsigned int *)(a3 + 196);
    a1[3] = *(unsigned int *)(a3 + 180);
  }
  if ( (a2 & 0x10002) == 0x10002 )
  {
    a1[4] = *(unsigned int *)(a3 + 176);
    v6 |= 2u;
    a1[5] = *(unsigned int *)(a3 + 172);
    a1[6] = *(unsigned int *)(a3 + 168);
    a1[7] = *(unsigned int *)(a3 + 164);
    a1[8] = *(unsigned int *)(a3 + 160);
    a1[9] = *(unsigned int *)(a3 + 156);
    *((_OWORD *)a1 + 5) = 0LL;
  }
  if ( (a2 & 0x100001) == 0x100001 )
  {
    v6 |= 1u;
    *a1 = *(_QWORD *)(a3 + 248);
    a1[1] = *(_QWORD *)(a3 + 152);
    a1[2] = 0LL;
  }
  if ( (a2 & 0x100002) == 0x100002 )
  {
    v6 |= 2u;
    a1[3] = *(_QWORD *)(a3 + 160);
    a1[4] = *(_QWORD *)(a3 + 120);
    a1[5] = *(_QWORD *)(a3 + 128);
    a1[6] = *(_QWORD *)(a3 + 136);
    a1[7] = *(_QWORD *)(a3 + 144);
    a1[8] = *(_QWORD *)(a3 + 168);
    a1[9] = *(_QWORD *)(a3 + 176);
    a1[10] = *(_QWORD *)(a3 + 184);
    a1[11] = *(_QWORD *)(a3 + 192);
  }
  return v6;
}
