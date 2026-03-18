/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D0A74
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C01028F0 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D12DC (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 40); ; i = *(_QWORD *)(i + 664) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1256) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
