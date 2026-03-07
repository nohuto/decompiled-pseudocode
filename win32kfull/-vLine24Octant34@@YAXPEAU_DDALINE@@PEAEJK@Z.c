void __fastcall vLine24Octant34(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r10d
  int v5; // ebp
  int v6; // esi
  int v7; // r11d
  __int64 v8; // rax

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = *((_DWORD *)a1 + 3);
  v8 = 3 * *((_DWORD *)a1 + 1);
LABEL_4:
  a2 += v8;
  while ( 1 )
  {
    a2[2] = BYTE2(a4);
    *(_WORD *)a2 = a4;
    if ( !--v7 )
      break;
    a2 -= 3;
    v4 += v6;
    if ( v4 >= 0 )
    {
      v4 -= v5;
      v8 = a3;
      goto LABEL_4;
    }
  }
}
