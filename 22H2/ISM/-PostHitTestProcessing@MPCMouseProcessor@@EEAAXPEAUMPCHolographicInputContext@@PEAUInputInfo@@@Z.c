/*
 * XREFs of ?PostHitTestProcessing@MPCMouseProcessor@@EEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180196BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCMouseProcessor::PostHitTestProcessing(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) && *((_DWORD *)this + 1575) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v6 = (_OWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 293) + 240LL))(*((_QWORD *)Instance + 293));
    v7 = 2LL;
    v8 = (_OWORD *)((char *)a3 + 152);
    do
    {
      *v8 = *v6;
      v8[1] = v6[1];
      v8[2] = v6[2];
      v8[3] = v6[3];
      v8[4] = v6[4];
      v8[5] = v6[5];
      v8[6] = v6[6];
      v8 += 8;
      v9 = v6[7];
      v6 += 8;
      *(v8 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *v8 = *v6;
    v8[1] = v6[1];
    v8[2] = v6[2];
    v8[3] = v6[3];
    *((_QWORD *)v8 + 8) = *((_QWORD *)v6 + 8);
    *((_DWORD *)this + 1575) = 0;
  }
}
