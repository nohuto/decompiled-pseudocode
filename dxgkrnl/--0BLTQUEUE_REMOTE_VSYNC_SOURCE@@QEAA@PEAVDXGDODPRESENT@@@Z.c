/*
 * XREFs of ??0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z @ 0x1C03D08EC
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01C7040 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

BLTQUEUE_REMOTE_VSYNC_SOURCE *__fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::BLTQUEUE_REMOTE_VSYNC_SOURCE(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2)
{
  BLTQUEUE_REMOTE_VSYNC_SOURCE *result; // rax

  *(_QWORD *)this = &BLTQUEUE_REMOTE_VSYNC_SOURCE::`vftable';
  memset((char *)this + 8, 0, 0x40uLL);
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *(_QWORD *)((char *)this + 108) = 0LL;
  KeInitializeTimerEx((PKTIMER)((char *)this + 8), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)this + 3, SynchronizationEvent, 0);
  *((_DWORD *)this + 29) = -1;
  result = this;
  *((_QWORD *)this + 12) = a2;
  return result;
}
