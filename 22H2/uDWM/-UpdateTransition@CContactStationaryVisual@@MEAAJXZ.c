/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x1800A1EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020250 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180025114 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B4D0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003D008 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E190 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F28C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800A1E70 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  float v5; // xmm0_4
  struct tagSIZE *v6; // rbx
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11; // ecx
  float v12; // xmm0_4
  int v13; // edx
  float v14; // xmm0_4
  int v15; // eax
  __int64 cx; // kr00_8
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  char v22; // al
  __int64 v23; // rax
  _QWORD *v24; // r8
  int v25; // eax
  double v26; // xmm1_8

  if ( !*((_QWORD *)this + 45) )
  {
    v2 = *((_DWORD *)this + 87);
    if ( (v2 & 1) != 0 )
    {
      v3 = *((_DWORD *)this + 102);
      v4 = (int)(float)((float)*(double *)(*((_QWORD *)this + 44) + 48LL) * (float)v3);
      if ( v4 >= v3 )
        v4 = v3 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 46), *(struct CBitmapSource **)(*((_QWORD *)this + 48) + 8LL * v4));
      v2 = *((_DWORD *)this + 87);
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 83) - *((float *)this + 82)) * v5) + *((float *)this + 82)));
      v2 = *((_DWORD *)this + 87);
    }
    if ( (v2 & 8) != 0 )
    {
      v6 = (struct tagSIZE *)((char *)this + 376);
      v7 = *((float *)this + 84);
      v8 = *((float *)this + 85);
      v9 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      *((_QWORD *)this + 47) = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      v10 = (float)((float)(v8 - v7) * v9) + v7;
      v11 = (int)(float)((float)*((int *)this + 94) * v10);
      v12 = (float)*((int *)this + 95);
      if ( v11 < 1 )
        v11 = 1;
      v6->cx = v11;
      v13 = (int)(float)(v12 * v10);
      if ( v13 < 1 )
        v13 = 1;
      *((_DWORD *)this + 95) = v13;
    }
    else
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_20;
      v6 = (struct tagSIZE *)((char *)this + 376);
      v14 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      v15 = (int)(float)((float)((float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v14)
                               + *((float *)this + 84))
                       * (float)*((int *)this + 76));
      *((_DWORD *)this + 94) = v15;
      if ( v15 < 1 )
      {
        v6->cx = 1;
        v15 = 1;
      }
      *((_DWORD *)this + 95) = v15;
    }
    CVisual::SetSize(*((CVisual **)this + 46), v6);
    cx = v6->cx;
    v17 = *((_DWORD *)this + 75) - *((_DWORD *)this + 95) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 46), *((_DWORD *)this + 74) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 46), v17);
    goto LABEL_20;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_20:
  v18 = *((_QWORD *)this + 44);
  if ( v18 )
  {
    if ( *(_BYTE *)(v18 + 72) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(
          v19,
          (__int64)&UdwmContactStationaryVisual_End,
          *((unsigned int *)this + 104));
    }
  }
  v20 = *((_QWORD *)this + 45);
  if ( v20 && (*(_BYTE *)(v20 + 72) || (float)*(double *)(v20 + 48) == 1.0) )
  {
    v21 = (*(_DWORD *)(v20 + 8))-- == 1;
    v22 = CDesktopManager::s_fTimelineDirty;
    if ( v21 )
      v22 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v22;
    v23 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v23 )
    {
      CTimelineBase::CTimelineBase(v23, *((float *)this + 79), 0.0, 1.0, *((_DWORD *)this + 86));
      *v24 = &CTimeline<float>::`vftable';
    }
    else
    {
      v24 = 0LL;
    }
    v25 = *((_DWORD *)this + 87) & 2;
    *((_QWORD *)this + 44) = v24;
    if ( (_BYTE)v25 )
      v26 = *((float *)this + 82);
    else
      v26 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v26);
  }
  return 0LL;
}
