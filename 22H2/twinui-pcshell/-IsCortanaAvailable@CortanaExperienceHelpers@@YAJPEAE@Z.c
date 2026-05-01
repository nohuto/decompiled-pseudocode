/*
 * XREFs of ?IsCortanaAvailable@CortanaExperienceHelpers@@YAJPEAE@Z @ 0x180262E80
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x180264008 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1802755F8 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18026218C (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall CortanaExperienceHelpers::IsCortanaAvailable(
        CortanaExperienceHelpers *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"IsAvailable", (BYTE *)&v8, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey >= 0 )
  {
    *(_BYTE *)this = v8 == 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"internal\\shellcommonshell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)CortanaRegKey);
    return v5;
  }
}
