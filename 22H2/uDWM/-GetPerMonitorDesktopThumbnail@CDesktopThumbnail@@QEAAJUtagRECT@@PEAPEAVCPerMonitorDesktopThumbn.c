/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800B67F8
 * Callers:
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180097240 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA34C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800B65AC (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        struct tagRECT *a2,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rax
  int v6; // ebx
  HMONITOR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  struct CPerMonitorDesktopThumbnail *v14; // rcx
  int v16; // eax
  CBaseObject *v17; // [rsp+30h] [rbp-28h] BYREF

  v17 = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xF6u);
    goto LABEL_17;
  }
  v8 = *((_DWORD *)this + 76);
  v9 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v9);
      if ( *(HMONITOR *)(v10 + 56) == v5 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
  }
LABEL_8:
  if ( !*a3 )
  {
    v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( !v11 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x106u);
      goto LABEL_17;
    }
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)v11 = &CPerMonitorDesktopThumbnail::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)(v11 + 72) = 0LL;
    v17 = (CBaseObject *)v11;
    *(_QWORD *)(v11 + 16) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *(_QWORD *)(v11 + 64) = this;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *((_QWORD *)v17 + 7) = v7;
    v12 = *((_DWORD *)this + 76);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x109u);
      goto LABEL_17;
    }
    if ( v13 > *((_DWORD *)this + 75) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 280, 8u, 1, &v17);
      v6 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
      if ( v6 < 0 )
        goto LABEL_23;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 35) + 8LL * *((unsigned int *)this + 76)) = v17;
      *((_DWORD *)this + 76) = v13;
    }
    v14 = v17;
    v17 = 0LL;
    *a3 = v14;
  }
LABEL_17:
  if ( v17 )
    CBaseObject::Release(v17);
  return (unsigned int)v6;
}
