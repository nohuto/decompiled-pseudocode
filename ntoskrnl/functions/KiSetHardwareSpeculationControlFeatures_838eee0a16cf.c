char __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  _BYTE *v4; // rdx
  char result; // al
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0;
  v7 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, a2, BugCheckParameter3, &v8);
  v3 = BugCheckParameter3[0];
  v4 = (_BYTE *)(a1 + 1762);
  if ( (BugCheckParameter3[0] & 0x20) != 0 )
    *v4 |= 4u;
  if ( (_BYTE)KiKernelCetEnabled )
    *v4 |= 8u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = KiCpu0HardwareFlags;
    if ( (unsigned int)KiCpu0HardwareFlags != (unsigned __int64)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)KiCpu0HardwareFlags, v3, 0LL);
  }
  else
  {
    LODWORD(KiCpu0HardwareFlags) = v3;
    result = BYTE4(BugCheckParameter3[1]);
    *(_QWORD *)&KiSpeculationFeatures = v3 | KiSpeculationFeatures & 0xFFFFFFFF00000000uLL;
    qword_140D1EAF0 = v7;
    KiSsbdBit = v7;
    DWORD2(KiSpeculationFeatures) = BugCheckParameter3[1];
    BYTE12(KiSpeculationFeatures) = BYTE4(BugCheckParameter3[1]);
    KiSsbdMsr = BugCheckParameter3[1];
  }
  if ( v8 )
    KiMicrocodeTrackerEnabled = 1;
  if ( (*(_QWORD *)&v3 & 0x400000LL) != 0 )
  {
    result = 0x80;
    *(_WORD *)(a1 + 1760) |= 0x80u;
  }
  return result;
}
