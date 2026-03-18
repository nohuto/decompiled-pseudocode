/*
 * XREFs of ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800E6710
 * Callers:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x18008DD30 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800E66E4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180287BF0 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     ??1CD2DTarget@@QEAA@XZ @ 0x1800E673C (--1CD2DTarget@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

CD2DTarget *__fastcall CD2DTarget::`scalar deleting destructor'(CD2DTarget *this)
{
  CD2DTarget::~CD2DTarget(this);
  operator delete(this, 0x50uLL);
  return this;
}
