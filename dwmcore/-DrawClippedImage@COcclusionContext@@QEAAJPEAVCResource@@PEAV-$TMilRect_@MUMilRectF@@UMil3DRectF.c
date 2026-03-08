/*
 * XREFs of ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801E3E44
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18012F7EE (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z @ 0x180019DE8 (-DoesImageOcclude@COcclusionContext@@AEAA_NPEAUIUnknown@@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawClippedImage(
        COcclusionContext *a1,
        struct IUnknown *a2,
        float *a3,
        __int64 a4,
        char a5)
{
  unsigned int v8; // esi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // r9
  unsigned int i; // edi
  float v13; // xmm0_4
  float *v14; // rdx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)a1 + 358)
    && COcclusionContext::DoesImageOcclude(a1, a2, a5 & 1)
    && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a4 + 64LL))(a4, &v23)
    && (_DWORD)v23 )
  {
    v8 = v23;
    v9 = (char *)operator new(saturated_mul((unsigned int)v23, 0x10uLL));
    v10 = v9;
    if ( v9 )
      `vector constructor iterator'(
        v9,
        16LL,
        v8,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
    else
      v10 = 0LL;
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a4 + 80LL))(a4, v10, (unsigned int)v23);
    for ( i = 0; i < (unsigned int)v23; ++i )
    {
      v13 = *a3;
      v14 = (float *)&v10[16 * i];
      v15 = *v14;
      if ( *a3 > *v14 )
      {
        *v14 = v13;
        v15 = v13;
      }
      v16 = a3[1];
      v17 = v14[1];
      if ( v16 > v17 )
      {
        v14[1] = v16;
        v17 = v16;
      }
      v18 = a3[2];
      v19 = v14[2];
      if ( v19 > v18 )
      {
        v14[2] = v18;
        v19 = v18;
      }
      v20 = a3[3];
      v21 = v14[3];
      if ( v21 > v20 )
      {
        v14[3] = v20;
        v21 = v20;
      }
      if ( v19 <= v15 || v21 <= v17 )
      {
        v14[3] = 0.0;
        v14[2] = 0.0;
        v14[1] = 0.0;
        *v14 = 0.0;
      }
      COcclusionContext::CollectRectangleForOcclusion((__int64)a1, (__int64)v14, 0, v11, 0LL);
    }
    if ( v10 )
      operator delete(v10);
  }
  return 0LL;
}
