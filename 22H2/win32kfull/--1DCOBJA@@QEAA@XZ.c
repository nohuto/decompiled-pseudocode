/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0131264
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008EF30 (GreHintDCWnd.c)
 *     DxgkEngGetClientRect @ 0x1C015A1E0 (DxgkEngGetClientRect.c)
 *     DxgkEngIsRedirectionDC @ 0x1C026FDC0 (DxgkEngIsRedirectionDC.c)
 *     GreCancelDC @ 0x1C02AA280 (GreCancelDC.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v4 = 0;
    v3 = *v2;
    HmgDecrementShareReferenceCountEx(v2, &v4);
    if ( v4 )
      GrepDeleteDC(v3, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 2);
}
