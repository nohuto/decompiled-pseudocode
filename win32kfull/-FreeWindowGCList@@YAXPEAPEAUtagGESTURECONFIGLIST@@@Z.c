/*
 * XREFs of ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C00F40AC
 * Callers:
 *     SetGestureConfigSettings @ 0x1C00CB3F8 (SetGestureConfigSettings.c)
 *     FreeWindowGCData @ 0x1C012EFE8 (FreeWindowGCData.c)
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
