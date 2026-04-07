/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800283C0
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011E14 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800171C4 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800854A0 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18002848C (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180028584 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(struct IWICBitmap *a1, const struct _MARGINS *a2, struct CBitmapSource **a3)
{
  __int64 v5; // rax
  CBitmapSource *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax

  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v6 = (CBitmapSource *)v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &CBitmapSource::`vftable';
    *(_DWORD *)(v5 + 80) = 0x80000000;
    *(_DWORD *)(v5 + 88) = 0x80000000;
    *(_DWORD *)(v5 + 84) = 0x80000000;
    *(_DWORD *)(v5 + 92) = 0x80000000;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CBitmapSource::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x88u);
    }
    else
    {
      v9 = CBitmapSource::Update(v6, a1);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8Au);
      }
      else
      {
        *a3 = v6;
        v6 = 0LL;
      }
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x86u);
  }
  return v8;
}
