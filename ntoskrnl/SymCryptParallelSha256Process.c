/*
 * XREFs of SymCryptParallelSha256Process @ 0x1403EFFF0
 * Callers:
 *     KeComputeParallelSha256 @ 0x140569E10 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x1403F09A0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F0C60 (SymCryptParallelHashProcess_serial.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SymCryptRestoreXmm @ 0x14056ADCC (SymCryptRestoreXmm.c)
 *     SymCryptRestoreYmm @ 0x14056ADE4 (SymCryptRestoreYmm.c)
 *     SymCryptSaveXmm @ 0x14056ADFC (SymCryptSaveXmm.c)
 *     SymCryptSaveYmm @ 0x14056AE14 (SymCryptSaveYmm.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(v12) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptSaveXmm(v12) )
    {
      return (unsigned int)SymCryptParallelHashProcess_serial(
                             (unsigned int)&SymCryptParallelSha256Algorithm_default,
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    }
    else
    {
      v10 = SymCryptParallelHashProcess(
              (unsigned int)&SymCryptParallelSha256Algorithm_default,
              a1,
              a2,
              a3,
              a4,
              a5,
              a6,
              4);
      SymCryptRestoreXmm(v12);
    }
  }
  else
  {
    v10 = SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    SymCryptRestoreYmm(v12);
  }
  return v10;
}
