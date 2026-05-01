/*
 * XREFs of ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1802335B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180233A38 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnMessage(
        CToastCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 == 26 && (_DWORD)a3 == 67 )
    {
      v4 = CToastCenterExperienceManager::OnTargetedMessage((char *)this - 32, 4LL);
      if ( v4 < 0 )
      {
        v5 = 497LL;
LABEL_9:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
      }
    }
  }
  else
  {
    v6 = (char *)this - 32;
    if ( a3 == v6 )
    {
      v4 = CToastCenterExperienceManager::OnTargetedMessage(v6, a4);
      if ( v4 < 0 )
      {
        v5 = 491LL;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
