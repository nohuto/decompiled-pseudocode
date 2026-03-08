/*
 * XREFs of ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x18002160C
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18008E940 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800216AC (-GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080F78 (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CDrawingContext::PopClipBounds(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, &v7, a3);
  v5 = *((_DWORD *)this + 804);
  if ( v5 )
    *((_DWORD *)this + 804) = v5 - 1;
  v6 = *((_QWORD *)this + 113);
  LOBYTE(v4) = 1;
  v7 = 0LL;
  --*(_QWORD *)(v6 - 168);
  ((void (__fastcall *)(char *, _QWORD, __int64, __int128 *))CScopedClipStack::GetTopGpuClipInScope)(
    (char *)this + 896,
    0LL,
    v4,
    &v7);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(
                           (char *)this + 228,
                           &v7) )
    *((_BYTE *)this + 8169) = 1;
}
