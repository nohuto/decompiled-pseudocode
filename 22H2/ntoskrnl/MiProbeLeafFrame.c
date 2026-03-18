/*
 * XREFs of MiProbeLeafFrame @ 0x1403D4FA4
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1403D4D60 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14065D30C (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiLockPageLeafPageTable @ 0x140236920 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140236FB0 (MiSetProbePagesAhead.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFaultInProbeAddress @ 0x14034B2CC (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = (_QWORD *)(a1 + 48);
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v5);
    if ( (int)result < 0 )
      break;
    if ( !v5 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v5 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C67FF4;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
