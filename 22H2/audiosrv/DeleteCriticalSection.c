/*
 * XREFs of DeleteCriticalSection @ 0x1800B6B64
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18007A07C (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_18007A333 @ 0x18007A333 (sub_18007A333.c)
 *     sub_18007A3FB @ 0x18007A3FB (sub_18007A3FB.c)
 *     sub_18007A411 @ 0x18007A411 (sub_18007A411.c)
 *     sub_18007A427 @ 0x18007A427 (sub_18007A427.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA @ 0x18007A49B (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA.c)
 *     sub_18007A641 @ 0x18007A641 (sub_18007A641.c)
 *     sub_18007A66D @ 0x18007A66D (sub_18007A66D.c)
 *     sub_18007A97A @ 0x18007A97A (sub_18007A97A.c)
 *     sub_18007B4B0 @ 0x18007B4B0 (sub_18007B4B0.c)
 *     sub_18007B590 @ 0x18007B590 (sub_18007B590.c)
 *     sub_18007BA69 @ 0x18007BA69 (sub_18007BA69.c)
 *     ?dtor$5@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x18007C7B0 (-dtor$5@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_18007C7DC @ 0x18007C7DC (sub_18007C7DC.c)
 *     sub_18007CA50 @ 0x18007CA50 (sub_18007CA50.c)
 *     sub_18007CB7D @ 0x18007CB7D (sub_18007CB7D.c)
 *     ?dtor$0@?0???1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA @ 0x18007CB93 (-dtor$0@-0---1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA.c)
 *     sub_18007CBA9 @ 0x18007CBA9 (sub_18007CBA9.c)
 *     sub_1800CDEB2 @ 0x1800CDEB2 (sub_1800CDEB2.c)
 *     sub_1800CDED2 @ 0x1800CDED2 (sub_1800CDED2.c)
 *     sub_1800F983D @ 0x1800F983D (sub_1800F983D.c)
 *     sub_180105887 @ 0x180105887 (sub_180105887.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  __imp_DeleteCriticalSection(lpCriticalSection);
}
