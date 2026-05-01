/*
 * XREFs of ?IsDeveloperOverrideEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18027517C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x180269F48 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z @ 0x18026233C (-GetCortanaRegKey@CortanaExperienceHelpers@@YAJPEBGPEAK@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsDeveloperOverrideEnabled(
        CortanaAvailability *this,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  int CortanaRegKey; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *(_BYTE *)this = 0;
  CortanaRegKey = CortanaExperienceHelpers::GetCortanaRegKey(L"DevOverrideOneSettings", (BYTE *)&v8, a3);
  v5 = CortanaRegKey;
  if ( CortanaRegKey != -2147024894 )
  {
    if ( CortanaRegKey < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)CortanaRegKey);
      return v5;
    }
    if ( v8 == 1 )
      *(_BYTE *)this = 1;
  }
  return 0LL;
}
