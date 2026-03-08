/*
 * XREFs of ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C0229B38
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00FCADC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall DesktopRecalc::xxxProcessRecalcForWindow(DesktopRecalc *this, HWND a2)
{
  _BYTE v2[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+24h] [rbp-44h]
  char v4; // [rsp+2Ch] [rbp-3Ch]
  __int128 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  char v7; // [rsp+48h] [rbp-20h]

  v2[0] = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  CRecalcProp::s_xxxProcessTopologyChange((HWND)this, (struct CRecalcContext *)v2);
}
