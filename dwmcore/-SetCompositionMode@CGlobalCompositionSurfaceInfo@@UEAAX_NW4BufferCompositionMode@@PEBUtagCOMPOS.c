/*
 * XREFs of ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800D4C30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18001DFBC (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z @ 0x180252E74 (-ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18025869C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     McTemplateU0xxqqqxxqn_EventWriteTransfer @ 0x180258B68 (McTemplateU0xxqqqxxqn_EventWriteTransfer.c)
 */

unsigned __int64 __fastcall CGlobalCompositionSurfaceInfo::SetCompositionMode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rdi
  struct CComposition *v6; // r9
  char v8; // bp
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 result; // rax
  bool v14; // si
  __int64 v15; // rcx
  CComposition *v16; // rcx
  _BYTE v17[16]; // [rsp+60h] [rbp-48h] BYREF

  v4 = (CGlobalCompositionSurfaceInfo::CBindInfo *)(a1 + 104);
  v6 = g_pComposition;
  v8 = a2;
  if ( !a3 )
  {
    v10 = 0LL;
    if ( g_pComposition )
      v10 = *((_QWORD *)g_pComposition + 62);
    v11 = *(_BYTE *)(a1 + 296) == 0;
    *(_QWORD *)(a1 + 272) = v10;
    if ( !v11 && !*(_BYTE *)(a1 + 297) && *(int *)(a1 + 280) >= 2 )
    {
      CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(v4, 1);
      v6 = g_pComposition;
    }
    if ( v8
      && a4
      && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0
      && CCompositionSurfaceInfo::ConsumeDxFlipRect(*(CCompositionSurfaceInfo **)v4, (struct MilRectU *)v17)
      && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0xxqqqxxqn_EventWriteTransfer(
        *(_QWORD *)v4,
        a2,
        *a4,
        a4[2],
        a4[4],
        a4[5],
        a4[6],
        *(_QWORD *)(*(_QWORD *)v4 + 40LL),
        *(_QWORD *)(*(_QWORD *)v4 + 128LL),
        *(_DWORD *)(*(_QWORD *)v4 + 148LL));
      v6 = g_pComposition;
    }
  }
  v12 = 0LL;
  if ( v6 )
    v12 = *((_QWORD *)v6 + 62);
  result = v12 - *(_QWORD *)(a1 + 272);
  v14 = result <= 0xF;
  if ( *(_BYTE *)(a1 + 296) && *(_BYTE *)(a1 + 297) && result > 0xF )
    result = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(v4, 0);
  v15 = *(_QWORD *)(a1 + 120);
  if ( v15 )
  {
    LOBYTE(v6) = v14;
    LOBYTE(a2) = v8;
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct CComposition *))(*(_QWORD *)v15 + 32LL))(
               v15,
               a2,
               a3,
               v6);
    if ( (_BYTE)result )
      return CComposition::AddCompSurfInfoUpdate(v16, *(struct CCompositionSurfaceInfo **)v4);
  }
  return result;
}
