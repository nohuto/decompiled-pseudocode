/*
 * XREFs of MagpComposeDesktop @ 0x1C0120198
 * Callers:
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     DwmAsyncMagnCreate @ 0x1C0271E20 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0271FA8 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0272488 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0272588 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C027269C (DwmAsyncMagnSetWindowSharedTextures.c)
 */

void __fastcall MagpComposeDesktop(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // rdi
  void *v5; // rax
  __int64 *j; // rbx
  void *v7; // rax
  int v8; // eax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax

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
        v7 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
        DwmAsyncMagnCreate(v7);
        v8 = *((_DWORD *)j + 4);
        if ( (v8 & 4) != 0 )
        {
          v9 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
          DwmAsyncMagnSetWindowColorTransform(v9);
          v8 = *((_DWORD *)j + 4);
        }
        if ( (v8 & 8) != 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
          DwmAsyncMagnSetWindowFilterList(v10);
          v8 = *((_DWORD *)j + 4);
        }
        if ( (v8 & 0x10) != 0 )
        {
          v11 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8));
          DwmAsyncMagnSetWindowSharedTextures(v11);
        }
      }
      *((_DWORD *)j + 4) &= ~0x20u;
    }
  }
}
