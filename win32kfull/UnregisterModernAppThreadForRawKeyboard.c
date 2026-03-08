/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x1C01AB2A8
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C01E4748 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C0038CB0 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00D5AC8 (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01AA8F0 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(_QWORD *)(a1 + 424);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 824) + 100LL) & 0x1000) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1272);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 1272) = v3 & 0xFFDFFFFF;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration((const struct tagPROCESSINFO *)v2) )
        {
          v6 = 0LL;
          v5[0] = 393217;
          v5[1] = 1;
          RegisterRawInputDevices((__int64)v5, 1u, 2u);
        }
      }
    }
  }
  return 1LL;
}
