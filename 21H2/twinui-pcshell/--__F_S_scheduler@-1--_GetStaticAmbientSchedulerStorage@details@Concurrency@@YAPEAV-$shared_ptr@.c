/*
 * XREFs of ??__F_S_scheduler@?1??_GetStaticAmbientSchedulerStorage@details@Concurrency@@YAPEAV?$shared_ptr@Uscheduler_interface@Concurrency@@@std@@XZ@YAXXZ @ 0x180177620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall `Concurrency::details::_GetStaticAmbientSchedulerStorage'::`2'::`dynamic atexit destructor for '_S_scheduler''()
{
  if ( qword_180651BA8 )
    std::_Ref_count_base::_Decref(qword_180651BA8);
}
