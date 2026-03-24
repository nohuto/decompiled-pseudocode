/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D4E30
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C0107960 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D581C (UnregisterModernAppThreadForRawKeyboard.c)
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
    if ( (*(_DWORD *)(i + 1232) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
