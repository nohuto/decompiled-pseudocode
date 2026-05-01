/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLock @ 0x18027937C
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18000F288 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18027F210 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A5B80 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6440 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x180279488 (CortanaHelpers--AllowCortanaAboveLockByEnterprisePolicy.c)
 */

char CortanaHelpers::AllowCortanaAboveLock()
{
  int v0; // ebx
  LSTATUS ValueW; // eax
  char v2; // cl
  unsigned __int64 v3; // r9
  bool v4; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( !IsPPIEdition() && (unsigned __int8)CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy() )
  {
    pcbData = 4;
    v0 = 0;
    pdwType = 0;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"VoiceActivationEnableAboveLockscreen",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    v2 = 1;
    LOWORD(v3) = 13;
    if ( ValueW )
    {
      if ( ValueW == 234 )
        ValueW = 13;
      v3 = (unsigned int)ValueW;
      if ( ValueW <= 0 )
      {
LABEL_15:
        if ( (v3 & 0x80000000) == 0LL )
        {
          if ( v0 )
            return v2;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2B,
            (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
            (const char *)v3);
        }
        return 0;
      }
    }
    else if ( pdwType == 4 )
    {
      if ( pvData <= 1 )
      {
        v3 = 0LL;
        v4 = pvData == 1;
LABEL_7:
        LOBYTE(v0) = v4;
        goto LABEL_15;
      }
    }
    else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v3 = 0LL;
      v4 = (_WORD)pvData == 49;
      goto LABEL_7;
    }
    v3 = (unsigned __int16)v3 | 0x80070000;
    goto LABEL_15;
  }
  return 0;
}
