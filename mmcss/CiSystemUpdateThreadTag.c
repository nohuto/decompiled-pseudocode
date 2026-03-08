/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0002970
 * Callers:
 *     CiSchedulerRemoveThread @ 0x1C0002250 (CiSchedulerRemoveThread.c)
 *     CiSchedulerAddThread @ 0x1C0002840 (CiSchedulerAddThread.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0002920 (CiSchedulerSetTaskIndexThreadTag.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C00042EC (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C00073C0 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
