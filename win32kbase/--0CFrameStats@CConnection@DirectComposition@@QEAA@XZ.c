/*
 * XREFs of ??0CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1C00D6210
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

DirectComposition::CConnection::CFrameStats *__fastcall DirectComposition::CConnection::CFrameStats::CFrameStats(
        DirectComposition::CConnection::CFrameStats *this)
{
  *(_WORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  memset((char *)this + 48, 0, 0x1A0uLL);
  return this;
}
