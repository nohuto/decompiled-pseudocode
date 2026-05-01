/*
 * XREFs of ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x1800886F4
 * Callers:
 *     ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x1800886B0 (-IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z.c)
 *     ?get_IsViewCloaked@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAE@Z @ 0x1800C6AC0 (-get_IsViewCloaked@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAE@Z.c)
 * Callees:
 *     _lambda_74927f198c7a4d51e19dba7d682bfcb9_::operator() @ 0x18014F024 (_lambda_74927f198c7a4d51e19dba7d682bfcb9_--operator().c)
 */

char __fastcall CSingleViewShellExperience::IsViewCloaked(CSingleViewShellExperience *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v2[0] = this;
  v2[1] = &v3;
  v3 = 1;
  lambda_74927f198c7a4d51e19dba7d682bfcb9_::operator()(v2);
  return v3;
}
