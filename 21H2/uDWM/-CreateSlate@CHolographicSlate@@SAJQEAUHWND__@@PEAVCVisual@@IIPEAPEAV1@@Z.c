/*
 * XREFs of ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x180089144
 * Callers:
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800947CC (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x18008924C (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 */

__int64 __fastcall CHolographicSlate::CreateSlate(
        HWND a1,
        struct CVisual *a2,
        unsigned int a3,
        unsigned int a4,
        struct CHolographicSlate **a5)
{
  unsigned int v9; // edi
  __int64 v10; // rax
  CHolographicSlate *v11; // rbx
  int v12; // eax

  if ( a5 )
  {
    v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v11 = (CHolographicSlate *)v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_DWORD *)(v10 + 8) = 1;
      *(_QWORD *)v10 = &CHolographicSlate::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      v12 = CHolographicSlate::Initialize(v11, a1, a2, a3, a4);
      v9 = v12;
      if ( v12 >= 0 )
      {
        *a5 = v11;
        v11 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x21u);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1Fu);
    }
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Bu);
  }
  return v9;
}
