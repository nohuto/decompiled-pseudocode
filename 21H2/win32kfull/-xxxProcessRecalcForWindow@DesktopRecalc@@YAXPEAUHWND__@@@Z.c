/*
 * XREFs of ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C023B648
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall DesktopRecalc::xxxProcessRecalcForWindow(DesktopRecalc *this, HWND a2)
{
  _BYTE v2[4]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+24h] [rbp-34h]
  char v4; // [rsp+28h] [rbp-30h]
  __int128 v5; // [rsp+2Ch] [rbp-2Ch]

  v2[0] = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  CRecalcProp::s_xxxProcessTopologyChange((int)this, (__int64)v2);
}
