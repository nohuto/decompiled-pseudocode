/*
 * XREFs of ?TryGetLastInteractionDate@ShellFeedsExperienceHelpers@@YA_NPEAU_SYSTEMTIME@@@Z @ 0x1800B7CC0
 * Callers:
 *     ?TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@XZ @ 0x1800B7E14 (-TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA-AV-$time_point@Usystem_clock@chr.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     swscanf @ 0x180090B5C (swscanf.c)
 */

bool __fastcall ShellFeedsExperienceHelpers::TryGetLastInteractionDate(
        ShellFeedsExperienceHelpers *this,
        struct _SYSTEMTIME *a2)
{
  LSTATUS ValueW; // eax
  const char *v4; // r9
  bool v5; // sf
  bool result; // al
  __int16 v7; // [rsp+40h] [rbp-58h] BYREF
  __int16 v8; // [rsp+44h] [rbp-54h] BYREF
  __int16 v9; // [rsp+48h] [rbp-50h] BYREF
  __int16 v10; // [rsp+4Ch] [rbp-4Ch] BYREF
  __int16 v11; // [rsp+50h] [rbp-48h] BYREF
  __int16 v12; // [rsp+54h] [rbp-44h] BYREF
  DWORD v13; // [rsp+58h] [rbp-40h] BYREF
  DWORD v14; // [rsp+5Ch] [rbp-3Ch] BYREF
  wchar_t Buffer[20]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = 40;
  v14 = 1;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
             L"LastUserInteractedDate",
             2u,
             &v14,
             Buffer,
             &v13);
  v5 = ValueW < 0;
  if ( ValueW > 0 )
    v5 = 1;
  if ( v5 )
  {
LABEL_5:
    result = 0;
  }
  else
  {
    swscanf(Buffer, L"%02hu-%02hu-%4huT%02hu-%02hu-%02hu", &v9, &v8, &v7, &v10, &v11, &v12);
    *(_WORD *)this = v7;
    *((_WORD *)this + 1) = v8;
    *((_WORD *)this + 3) = v9;
    *((_WORD *)this + 4) = v10;
    *((_WORD *)this + 5) = v11;
    *((_WORD *)this + 6) = v12;
    result = 1;
  }
  try
  {
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2AD,
      (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\ShellFeedsExperienceHelpers.h",
      v4);
    goto LABEL_5;
  }
  return result;
}
