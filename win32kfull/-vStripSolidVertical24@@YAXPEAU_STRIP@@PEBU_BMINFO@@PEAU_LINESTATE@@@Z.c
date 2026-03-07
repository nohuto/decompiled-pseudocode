void __fastcall vStripSolidVertical24(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int v3; // ebx
  int *v4; // r10
  int v5; // eax
  int v6; // r8d
  int v8; // edx
  int v9; // r9d
  char *v10; // r15
  _WORD *v11; // rcx
  __int64 v12; // r9
  int v13; // edx
  _BYTE *v14; // rcx

  v3 = *((_DWORD *)a3 + 1);
  v4 = (int *)((char *)a1 + 28);
  v5 = *((_DWORD *)a1 + 1);
  v6 = *(_DWORD *)a3;
  v8 = 4 * *((_DWORD *)a1 + 2);
  v9 = -4 * *((_DWORD *)a1 + 2);
  v10 = (char *)a1 + 4 * *(int *)a1 + 28;
  v11 = (_WORD *)*((_QWORD *)a1 + 2);
  if ( (v5 & 8) == 0 )
    v9 = v8;
  v12 = v9 - 2;
  do
  {
    v13 = *v4;
    do
    {
      *v11 = v3 ^ v6 & *v11;
      v14 = v11 + 1;
      *v14 = BYTE2(v3) ^ BYTE2(v6) & *v14;
      v11 = &v14[v12];
      --v13;
    }
    while ( v13 );
    v11 = (_WORD *)((char *)v11 + 3);
    ++v4;
  }
  while ( v4 < (int *)v10 );
  *((_QWORD *)a1 + 2) = v11;
}
