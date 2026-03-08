/*
 * XREFs of ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0206FD0
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C00CB290 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C02071A8 (GetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindGID(struct tagGESTURECONFIGLIST **a1, int a2, struct tagGESTURECONFIGLIST **a3)
{
  unsigned int v3; // r10d
  struct tagGESTURECONFIGLIST *v4; // r11
  struct tagGESTURECONFIGLIST *i; // r9

  v3 = 0;
  v4 = 0LL;
  for ( i = a1[a2 & 7]; i; i = *(struct tagGESTURECONFIGLIST **)i )
  {
    if ( *((_DWORD *)i + 2) == a2 )
    {
      v4 = i;
      v3 = 1;
    }
  }
  *a3 = v4;
  return v3;
}
