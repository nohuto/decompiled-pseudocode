/*
 * XREFs of ?_Calculate_growth@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801E39F4
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801E33E4 (--$_Emplace_reallocate@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Calculate_growth(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (qword_1803E30B0 - CSyncLockGroup::g_syncLockGroups) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
