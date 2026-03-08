/*
 * XREFs of ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0027F7C
 * Callers:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0027F7C (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 * Callees:
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C0027F7C (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     DwmAsyncChildZBandChange @ 0x1C0027FF8 (DwmAsyncChildZBandChange.c)
 */

__int64 __fastcall SetWindowTreeBand(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rax
  __int64 i; // rbx

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) = a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v5 = (void *)ReferenceDwmApiPort();
    result = DwmAsyncChildZBandChange(v5);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
    result = SetWindowTreeBand(i, a2);
  return result;
}
