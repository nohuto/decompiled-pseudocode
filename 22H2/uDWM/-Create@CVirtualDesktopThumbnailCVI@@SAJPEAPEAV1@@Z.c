/*
 * XREFs of ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x180096E18
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1800975E0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::Create(struct CVirtualDesktopThumbnailCVI **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)v3 = &CVirtualDesktopThumbnailCVI::`vftable';
      *(_DWORD *)(v3 + 8) = 1;
      *(_OWORD *)(v3 + 56) = 0LL;
      *a1 = (struct CVirtualDesktopThumbnailCVI *)v3;
      return 0;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x89u);
      *a1 = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x89u);
  }
  return v2;
}
