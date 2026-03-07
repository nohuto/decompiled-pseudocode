__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // cl
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  __int16 v8; // cx
  unsigned __int8 v10; // cf
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( KiIsKvaShadowDisabled() )
  {
    KiIsKvaShadowConfigDisabled = 1;
    return 1LL;
  }
  if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
    *(_QWORD *)(v3 + 11520) = 3LL;
  v4 = KiKernelCetEnabled;
  if ( !(_BYTE)KiKernelCetEnabled && KiIsKvaLeakSimulated() )
    KiKvaLeakageSimulate = 1;
  if ( !KiKvaLeakage && !KiKvaLeakageSimulate )
    return 1LL;
  if ( v4 )
    KeBugCheckEx(0x5Du, 0x4B766120uLL, 0x4B434554uLL, 0LL, 0LL);
  v5 = __readcr3();
  *(_QWORD *)(a1 + 40576) = v5;
  *(_QWORD *)(v2 + 4216) = *(_QWORD *)(v2 + 4100);
  KiInitializeDescriptorIst(a1, v2);
  *(_QWORD *)(v7 + 4100) = v7 + 16896;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    LOBYTE(v6) = 1;
    KiInitializeIdt(v7, v6);
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
    goto LABEL_12;
  }
  if ( (unsigned int)KiShadowProcessorAllocation(a1, v7) )
  {
    v8 = *(_WORD *)(KeGetPrcb(0) + 40618);
    *(_DWORD *)(a1 + 40600) |= 2u;
    *(_WORD *)(a1 + 40618) = v8;
LABEL_12:
    if ( KiFlushPcid )
      _interlockedbittestandset64((volatile signed __int32 *)(a1 + 40576), 0x3FuLL);
    return 1LL;
  }
  return 0LL;
}
