/*
 * XREFs of ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C0207008
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C00CB290 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GCRemoveHashElement(struct tagGESTURECONFIGLIST **a1, int a2)
{
  struct tagGESTURECONFIGLIST **v2; // r9
  __int64 v3; // r8
  struct tagGESTURECONFIGLIST *v5; // r11
  struct tagGESTURECONFIGLIST **v6; // rcx
  struct tagGESTURECONFIGLIST *v7; // rax

  v2 = 0LL;
  v3 = a2 & 7;
  v5 = a1[v3];
  v6 = (struct tagGESTURECONFIGLIST **)v5;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( *((_DWORD *)v6 + 2) == a2 )
        break;
      v2 = v6;
      v6 = (struct tagGESTURECONFIGLIST **)*v6;
      if ( !v7 )
        return;
    }
    if ( v6 == (struct tagGESTURECONFIGLIST **)v5 )
      a1[v3] = v7;
    else
      *v2 = v7;
    Win32FreePool(v6);
  }
}
