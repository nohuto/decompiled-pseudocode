__int64 __fastcall HalpMceRecoveryNotRequiredIntel(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  result = 0LL;
  if ( ((v1 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported)
    && ((v1 & 0xEFC0) == 0xC0 || (v1 & 0xEF00) == 0x100 && (v1 & 3) == 2 && (unsigned __int8)v1 >> 4 == 7)
    && (v1 & 0xC00000000000000LL) == 0xC00000000000000LL )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( (*(_QWORD *)(a1 + 56) & 0x1C0LL) == 0x80 )
      return HalpMemoryErrorDeferredRecovery(
               (unsigned int)HalpMcaPhysicalAddressMask & *(_DWORD *)(a1 + 48) & ~((1 << (v4 & 0x3F)) - 1),
               0,
               0,
               0,
               v1,
               0,
               1,
               0);
  }
  return result;
}
