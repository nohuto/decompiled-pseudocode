/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x1403B1468
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HalpProcessorFence @ 0x1403F9340 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  char v4; // bp
  __int64 InternalData; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned int i; // ecx
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+80h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v24 & 0x200) != 0
    && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
  {
    v4 = 1;
    v20 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v20 >> 6);
    Affinity.Mask = 1LL << (v20 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  InternalData = HalpTimerGetInternalData(a1);
  v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(InternalData);
  v22 = v9;
  HalpProcessorFence();
  v10 = 1LL << *(_DWORD *)(a1 + 220);
  v11 = v9;
  v12 = 0LL;
  v13 = 0;
  v14 = a2 * *(_QWORD *)(a1 + 192) + 9999999;
  v15 = v14 / 0x989680 + 1;
  if ( v14 / 0x989680 != -1LL )
  {
    do
    {
      if ( a3 )
      {
        if ( (++v13 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
          _mm_pause();
        else
          qword_140C4A200(v13);
      }
      else
      {
        for ( i = 0; i < 0xC8; ++i )
        {
          _mm_pause();
          v17 = i * HalpGlobalVolatile;
          HalpGlobalVolatile = v17;
        }
      }
      v18 = HalpTimerGetInternalData(a1);
      v19 = (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v18);
      if ( v19 < v11 )
        v12 += v10;
      v11 = v19;
    }
    while ( v19 + v12 - v22 < v15 );
  }
  if ( v4 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
