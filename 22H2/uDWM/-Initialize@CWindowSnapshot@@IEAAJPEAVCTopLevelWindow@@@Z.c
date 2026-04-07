/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002A1D4
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002A100 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013CB4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800156D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180028158 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029B30 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002A540 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18002A614 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x180056F8C (-GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z @ 0x18005767C (-SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  __int64 v2; // rdi
  char v5; // bp
  int v6; // eax
  unsigned int v7; // ebx
  CWindowData *v8; // rax
  CWindowData *v9; // rcx
  HWND WindowTabOwner; // rax
  __int64 v11; // rax
  CBaseObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CBaseObject *v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 91);
  v17 = 0LL;
  v5 = *(_BYTE *)(v2 + 608);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 608) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 384));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 95;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v16);
    goto LABEL_20;
  }
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        768LL);
  if ( v8 )
    v9 = CWindowData::CWindowData(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x64u);
    goto LABEL_20;
  }
  *((_QWORD *)v9 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 180LL) = *(_OWORD *)(v2 + 180);
  *(_OWORD *)(*((_QWORD *)this + 4) + 244LL) = *(_OWORD *)(v2 + 244);
  *(_OWORD *)(*((_QWORD *)this + 4) + 260LL) = *(_OWORD *)(v2 + 260);
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 616LL) = *(_DWORD *)(v2 + 616);
  *(_BYTE *)(*((_QWORD *)this + 4) + 612LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 612LL) ^ *(_BYTE *)(v2 + 612)) & 0x10;
  *(_BYTE *)(*((_QWORD *)this + 4) + 352LL) = *(_BYTE *)(v2 + 352);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 620LL) = *(_OWORD *)(v2 + 620);
  *(_OWORD *)(*((_QWORD *)this + 4) + 636LL) = *(_OWORD *)(v2 + 636);
  *(_OWORD *)(*((_QWORD *)this + 4) + 652LL) = *(_OWORD *)(v2 + 652);
  *(_OWORD *)(*((_QWORD *)this + 4) + 668LL) = *(_OWORD *)(v2 + 668);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 280LL) = *(_OWORD *)(v2 + 280);
  *(_QWORD *)(*((_QWORD *)this + 4) + 296LL) = *(_QWORD *)(v2 + 296);
  *(_BYTE *)(*((_QWORD *)this + 4) + 613LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 613LL) ^ *(_BYTE *)(v2 + 613)) & 2;
  *(_BYTE *)(*((_QWORD *)this + 4) + 609LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 609LL) ^ *(_BYTE *)(v2 + 609)) & 0x20;
  WindowTabOwner = CWindowData::GetWindowTabOwner((CWindowData *)v2);
  CWindowData::SetWindowTabOwner(*((CWindowData **)this + 4), WindowTabOwner);
  *(_BYTE *)(*((_QWORD *)this + 4) + 609LL) = (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0 ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 609LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_QWORD *)(v2 + 368);
  v11 = *(_QWORD *)(v2 + 368);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (*(_BYTE *)(v2 + 612) & 0x10) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree((__int64)a2, (struct CCanvasVisual ***)&v17, 4u);
    v7 = v6;
    if ( v6 < 0 )
    {
      v16 = 136;
      goto LABEL_19;
    }
    v12 = v17;
    v13 = *((_QWORD *)this + 4);
    v17 = 0LL;
    *((_QWORD *)this + 3) = v12;
    *(_QWORD *)(v13 + 384) = v12;
    v14 = *((_QWORD *)this + 3);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v14 = *((_QWORD *)this + 3);
    }
    *(_QWORD *)(v14 + 728) = *((_QWORD *)this + 4);
    v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
    v7 = v6;
    if ( v6 < 0 )
    {
      v16 = 145;
      goto LABEL_19;
    }
  }
LABEL_20:
  *(_BYTE *)(v2 + 608) &= ~2u;
  *(_BYTE *)(v2 + 608) |= v5 & 2;
  if ( v17 )
    CBaseObject::Release(v17);
  return v7;
}
