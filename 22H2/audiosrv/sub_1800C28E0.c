/*
 * XREFs of sub_1800C28E0 @ 0x1800C28E0
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_18007A858 @ 0x18007A858 (sub_18007A858.c)
 *     sub_1800C293C @ 0x1800C293C (sub_1800C293C.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C3344 @ 0x1800C3344 (sub_1800C3344.c)
 *     sub_1800C3468 @ 0x1800C3468 (sub_1800C3468.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     unknown_libname_80 @ 0x1800C728D (unknown_libname_80.c)
 *     sub_1800CDA20 @ 0x1800CDA20 (sub_1800CDA20.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 *     ?dtor$0@?0??set@?$task_completion_event@U?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Concurrency@@QEBA_NU?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Z@4HA @ 0x1800CDF1E (-dtor$0@-0--set@-$task_completion_event@U-$pair@EPEAV_CancellationTokenState@details@Concurrency.c)
 *     sub_1800F2AF0 @ 0x1800F2AF0 (sub_1800F2AF0.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 *     sub_1800F3AB5 @ 0x1800F3AB5 (sub_1800F3AB5.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C28E0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return _o_free(v1);
  return result;
}
