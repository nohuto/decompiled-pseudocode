/*
 * XREFs of MiInitializeBootDefaults @ 0x140B6EF9C
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     strstr @ 0x1403D3650 (strstr.c)
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
    byte_140C69565 = 1;
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
  LODWORD(dword_140C67F20) = 275;
  qword_140C67F38 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_140C67F40 = 0LL;
  qword_140C656A0 = (__int64)&qword_140C65698;
  qword_140C65698 = (__int64)&qword_140C65698;
  qword_140C65690 = -10000000LL * dword_140D1D1E4;
  qword_140C67F58 = 0LL;
  qword_140C67F30 = 0LL;
  qword_140C65550 = 0LL;
  qword_140C655E0 = 0LL;
  dword_140C67C6C = 5;
  SpinLock = 0LL;
  qword_140C69440 = 0LL;
  qword_140C651D0 = 0LL;
  qword_140C651E8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140C651E8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
