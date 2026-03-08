/*
 * XREFs of ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C004489C
 * Callers:
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpi(const struct tagWND *a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  return v1;
}
