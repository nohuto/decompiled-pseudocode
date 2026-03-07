void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r8d

  if ( *((_QWORD *)a1 + 1) )
  {
    v7 = 8 * *((_DWORD *)a1 + 2);
    v8 = (a2 - a4) / a5;
    v9 = (a3 - a4) / a5;
    v10 = v7 - 1;
    if ( v9 < v7 )
      v10 = v9;
    if ( v8 > v10 )
      v8 = v10;
    CitpBitmapUpdateBits(a1, v8, v10);
  }
}
