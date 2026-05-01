/*
 * XREFs of ??$?0HU?$ratio@$0DM@$00@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@HU?$ratio@$0DM@$00@std@@@12@@Z @ 0x180116950
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2 @ 0x18011D490 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
        _QWORD *a1,
        int *a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = 600000000LL * *a2;
  return result;
}
