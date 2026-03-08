/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180099E24
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x180103434 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x18012DC42 (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180098E88 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CComposition **this)
{
  CPtrArrayBase *v1; // rbx
  unsigned int Count; // eax
  int v4; // ebp
  int v5; // r14d
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // r15
  struct CVisual *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  struct CVisual *v12; // rsi
  char v13; // cl
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  CComposition **v17; // rcx
  CComposition **v18; // rax
  unsigned __int64 v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v1 = (CPtrArrayBase *)(this + 10);
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(this + 10));
  v4 = 0;
  v5 = 0;
  v6 = Count;
  if ( Count )
  {
    v19 = 0LL;
    v7 = 0LL;
    v20 = Count;
    v8 = 16LL;
    do
    {
      v9 = (struct CVisual *)CPtrArrayBase::operator[](v1, v7);
      v12 = v9;
      if ( v9 )
      {
        if ( (*((_BYTE *)v9 + 103) & 1) != 0 )
        {
          CVisual::DirtyForInvisibleChild(this, v9);
          v5 += *((_DWORD *)v12 + 67);
          v13 = *((_BYTE *)v12 + 272);
          v14 = v4 + *((_DWORD *)v12 + 66);
          v4 = v14 + 1;
          if ( (v13 & 1) == 0 )
            v4 = v14;
          if ( (v13 & 4) != 0 )
            ++v5;
        }
        *((_QWORD *)v12 + 11) = 0LL;
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v12 + 16LL))(v12);
        v15 = CPtrArrayBase::GetCount(v1);
        v10 = v19;
        if ( v19 >= v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x126u, 0LL);
          v10 = v19;
        }
        else if ( v15 == 1 )
        {
          *(_QWORD *)v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL) + v8) = 0LL;
        }
        v11 = v20;
      }
      ++v7;
      v8 += 8LL;
      v19 = v10 + 1;
      v20 = v11 - 1;
    }
    while ( v11 != 1 );
  }
  if ( (*(_QWORD *)v1 & 2) != 0 )
    operator delete((void *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)v1 = 0LL;
  if ( v4 || v5 )
  {
    v17 = this;
    v18 = this;
    do
    {
      *((_DWORD *)v17 + 66) -= v4;
      *((_DWORD *)v17 + 67) -= v5;
      v17 = (CComposition **)v17[11];
      if ( v18 )
      {
        v18 = (CComposition **)v18[11];
        if ( v18 )
          v18 = (CComposition **)v18[11];
      }
    }
    while ( v17 != v18 );
  }
  if ( v6 )
    CVisual::PropagateFlags((__int64)this, 5u);
}
