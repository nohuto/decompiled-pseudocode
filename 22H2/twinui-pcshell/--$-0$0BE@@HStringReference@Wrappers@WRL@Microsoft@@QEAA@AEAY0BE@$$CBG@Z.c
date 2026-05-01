/*
 * XREFs of ??$?0$0BE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BE@$$CBG@Z @ 0x1801D5A54
 * Callers:
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800741EC (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        const WCHAR *a2)
{
  this[1].Reserved.Reserved1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, a2, 0x14u, 0x13u);
  return this;
}
