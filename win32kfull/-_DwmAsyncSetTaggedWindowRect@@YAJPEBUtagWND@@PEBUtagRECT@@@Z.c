/*
 * XREFs of ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x1C01F8898
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetTaggedWindowRect @ 0x1C02704D0 (DwmAsyncSetTaggedWindowRect.c)
 */

__int64 __fastcall _DwmAsyncSetTaggedWindowRect(const struct tagWND *a1, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  void *v4; // rax

  v2 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v4 = (void *)ReferenceDwmApiPort(v3);
    return (unsigned int)DwmAsyncSetTaggedWindowRect(v4);
  }
  return v2;
}
