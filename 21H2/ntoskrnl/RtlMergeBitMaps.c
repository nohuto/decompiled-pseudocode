/*
 * XREFs of RtlMergeBitMaps @ 0x14020AF90
 * Callers:
 *     HvUnCOWReconciledPages @ 0x14020B270 (HvUnCOWReconciledPages.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvStoreModifiedData @ 0x140689424 (HvStoreModifiedData.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 *     HvFoldBackUnreconciledData @ 0x14091D4B0 (HvFoldBackUnreconciledData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v5; // r8
  int v6; // ecx

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v5 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      result = *((_QWORD *)a2 + 1);
      if ( v2 < 0x20 )
        break;
      v6 = *(_DWORD *)(result + 4 * v5);
      result = v2 - 32;
      v2 = result;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v5) |= v6;
      v5 = (unsigned int)(v5 + 1);
      if ( !(_DWORD)result )
        return result;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL * (unsigned int)v5) |= *(_DWORD *)(result + 4LL * (unsigned int)v5) & ((1LL << v2) - 1);
  }
  return result;
}
