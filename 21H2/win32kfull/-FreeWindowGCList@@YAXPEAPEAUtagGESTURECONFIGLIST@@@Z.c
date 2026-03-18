/*
 * XREFs of ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C011F4A8
 * Callers:
 *     FreeWindowGCData @ 0x1C005FC00 (FreeWindowGCData.c)
 *     SetGestureConfigSettings @ 0x1C0116A34 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWindowGCList(struct tagGESTURECONFIGLIST **a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = 8LL;
  do
  {
    v3 = *a1;
    if ( *a1 )
    {
      do
      {
        v4 = (_QWORD *)*v3;
        Win32FreePool(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    *a1++ = 0LL;
    --v2;
  }
  while ( v2 );
}
