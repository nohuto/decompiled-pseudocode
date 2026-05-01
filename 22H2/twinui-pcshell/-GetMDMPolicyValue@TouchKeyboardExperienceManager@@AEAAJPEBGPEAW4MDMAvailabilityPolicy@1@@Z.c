/*
 * XREFs of ?GetMDMPolicyValue@TouchKeyboardExperienceManager@@AEAAJPEBGPEAW4MDMAvailabilityPolicy@1@@Z @ 0x1803BA518
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C3E58 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4048 (-UpdateDockedModeAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C466C (-UpdateEmojiInputAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C48DC (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C4C00 (-UpdateHandwritingAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5068 (-UpdateNarrowLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5704 (-UpdateSplitLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1803C5A58 (-UpdateWideLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetMDMPolicyValue(
        TouchKeyboardExperienceManager *this,
        const unsigned __int16 *a2,
        enum TouchKeyboardExperienceManager::MDMAvailabilityPolicy *a3)
{
  int Policy; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v7[0] = 1;
  v7[1] = 2;
  Policy = PolicyManager_GetPolicy(L"TextInput", a2, v7, &v9);
  v5 = Policy;
  if ( Policy >= 0 )
  {
    result = 0LL;
    *(_DWORD *)a3 = *(_DWORD *)(v9 + 16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)Policy);
    return v5;
  }
  return result;
}
