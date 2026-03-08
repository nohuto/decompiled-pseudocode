/*
 * XREFs of ?GetIntersectingMonitorTargets@CDesktopTree@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@@Z @ 0x18020CA64
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801E7FA8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180041810 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEAVIMonitorTarget@@@?$vector@PEAVIMonitorTarget@@V?$allocator@PEAVIMonitorTarget@@@std@@@std@@QEAAPEAPEAVIMonitorTarget@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18020C730 (--$_Emplace_reallocate@PEAVIMonitorTarget@@@-$vector@PEAVIMonitorTarget@@V-$allocator@PEAVIMonit.c)
 */

void __fastcall CDesktopTree::GetIntersectingMonitorTargets(__int64 a1, float *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  unsigned __int8 (__fastcall ***v7)(_QWORD, __int128 *); // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 4536);
  v5 = *(_QWORD *)(a1 + 4544);
  while ( v3 != v5 )
  {
    v7 = *(unsigned __int8 (__fastcall ****)(_QWORD, __int128 *))v3;
    v12 = 0LL;
    v14 = 0LL;
    if ( (**v7)(v7, &v14)
      && TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(a2, (float *)&v14) )
    {
      v8 = *(_QWORD *)v3 + *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 4LL);
      v9 = v12;
      v12 = 0LL;
      if ( v9 )
      {
        v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v8 + 8))(
             v8 + 8,
             &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
             &v12) >= 0 )
      {
        v11 = *(_BYTE **)(a3 + 8);
        v13 = v12;
        if ( v11 == *(_BYTE **)(a3 + 16) )
        {
          std::vector<IMonitorTarget *>::_Emplace_reallocate<IMonitorTarget *>((const void **)a3, v11, &v13);
        }
        else
        {
          *(_QWORD *)v11 = v12;
          *(_QWORD *)(a3 + 8) += 8LL;
        }
      }
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
    v3 += 8LL;
  }
}
