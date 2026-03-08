/*
 * XREFs of ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801E35B0
 * Callers:
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E3300 (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801E362C (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801E3AB4 (-erase@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@V-.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18012A1B0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 */

CParallelModeGroup *__fastcall CParallelModeGroup::`scalar deleting destructor'(CParallelModeGroup *this)
{
  void **v1; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  bool v5; // zf

  v1 = (void **)((char *)this + 16);
  *(_QWORD *)this = &CSyncLockGroup::`vftable';
  v3 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( v3 )
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v3);
  v4 = *v1;
  v5 = *v1 == v1 + 3;
  *v1 = 0LL;
  if ( v5 )
    v4 = 0LL;
  operator delete(v4);
  operator delete(this);
  return this;
}
