/*
 * XREFs of ?Start@CTextTetherVisual@@QEAAJXZ @ 0x1800A2974
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18009FC6C (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A2A20 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x1800A2AF4 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::Start(CTextTetherVisual *this, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v5; // ebx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTextTetherVisual_Start,
      a3,
      1LL,
      (__int64)v7);
  *((_BYTE *)this + 424) = 1;
  updated = CTextTetherVisual::UpdateInstructions(this);
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xC2u);
    CTextTetherVisual::Stop(this);
  }
  return v5;
}
