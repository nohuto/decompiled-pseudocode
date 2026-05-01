/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKPEAG@Z @ 0x180107E10
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x180108328 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        const unsigned __int16 *a2,
        void *a3,
        unsigned __int16 *a4)
{
  LSTATUS result; // eax
  DWORD v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = HIDWORD(this);
  v5 = 1;
  v7 = 40;
  result = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
             L"Campaign",
             2u,
             &v5,
             a3,
             &v7);
  if ( !result )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
