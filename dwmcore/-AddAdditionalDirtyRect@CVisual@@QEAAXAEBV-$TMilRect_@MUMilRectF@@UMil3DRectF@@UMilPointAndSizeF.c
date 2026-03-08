/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800991A8
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180096FCC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180098E88 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18012FA60 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800E1FC4 (--0CMergedDirtyRect@@QEAA@XZ.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800EA6AC (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AddAdditionalDirtyRect(CVisual *this, float *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  unsigned int i; // eax
  struct CMergedDirtyRect **v8; // rsi
  struct CMergedDirtyRect *v9; // rsi
  unsigned int Count; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  CMergedDirtyRect *v19; // rax
  CMergedDirtyRect *v20; // rsi
  struct CMergedDirtyRect *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rax

  if ( (*((_BYTE *)this + 96) & 4) == 0 && a2[2] > *a2 && a2[3] > a2[1] )
  {
    v4 = (_DWORD *)*((_QWORD *)this + 29);
    if ( (*v4 & 0x40000000) == 0 )
      goto LABEL_26;
    v5 = (unsigned int)v4[1];
    v6 = v4 + 2;
    for ( i = 0; i < (unsigned int)v5; ++v6 )
    {
      if ( *v6 == 2 )
        break;
      ++i;
    }
    v8 = i >= (unsigned int)v5
       ? 0LL
       : (struct CMergedDirtyRect **)((char *)v4 + 8LL * i - (((_BYTE)v5 + 15) & 7) + v5 + 15);
    v9 = *v8;
    if ( !v9 )
    {
LABEL_26:
      v19 = (CMergedDirtyRect *)DefaultHeap::Alloc(0x60uLL);
      v20 = v19;
      if ( !v19 || (memset_0(v19, 0, 0x60uLL), v21 = CMergedDirtyRect::CMergedDirtyRect(v20), (v9 = v21) == 0LL) )
      {
        CVisual::PropagateFlags((__int64)this, 4u);
        return;
      }
      CVisual::SetAdditionalDirtyRects(this, v21);
    }
    (*(void (__fastcall **)(struct CMergedDirtyRect *, float *))(*(_QWORD *)v9 + 16LL))(v9, a2);
    Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 24));
    if ( Count )
    {
      v22 = 0LL;
      v23 = Count;
      do
      {
        v24 = CPtrArrayBase::operator[]((char *)this + 24, v22);
        if ( v24 != *((_QWORD *)this + 11) )
          (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v24 + 72LL))(v24, 1LL, this);
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    v11 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
    *((_BYTE *)this + 96) |= 8u;
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 28);
    v13 = *((_QWORD *)this + 11);
    if ( (*((_BYTE *)this + 103) & 1) != 0 )
    {
      do
      {
        if ( !v13 )
          break;
        v14 = *(_BYTE *)(v13 + 96);
        if ( v14 < 0 )
          break;
        *(_BYTE *)(v13 + 96) = v14 | 0x80;
        v15 = *(_QWORD *)(v13 + 24);
        if ( (v15 & 2) != 0 )
          v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v15) = v15 & 1;
        v16 = (__int64 *)(v13 + 88);
        if ( (_DWORD)v15 )
        {
          v25 = 0LL;
          v26 = (unsigned int)v15;
          do
          {
            v27 = CPtrArrayBase::operator[](v13 + 24, v25);
            if ( v27 != *v16 )
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 72LL))(v27, 1LL, v13);
            ++v25;
            --v26;
          }
          while ( v26 );
        }
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13);
        if ( v17 )
        {
          if ( v12 != v17 )
          {
            ++*(_DWORD *)(v17 + 24);
            v12 = v17;
          }
        }
        v18 = v13;
        v13 = *v16;
      }
      while ( (*(_BYTE *)(v18 + 103) & 1) != 0 );
    }
  }
}
