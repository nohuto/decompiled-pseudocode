/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180003190
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180003070 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180003328 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x1800092F4 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000B114 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000BF24 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000C4E4 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027EA0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002A100 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  float ScalingFactorForCVI; // xmm0_4
  struct tagRECT v13; // xmm0
  CBaseObject *v14; // rcx
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-28h]
  void *v18; // [rsp+28h] [rbp-20h]
  CBaseObject *v19; // [rsp+30h] [rbp-18h] BYREF

  if ( dword_1800E6A64 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6A64);
    if ( dword_1800E6A64 == -1 )
    {
      dword_1800E3F34 = -2147023434;
      Init_thread_footer(&dword_1800E6A64);
    }
  }
  v19 = 0LL;
  v8 = CVisual::Initialize(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3F34, 1u, v8, 0x57u, v18);
    return v9;
  }
  v10 = CWindowSnapshot::Create(a2, &v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    v17 = 90;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 91);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v11)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v11 + 416),
                a4,
                (struct CCachedVisualImageProxy **)this + 36,
                (float *)this + 88) >= 0 )
    {
      v10 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v9 = v10;
      if ( v10 < 0 )
      {
        v17 = 95;
        goto LABEL_21;
      }
LABEL_12:
      v13 = *a4;
      v14 = v19;
      *((_QWORD *)this + 35) = v19;
      *((struct tagRECT *)this + 21) = v13;
      *((struct tagRECT *)this + 20) = v13;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      CVisual::SetDirtyFlags(this, 0x1000u);
      goto LABEL_15;
    }
    if ( !a3 )
    {
      v9 = -2147023434;
      v17 = 100;
      v16 = -2147023434;
      goto LABEL_23;
    }
    *((_QWORD *)this + 39) = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    if ( (*(_DWORD *)(v11 + 616) & 0xFFF) == 0x17 )
      ScalingFactorForCVI = FLOAT_1_0;
    else
      ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a4);
    *((float *)this + 88) = ScalingFactorForCVI;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 64LL))(*((_QWORD *)this + 39));
    v9 = v10;
    if ( v10 < 0 )
    {
      v17 = 116;
      goto LABEL_21;
    }
    v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a4);
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_12;
    v17 = 119;
  }
LABEL_21:
  v16 = v10;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3F34, 1u, v16, v17, v18);
LABEL_15:
  if ( v19 )
    CBaseObject::Release(v19);
  return v9;
}
