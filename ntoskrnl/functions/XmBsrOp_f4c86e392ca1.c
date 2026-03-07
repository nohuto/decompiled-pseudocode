_WORD *__fastcall XmBsrOp(_DWORD *a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // r9d
  int v5; // edx

  v2 = a1[4];
  v3 = 8 * a1[30] + 7;
  v4 = a1[27];
  v5 = v2 | 0x40;
  a1[4] = v5;
  if ( v4 )
  {
    while ( ((v4 >> v3) & 1) == 0 )
      --v3;
    a1[4] = v5 & 0xFFFFFFBF;
  }
  return XmStoreResult((__int64)a1, v3);
}
