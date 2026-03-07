__int64 __fastcall HalpHvWatchdogDiscover(__int64 a1, __int64 a2)
{
  _QWORD v8[18]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v9; // [rsp+B0h] [rbp+37h]

  if ( !HalpTimerWatchdogPhysicalOnly && HalpIsMicrosoftCompatibleHvLoaded(a1, a2) && (HalpEnlightenment & 0x20) == 0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v9 = __PAIR64__(_RBX, _RAX);
    if ( (_RDX & 0x400000) != 0 && (v9 & 0x100000000008LL) == 0x100000000008LL )
    {
      memset(v8, 0, sizeof(v8));
      v8[11] = 0LL;
      v8[12] = 0x4000000000LL;
      v8[1] = HalpHvWatchdogInitialize;
      v8[0] = 0x9000000001LL;
      v8[4] = HalpHvWatchdogArm;
      v8[5] = HalpHvWatchdogStop;
      v8[13] = 10000000LL;
      LODWORD(v8[17]) = 7;
      HIDWORD(v8[14]) = 163872;
      HalpTimerRegister((__int64)v8, 0LL);
    }
  }
  return 0LL;
}
