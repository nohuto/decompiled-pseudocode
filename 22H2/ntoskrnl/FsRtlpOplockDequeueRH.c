/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x140301520
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1402FD670 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockCleanup @ 0x140300F14 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140301920 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140302464 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlUninitializeOplock @ 0x14034C030 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BF5C4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403D2CD0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140766820 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140301674 (IoGetOplockFullFoExt.c)
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // r10
  __int64 v3; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24));
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
