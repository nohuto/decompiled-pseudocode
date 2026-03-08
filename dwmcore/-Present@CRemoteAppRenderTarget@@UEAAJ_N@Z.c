/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801E7DE8
 * Callers:
 *     ?Present@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1801195D0 (-Present@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800F1BF8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v1 = 0;
  if ( *((_BYTE *)this - 50) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this - 41) + 1104LL) == 6 )
    {
      v3 = *((_QWORD *)this - 22);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL, 8LL);
        *((_BYTE *)this - 50) = 0;
        v1 = v4;
        if ( v4 == -2005270518 )
        {
          ScheduleCompositionPass(0, 0x2000u);
          v1 = 0;
          *((_BYTE *)this - 203) = 1;
        }
        else if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x12Bu, 0LL);
        }
      }
    }
  }
  return v1;
}
