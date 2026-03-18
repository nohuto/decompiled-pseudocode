/*
 * XREFs of MiInitializeBootDefaults @ 0x140B73284
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     strstr @ 0x1403D8B70 (strstr.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  int v6; // eax

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140C699E5 = 1;
    dword_140D1D1CC = 0;
    *(_BYTE *)(MmWriteableSharedUserData + 748) = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      LODWORD(MiFlags) = MiFlags | 0x80;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmVerifierData )
    {
      v6 = MiFlags | 1;
      LODWORD(MiFlags) = MiFlags | 1;
      if ( KernelVerifier )
        LODWORD(MiFlags) = v6 | 2;
    }
    if ( (MiFlags & 1) == 0 || (VfRuleClasses & 0x400000) != 0 )
    {
      if ( !MmSpecialPoolTag )
        goto LABEL_9;
    }
    else
    {
      MmLargePageDriverBufferLength = -1;
    }
    MmProtectFreedNonPagedPool = 1;
  }
LABEL_9:
  v4 = MiFlags | 8;
  LODWORD(MiFlags) = MiFlags | 8;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    LODWORD(MiFlags) = v4 | 0x40;
  LODWORD(dword_140C683A0) = 275;
  qword_140C683B8 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_140C683C0 = 0LL;
  qword_140C65B20 = (__int64)&qword_140C65B18;
  qword_140C65B18 = (__int64)&qword_140C65B18;
  qword_140C65B10 = -10000000LL * dword_140D1D1E4;
  qword_140C683D8 = 0LL;
  qword_140C683B0 = 0LL;
  qword_140C659D0 = 0LL;
  qword_140C65A60 = 0LL;
  dword_140C680EC = 5;
  SpinLock = 0LL;
  qword_140C698C0 = 0LL;
  qword_140C65650 = 0LL;
  qword_140C65668 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140C65668 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
