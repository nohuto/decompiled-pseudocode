/*
 * XREFs of KiEnableKvaShadowing @ 0x140A89A8C
 * Callers:
 *     KiInitializeProcessorState @ 0x14081F788 (KiInitializeProcessorState.c)
 *     KiInitializeBootStructures @ 0x140A8BDF0 (KiInitializeBootStructures.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14022E140 (KiSetAddressPolicy.c)
 *     KeGetPrcb @ 0x140257210 (KeGetPrcb.c)
 *     HvlRescindEnlightenments @ 0x14036EA90 (HvlRescindEnlightenments.c)
 *     KiIsKvaLeakSimulated @ 0x140377ABC (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x140377AD0 (KiIsKvaShadowDisabled.c)
 *     KiInitializeDescriptorIst @ 0x140377AE4 (KiInitializeDescriptorIst.c)
 *     KiShadowProcessorAllocation @ 0x140A89C48 (KiShadowProcessorAllocation.c)
 *     KiInitializeIdt @ 0x140A8F6F8 (KiInitializeIdt.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r11
  unsigned __int8 v10; // cf
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int16 v14; // cx

  if ( KiIsKvaShadowDisabled() )
  {
    KiIsKvaShadowConfigDisabled = 1;
  }
  else
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v6 + 11520) = 3LL;
    if ( !(_BYTE)KiKernelCetEnabled && KiIsKvaLeakSimulated() )
      KiKvaLeakageSimulate = 1;
    if ( KiKvaLeakage || KiKvaLeakageSimulate )
    {
      v7 = __readcr3();
      *(_QWORD *)(v6 + 40576) = v7;
      *(_QWORD *)(v5 + 4216) = *(_QWORD *)(v5 + 4100);
      KiInitializeDescriptorIst(v6, v5);
      *(_QWORD *)(v9 + 4100) = v9 + 16896;
      if ( *(_DWORD *)(a1 + 36) )
      {
        result = KiShadowProcessorAllocation(a1, v9, a3);
        if ( !(_DWORD)result )
          return result;
        v14 = *(_WORD *)(KeGetPrcb(0) + 40618);
        *(_DWORD *)(a1 + 40600) |= 2u;
        *(_WORD *)(a1 + 40618) = v14;
      }
      else
      {
        LOBYTE(v8) = 1;
        KiInitializeIdt(v9, v8);
        KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
        byte_140D4A2D0 = 1;
        _InterlockedOr(dword_140D4A7BC, 0x4000u);
        KiSetAddressPolicy();
        v10 = _bittest64((const signed __int64 *)(a1 + 35232), 0x2Au);
        *(_WORD *)(a1 + 40618) = 24;
        if ( v10 )
        {
          v11 = __readcr4();
          __writecr4(v11 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
          v12 = __readcr3();
          __writecr3(v12 | 2);
          KiFlushPcid |= 1u;
        }
        if ( (*(_QWORD *)(a1 + 35232) & 0x240000000000LL) == 0x240000000000LL )
          KiFlushPcid |= 2u;
        HvlRescindEnlightenments();
        KiKvaShadow = 1;
        KiKvaShadowMode = 2 - (KiFlushPcid != 0);
      }
      if ( KiFlushPcid )
        _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40576), 0x3FuLL);
    }
  }
  return 1LL;
}
