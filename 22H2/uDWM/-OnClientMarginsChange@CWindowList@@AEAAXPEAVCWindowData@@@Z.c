/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001338C
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000B750 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015020 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001ACD0 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B0F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011540 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18001514C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18001618C (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180044708 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x180057E12 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // edi
  float v5; // xmm0_4
  int v6; // esi
  float v7; // xmm0_4
  int v8; // ebp
  float v9; // xmm0_4
  int v10; // r14d
  float v11; // xmm0_4
  int *v12; // rcx
  int v13; // r8d
  CVisual *v14; // rcx
  CWindowIconic *v15; // rcx
  __int64 i; // rdi
  __int64 j; // rdi
  CWindowData *v18; // rcx
  CThumbnailVisual *v19; // rcx
  __int64 v20; // rax
  CThumbnailVisual *v21; // rcx
  _DWORD v22[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((float *)a2 + 76);
  v4 = (int)ceilf_0((float)*((int *)a2 + 61) * v3);
  v5 = (float)*((int *)a2 + 62);
  v22[0] = v4;
  v6 = (int)ceilf_0(v5 * v3);
  v7 = (float)*((int *)a2 + 63);
  v22[1] = v6;
  v8 = (int)ceilf_0(v7 * v3);
  v9 = (float)*((int *)a2 + 64);
  v22[2] = v8;
  v10 = (int)ceilf_0(v9 * v3);
  v11 = (float)*((int *)a2 + 69);
  v22[3] = v10;
  ceilf_0(v11 * v3);
  if ( !(unsigned __int8)operator==((char *)a2 + 64, v22) || *((_DWORD *)a2 + 24) != v13 )
  {
    *v12 = v4;
    v12[1] = v6;
    v12[2] = v8;
    v12[3] = v10;
    v14 = (CVisual *)*((_QWORD *)a2 + 48);
    *((_DWORD *)a2 + 24) = v13;
    if ( v14 )
    {
      CVisual::SetDirtyFlags(v14, 0x2000u);
      CWindowData::UnmetTabRequirementsMaybeUpdated(v18);
    }
    v15 = (CWindowIconic *)*((_QWORD *)a2 + 53);
    if ( v15 )
      CWindowIconic::UpdateSizeOrMargins(v15, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 132); i = (unsigned int)(i + 1) )
    {
      v19 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 63) + 8 * i) + 88LL);
      if ( v19 )
      {
        v20 = *((_QWORD *)v19 + 46);
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 + 77) )
            CThumbnailVisual::SetDirtyFlags(v19, 0x4000);
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 124); j = (unsigned int)(j + 1) )
    {
      v21 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 59) + 8 * j) + 88LL);
      if ( v21 )
        CThumbnailVisual::SetDirtyFlags(v21, 4096);
    }
    if ( *((_QWORD *)a2 + 50) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 56LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
        *((_QWORD *)a2 + 5));
  }
}
