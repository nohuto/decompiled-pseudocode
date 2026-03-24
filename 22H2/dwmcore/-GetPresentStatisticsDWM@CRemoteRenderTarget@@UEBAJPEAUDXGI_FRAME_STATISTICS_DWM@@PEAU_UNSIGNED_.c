/*
 * XREFs of ?GetPresentStatisticsDWM@CRemoteRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800E53A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::GetPresentStatisticsDWM(
        CRemoteRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 32LL))(v5, &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x172u, 0LL);
    }
    else
    {
      v10 = DWORD2(v13);
      *(_QWORD *)a2 = v13;
      v11 = v14;
      *((_QWORD *)a2 + 1) = v14;
      *((_QWORD *)a2 + 3) = v11;
      *((_DWORD *)a2 + 4) = v10;
      *a3 = *(struct _UNSIGNED_RATIO *)((char *)this + 164);
    }
  }
  else
  {
    v9 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x17Eu, 0LL);
  }
  return v9;
}
