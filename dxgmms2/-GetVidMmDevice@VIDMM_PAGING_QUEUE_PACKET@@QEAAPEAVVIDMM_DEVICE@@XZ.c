/*
 * XREFs of ?GetVidMmDevice@VIDMM_PAGING_QUEUE_PACKET@@QEAAPEAVVIDMM_DEVICE@@XZ @ 0x1C00F12E8
 * Callers:
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C008EDC0 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00EDB78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     <none>
 */

struct VIDMM_DEVICE *__fastcall VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(VIDMM_PAGING_QUEUE_PACKET *this)
{
  struct VIDMM_DEVICE *result; // rax

  if ( *((_BYTE *)this + 24) )
    return (struct VIDMM_DEVICE *)*((_QWORD *)this + 7);
  result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 9);
  if ( !result )
  {
    result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 8);
    if ( result )
      return (struct VIDMM_DEVICE *)*((_QWORD *)result + 1);
  }
  return result;
}
