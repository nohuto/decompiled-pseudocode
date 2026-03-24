/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1402D7250
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057B0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402061E4 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockCleanup @ 0x140304D20 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x140306650 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403752B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403929CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0208 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x1402D6F68 (IoGetOplockFullFoExt.c)
 */

__int64 __fastcall FsRtlpOplockDequeueRH(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v4; // r9
  __int64 result; // rax
  _QWORD *v6; // rcx

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24), a2, a3, a1);
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  result = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = result;
  *(_QWORD *)(result + 8) = v6;
  return result;
}
