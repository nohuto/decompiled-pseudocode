/*
 * XREFs of TtmpCallSetBuiltinPanelState @ 0x1409A0098
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1409A0A2C (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     PoSessionBuiltinPanelState @ 0x14059BAF0 (PoSessionBuiltinPanelState.c)
 *     TtmpStartCallout @ 0x1409A0CA0 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1409A0D8C (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpCallSetBuiltinPanelState(int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      memset(v6, 0, sizeof(v6));
      v7 = 0LL;
      TtmpStartCallout((unsigned int)v6, (_DWORD)a1, a2, 5, (__int64)PoSessionBuiltinPanelState, a3);
      PoSessionBuiltinPanelState(a3, *a1);
      return TtmpStopCallout(v6, 0LL);
    }
  }
  return result;
}
