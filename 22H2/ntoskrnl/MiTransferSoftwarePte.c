/*
 * XREFs of MiTransferSoftwarePte @ 0x1403330E8
 * Callers:
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdatePfnBackingStore @ 0x140332DF4 (MiUpdatePfnBackingStore.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140332EB8 (MiRewriteTrimPteAsDemandZero.c)
 *     MiFindFreePageFileSpace @ 0x140333724 (MiFindFreePageFileSpace.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiTransferSoftwarePte(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  char v5; // r11
  __int16 v6; // r10
  unsigned __int64 result; // rax
  __int64 updated; // rax
  __int16 v9; // r8
  char v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v4 = a3;
  MiSetNonResidentPteHeat(&v12, 0);
  if ( (v6 & 0x400) != 0 || (v5 & 4) != 0 )
    result = v12;
  else
    result = v12 & 0xFFFFFFFFFFFFFFF9uLL;
  if ( a2 )
  {
    if ( result )
      updated = MiUpdatePageFileHighInPte(result, v4);
    else
      updated = MiSwizzleInvalidPte(v4 << 32);
    result = updated ^ (unsigned __int16)(updated ^ (v9 << 12)) & 0xF000;
    v11 = result;
    if ( (v10 & 1) != 0 )
    {
      result |= 4uLL;
      v11 = result;
    }
    if ( (v10 & 2) != 0 )
      return v11 | 2;
  }
  return result;
}
