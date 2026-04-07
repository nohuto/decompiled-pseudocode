/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x180026ADC
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180026B90 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180023F1C (--0CAtlasedImage@@IEAA@XZ.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::Create(struct CAtlasButton **a1)
{
  CAtlasedImage *v2; // rax
  CAtlasedImage *v3; // rbx
  unsigned int v4; // ebx

  if ( a1 )
  {
    v2 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            160LL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0xA0uLL);
      CAtlasedImage::CAtlasedImage(v3);
      *((_QWORD *)v3 + 16) = 0LL;
      *((_QWORD *)v3 + 17) = 0LL;
      *((_DWORD *)v3 + 37) = 0;
      *(_QWORD *)v3 = &CAtlasButton::`vftable';
      *((_DWORD *)v3 + 36) = 1;
      *((_BYTE *)v3 + 152) = 0;
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      *a1 = v3;
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x7Fu);
      *a1 = 0LL;
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x7Fu);
  }
  return v4;
}
