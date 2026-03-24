/*
 * XREFs of ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x18024FDCC
 * Callers:
 *     ?SetHardwareProtection@CConversionSwapChain@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F7810 (-SetHardwareProtection@CConversionSwapChain@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x18024A2AC (-SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x18024F308 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CConversionSwapChain::SetHardwareProtection(CConversionSwapChain *this, unsigned __int8 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  int (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx

  v4 = CLegacySwapChain::SetHardwareProtection((CConversionSwapChain *)((char *)this - 424), a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xB5u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this - 60);
    if ( v7 )
    {
      v8 = (int (__fastcall ***)(_QWORD))(v7 + 8 + *(int *)(*(_QWORD *)(v7 + 8) + 8LL));
      if ( (**v8)(v8) < 0
        || (v9 = *((_QWORD *)this - 60) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this - 60) + 8LL) + 8LL),
            (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) != a2) )
      {
        v10 = *((_QWORD *)this - 60);
        *((_QWORD *)this - 60) = 0LL;
        if ( v10 )
        {
          v11 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    v12 = CConversionSwapChain::EnsureTargetBitmap((CConversionSwapChain *)((char *)this - 776));
    v6 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u, 0LL);
  }
  return v6;
}
