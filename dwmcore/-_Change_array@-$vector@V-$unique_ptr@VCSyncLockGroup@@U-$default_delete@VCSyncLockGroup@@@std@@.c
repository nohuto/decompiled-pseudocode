/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@2@_K1@Z @ 0x1801E3A34
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801E33E4 (--$_Emplace_reallocate@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x1801E3338 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CSyncLockGroup>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( CSyncLockGroup::g_syncLockGroups )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CSyncLockGroup>>>(
      (void ***)CSyncLockGroup::g_syncLockGroups,
      (void ***)qword_1803E30A8);
    std::_Deallocate<16,0>(
      (void *)CSyncLockGroup::g_syncLockGroups,
      (qword_1803E30B0 - CSyncLockGroup::g_syncLockGroups) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  CSyncLockGroup::g_syncLockGroups = a2;
  qword_1803E30A8 = a2 + 8 * a3;
  result = a2 + 8 * a4;
  qword_1803E30B0 = result;
  return result;
}
