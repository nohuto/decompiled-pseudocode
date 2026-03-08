/*
 * XREFs of ?_DwmAsyncClearTaggedWindowRect@@YAJPEBUtagWND@@@Z @ 0x1C01F8848
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncClearTaggedWindowRect @ 0x1C026F100 (DwmAsyncClearTaggedWindowRect.c)
 */

__int64 __fastcall _DwmAsyncClearTaggedWindowRect(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  void *v3; // rax

  v1 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v3 = (void *)ReferenceDwmApiPort(v2);
    return (unsigned int)DwmAsyncClearTaggedWindowRect(v3);
  }
  return v1;
}
