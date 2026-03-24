/*
 * XREFs of RegisterModernAppThreadForRawKeyboard @ 0x1C01D5770
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C0206FC0 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C0052630 (HasHidTable.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C0108350 (_RegisterRawInputDevices.c)
 */

__int64 __fastcall RegisterModernAppThreadForRawKeyboard(__int64 a1)
{
  int v1; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 1232);
  if ( (v1 & 0x200000) != 0 )
    return 1LL;
  if ( (unsigned int)HasHidTable(a1) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 832LL) + 100LL);
    if ( (v6 & 0x800) != 0 )
    {
      *(_DWORD *)(a1 + 1232) = v1 | 0x200000;
      return 1LL;
    }
    if ( (v6 & 0x10) != 0 )
    {
      UserSetLastError(85LL, v4, v5);
      return 0LL;
    }
  }
  v8 = 0LL;
  v7[0] = 393217;
  v7[1] = 16944;
  if ( !(unsigned int)RegisterRawInputDevices((__int64)v7, 1u, 2u) )
    return 0LL;
  *(_DWORD *)(a1 + 1232) |= 0x200000u;
  return 1LL;
}
