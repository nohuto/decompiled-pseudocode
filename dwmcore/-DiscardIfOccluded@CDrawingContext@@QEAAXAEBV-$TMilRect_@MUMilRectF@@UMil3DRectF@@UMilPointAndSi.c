/*
 * XREFs of ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075EAC
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C2990 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x1801310BA (McTemplateU0xqdddd_EventWriteTransfer.c)
 */

_UNKNOWN **__fastcall CDrawingContext::DiscardIfOccluded(__int64 a1, float *a2)
{
  _UNKNOWN **result; // rax
  float v3; // xmm7_4
  float v5; // xmm6_4
  float *v6; // rdi
  float v7; // xmm0_4
  float *v8; // rbx
  __int64 v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm0_4
  __int64 v14; // rdi
  int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // r9d
  __int128 v19; // [rsp+48h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = a2[2];
  v5 = *a2;
  if ( v3 > *a2 )
  {
    v6 = a2 + 3;
    v7 = a2[3];
    v8 = a2 + 1;
    if ( v7 > a2[1] )
    {
      v9 = *(_QWORD *)(a1 + 8072);
      if ( v9 )
      {
        if ( v3 <= v5
          || v7 <= *v8
          || (v19 = *(_OWORD *)a2,
              result = (_UNKNOWN **)CArrayBasedCoverageSet::IsCovered(v9 + 448, &v19, 0x7FFFFFFFLL),
              (_BYTE)result) )
        {
          v10 = v5 - 0.5;
          if ( v10 < -2147483600.0 )
          {
            LODWORD(v19) = 0x80000000;
          }
          else if ( v10 >= 2147483600.0 )
          {
            LODWORD(v19) = 0x7FFFFFFF;
          }
          else
          {
            LODWORD(v19) = (int)ceilf_0(v10);
          }
          v11 = *v8 - 0.5;
          if ( v11 < -2147483600.0 )
          {
            DWORD1(v19) = 0x80000000;
          }
          else if ( v11 >= 2147483600.0 )
          {
            DWORD1(v19) = 0x7FFFFFFF;
          }
          else
          {
            DWORD1(v19) = (int)ceilf_0(v11);
          }
          v12 = v3 - 0.5;
          if ( v12 < -2147483600.0 )
          {
            DWORD2(v19) = 0x80000000;
          }
          else if ( v12 >= 2147483600.0 )
          {
            DWORD2(v19) = 0x7FFFFFFF;
          }
          else
          {
            DWORD2(v19) = (int)ceilf_0(v12);
          }
          v13 = *v6 - 0.5;
          if ( v13 < -2147483600.0 )
          {
            HIDWORD(v19) = 0x80000000;
          }
          else if ( v13 >= 2147483600.0 )
          {
            HIDWORD(v19) = 0x7FFFFFFF;
          }
          else
          {
            HIDWORD(v19) = (int)ceilf_0(v13);
          }
          v14 = *(_QWORD *)(a1 + 40);
          result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 56LL))(*(_QWORD *)(a1 + 32));
          v15 = (int)result;
          if ( result )
          {
            result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD, _UNKNOWN **, __int128 *, __int64))(**(_QWORD **)(v14 + 560) + 1064LL))(
                                    *(_QWORD *)(v14 + 560),
                                    result,
                                    &v19,
                                    1LL);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              return (_UNKNOWN **)McTemplateU0xqdddd_EventWriteTransfer(
                                    v17,
                                    v16,
                                    v15,
                                    v18,
                                    v19,
                                    SBYTE4(v19),
                                    SBYTE8(v19),
                                    SBYTE12(v19));
          }
        }
      }
    }
  }
  return result;
}
