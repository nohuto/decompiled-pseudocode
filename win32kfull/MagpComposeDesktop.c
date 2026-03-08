/*
 * XREFs of MagpComposeDesktop @ 0x1C007EC4C
 * Callers:
 *     zzzComposeDesktop @ 0x1C007D394 (zzzComposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnCreate @ 0x1C026F2B4 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026F43C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C026F91C (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C026FA1C (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C026FB30 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

void __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2)
{
  _QWORD **v2; // rsi
  _QWORD *i; // rdi
  void *v5; // rax
  __int64 *j; // rbx
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax

  v2 = (_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(a2 + 232) )
  {
    v5 = (void *)ReferenceDwmApiPort(a1);
    DwmAsyncMagnSetDesktopColorTransform(v5);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      if ( j[3] != -1 )
      {
        v7 = (void *)ReferenceDwmApiPort(**v2);
        DwmAsyncMagnCreate(v7);
        if ( (j[2] & 4) != 0 )
        {
          v8 = (void *)ReferenceDwmApiPort(**v2);
          DwmAsyncMagnSetWindowColorTransform(v8);
        }
        if ( (j[2] & 8) != 0 )
        {
          v9 = (void *)ReferenceDwmApiPort(**v2);
          DwmAsyncMagnSetWindowFilterList(v9);
        }
        if ( (j[2] & 0x10) != 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(**v2);
          DwmAsyncMagnSetWindowSharedTextures(v10);
        }
      }
      *((_DWORD *)j + 4) &= ~0x20u;
    }
  }
}
