/*
 * XREFs of ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C003F6AC
 * Callers:
 *     ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C02CA9F0 (-DxgkpProcessPowerPStateWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C004006C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z @ 0x1C02C68A0 (-DdiSetPowerPState@DXGADAPTER@@QEAAJKK@Z.c)
 */

void __fastcall DXGADAPTER::ProcessPStateTransitionRequest(DXGADAPTER *this, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  unsigned __int32 v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbp

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)this + 1111, 0);
  if ( *((_DWORD *)this + 1060) )
  {
    do
    {
      v5 = 248LL * v3;
      v6 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 529) + v5 + 244), -1);
      if ( v6 != -1 )
      {
        v7 = *((_QWORD *)this + 529);
        v8 = *(unsigned int *)(v7 + v5 + 144);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0pqqq_EtwWriteTransfer(
            v5,
            (unsigned int)&Dxgk_SetPowerPState,
            a3,
            (_DWORD)this,
            v8,
            *(_DWORD *)(v7 + v5 + 192),
            v6);
        if ( (int)DXGADAPTER::DdiSetPowerPState(this, v8, v6) < 0 )
          WdLogSingleEntry2(3LL, v8, v6);
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 1060) );
  }
}
