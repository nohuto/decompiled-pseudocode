/*
 * XREFs of ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009C0F0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18006E530 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18008E8A8 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18009BECC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18009F3E8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DDAB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009FAF8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800C1370 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??0CMergedDirtyRect@@QEAA@XZ @ 0x1800D2CF4 (--0CMergedDirtyRect@@QEAA@XZ.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z @ 0x1800D5BF4 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedDirtyRect@@@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

double __fastcall CVisual::AddAdditionalDirtyRect(CVisual *this, __int64 a2)
{
  double result; // xmm0_8
  _DWORD *v5; // r8
  __int64 v6; // rax
  _BYTE *v7; // rdx
  unsigned int i; // ecx
  struct CMergedDirtyRect **v9; // rsi
  struct CMergedDirtyRect *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  CMergedDirtyRect *v26; // rax
  CMergedDirtyRect *v27; // rsi
  struct CMergedDirtyRect *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rax

  if ( (*((_BYTE *)this + 88) & 4) == 0 )
  {
    *(_QWORD *)&result = *(unsigned int *)(a2 + 8);
    if ( *(float *)&result > *(float *)a2 )
    {
      *(_QWORD *)&result = *(unsigned int *)(a2 + 12);
      if ( *(float *)&result > *(float *)(a2 + 4) )
      {
        v5 = (_DWORD *)*((_QWORD *)this + 28);
        if ( (*v5 & 0x40000000) == 0 )
          goto LABEL_40;
        v6 = (unsigned int)v5[1];
        v7 = v5 + 2;
        for ( i = 0; i < (unsigned int)v6; ++v7 )
        {
          if ( *v7 == 2 )
            break;
          ++i;
        }
        v9 = i >= (unsigned int)v6
           ? 0LL
           : (struct CMergedDirtyRect **)((char *)v5 + 8LL * i - (((_BYTE)v6 + 15) & 7) + v6 + 15);
        v10 = *v9;
        if ( !v10 )
        {
LABEL_40:
          v26 = (CMergedDirtyRect *)DefaultHeap::Alloc(0x60uLL);
          v27 = v26;
          if ( !v26 )
            return CVisual::PropagateFlags(this, 4LL);
          memset_0(v26, 0, 0x60uLL);
          v28 = CMergedDirtyRect::CMergedDirtyRect(v27);
          v10 = v28;
          if ( !v28 )
            return CVisual::PropagateFlags(this, 4LL);
          CVisual::SetAdditionalDirtyRects(this, v28);
        }
        (*(void (__fastcall **)(struct CMergedDirtyRect *, __int64))(*(_QWORD *)v10 + 16LL))(v10, a2);
        v11 = *((_QWORD *)this + 3);
        if ( (v11 & 2) != 0 )
          v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v11) = v11 & 1;
        if ( (_DWORD)v11 )
        {
          v29 = 0LL;
          v30 = (unsigned int)v11;
          do
          {
            v31 = CPtrArrayBase::operator[]((char *)this + 24, v29);
            if ( v31 != *((_QWORD *)this + 10) )
              (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v31 + 72LL))(v31, 1LL, this);
            ++v29;
            --v30;
          }
          while ( v30 );
        }
        v12 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 168LL))(this);
        *((_BYTE *)this + 88) |= 8u;
        v13 = v12;
        if ( v12 )
          ++*(_DWORD *)(v12 + 28);
        v14 = *((_QWORD *)this + 10);
        if ( (*((_BYTE *)this + 95) & 2) != 0 )
        {
          do
          {
            if ( !v14 )
              break;
            v15 = *(_BYTE *)(v14 + 88);
            if ( v15 < 0 )
              break;
            *(_BYTE *)(v14 + 88) = v15 | 0x80;
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 168LL))(v14);
            v17 = v16;
            if ( v16 )
            {
              if ( v16 != v13 )
                ++*(_DWORD *)(v16 + 24);
            }
            else
            {
              v17 = v13;
            }
            v18 = *(_QWORD *)(v14 + 24);
            if ( (v18 & 2) != 0 )
              v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v18) = v18 & 1;
            if ( (_DWORD)v18 )
            {
              v20 = 0LL;
              v21 = (unsigned int)v18;
              v22 = 16LL;
              do
              {
                v23 = *(_QWORD *)(v14 + 24);
                if ( (v23 & 2) != 0 )
                  v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  v24 = *(_QWORD *)(v14 + 24) & 1LL;
                if ( v20 >= v24 )
                {
                  v25 = 0LL;
                }
                else if ( v24 == 1 )
                {
                  v25 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                else
                {
                  _mm_lfence();
                  v25 = *(_QWORD *)((*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v22);
                }
                if ( v25 != *(_QWORD *)(v14 + 80) )
                  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))(*(_QWORD *)v25 + 72LL))(v25, 1LL, v14);
                ++v20;
                v22 += 8LL;
                --v21;
              }
              while ( v21 );
            }
            v19 = v14;
            v13 = v17;
            v14 = *(_QWORD *)(v14 + 80);
          }
          while ( (*(_BYTE *)(v19 + 95) & 2) != 0 );
        }
      }
    }
  }
  return result;
}
