/*
 * XREFs of ?vSolidFillRow24@@YAXPEAU_ROW@@KJPEAEKJK@Z @ 0x1C0305AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRow24(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        char a7)
{
  unsigned __int8 *v8; // r9
  __int64 v9; // r11
  unsigned __int8 *v10; // r8
  int i; // eax

  v8 = &a4[a6 * a3];
  if ( a2 )
  {
    v9 = a2;
    do
    {
      v10 = &v8[3 * (*(_DWORD *)a1 << a7)];
      for ( i = (*((_DWORD *)a1 + 1) - *(_DWORD *)a1) << a7; i; --i )
      {
        *(_WORD *)v10 = a5;
        v10[2] = BYTE2(a5);
        v10 += 3;
      }
      a1 = (struct _ROW *)((char *)a1 + 8);
      v8 += a6;
      --v9;
    }
    while ( v9 );
  }
}
