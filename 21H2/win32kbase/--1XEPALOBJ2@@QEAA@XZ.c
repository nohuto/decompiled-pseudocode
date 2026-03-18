/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00DA46C
 * Callers:
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DBBCC (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(unsigned int **this)
{
  unsigned int *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *this = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 1);
}
