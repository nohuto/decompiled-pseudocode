/*
 * XREFs of ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03B6674
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C17B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C01C3C80 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3E44 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BC43C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x1C03B6500 (-CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyTopology(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int16 v6; // cx
  unsigned int v7; // esi
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( !a2 )
    return 3221225485LL;
  v4 = *((_QWORD *)this + 8);
  v5 = *((_QWORD *)a2 + 8);
  if ( !v4 )
    return 3221225507LL;
  v6 = *(_WORD *)(v5 + 20);
  if ( *(_WORD *)(v4 + 22) < v6 )
    return 3221225507LL;
  *(_WORD *)(v4 + 20) = v6;
  v7 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) = *(_DWORD *)(v5 + 24);
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = *(_DWORD *)(v5 + 36);
  v8 = *((_QWORD *)this + 8);
  *(_OWORD *)v8 = *(_OWORD *)v5;
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(v5 + 16);
  if ( *(_WORD *)(v5 + 20) )
  {
    while ( (int)CCD_TOPOLOGY::CopyPathModalityDescriptor(
                   (CCD_TOPOLOGY *)(296LL * v7),
                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v7 + *((_QWORD *)this + 8) + 56LL),
                   (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v7 + v5 + 56)) >= 0 )
    {
      if ( ++v7 >= *(unsigned __int16 *)(v5 + 20) )
        goto LABEL_8;
    }
    v13 = *((_QWORD *)this + 8);
    goto LABEL_14;
  }
LABEL_8:
  if ( *(_QWORD *)(v5 + 48) )
  {
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = (unsigned int)DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    v10 = 340 * MaximumAdapterCountInSession;
    if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
      v10 = -1LL;
    *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v10, 0x63644356u, 256LL);
    v12 = *((_QWORD *)this + 8);
    if ( !*(_QWORD *)(v12 + 48) )
    {
      v13 = *((_QWORD *)this + 8);
LABEL_14:
      WdLogSingleEntry2(6LL, this, v13);
      return 3221225495LL;
    }
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(v5 + 40);
    memmove(
      *(void **)(*((_QWORD *)this + 8) + 48LL),
      *(const void **)(v5 + 48),
      340LL * *(unsigned int *)(*((_QWORD *)this + 8) + 40LL));
  }
  return 0LL;
}
