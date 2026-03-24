/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18009F990
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x1800A08FC (--1CVisual@@MEAA@XZ.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800DFA54 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801AE2CC (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009F260 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18009F2C8 (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18009FCA4 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800C1370 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800C13A8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CComposition **this)
{
  CPtrArrayBase *v1; // rbx
  unsigned int Count; // eax
  int v4; // edi
  int v5; // esi
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r12
  char v12; // al
  int v13; // edx
  int v14; // r8d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+60h] [rbp+8h]

  v1 = (CPtrArrayBase *)(this + 9);
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(this + 9));
  v4 = 0;
  v5 = 0;
  if ( Count )
  {
    v6 = 0LL;
    v7 = 0LL;
    v17 = Count;
    v8 = 16LL;
    do
    {
      v9 = CPtrArrayBase::operator[](v1, v7);
      v11 = v9;
      if ( v9 )
      {
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, v9);
        *(_QWORD *)(v11 + 80) = 0LL;
        CComposition::AddToInputSinkPossibleDirtyList(this[2], (struct CVisual *)v11);
        v12 = *(_BYTE *)(v11 + 264);
        v13 = v4 + *(_DWORD *)(v11 + 256);
        v14 = v5 + *(_DWORD *)(v11 + 260);
        v4 = v13 + 1;
        if ( (v12 & 1) == 0 )
          v4 = v13;
        v5 = v14 + 1;
        if ( (v12 & 2) == 0 )
          v5 = v14;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v15 = CPtrArrayBase::GetCount(v1);
        if ( v6 >= v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x139u, 0LL);
        }
        else if ( v15 == 1 )
        {
          *(_QWORD *)v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL) + v8) = 0LL;
        }
        v10 = v17;
      }
      ++v7;
      ++v6;
      v8 += 8LL;
      v17 = v10 - 1;
    }
    while ( v10 != 1 );
  }
  if ( (*(_QWORD *)v1 & 2) != 0 )
    operator delete((void *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)v1 = 0LL;
  CVisual::PropagateBackdropUpdates((CVisual *)this, -v4, -v5);
  CVisual::PropagateFlags(this, 5LL);
}
