/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x1801863AC
 * Callers:
 *     ?Present@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F5240 (-Present@CRemoteAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D8A44 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v1 = 0;
  if ( *((_BYTE *)this - 56) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this - 40) + 952LL) == 6 )
    {
      v3 = *((_QWORD *)this - 22);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL, 8LL);
        *((_BYTE *)this - 56) = 0;
        v1 = v4;
        if ( v4 == -2005270518 )
        {
          ScheduleCompositionPass(0, 0x2000u);
          v1 = 0;
          *((_BYTE *)this - 207) = 1;
        }
        else if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x110u, 0LL);
        }
      }
    }
  }
  return v1;
}
