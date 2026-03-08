/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x1405CD074
 * Callers:
 *     IovpCompleteRequest2 @ 0x140AC9AFC (IovpCompleteRequest2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MmMdlPageContentsState @ 0x1402D30C0 (MmMdlPageContentsState.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x1403B8710 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x1405CCF0C (MdlInvariantFindMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int64 __fastcall MdlInvariantPostProcessing1(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // r11
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rdx
  __int64 v17; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v6 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v6 + 40) != -1 )
    {
      result = (unsigned int)MmVerifierData;
      v9 = *(_BYTE *)(a2 + 67);
      if ( (MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || v9 == *(_BYTE *)(a2 + 66) )
      {
        result = MmMdlPageContentsState(v6, 2u);
        if ( (_DWORD)result == 1 )
        {
          v10 = *(_QWORD *)(a1 + 224);
          if ( v10 )
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(a2 + 8);
          result = (unsigned __int64)MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
          v12 = result;
          if ( result || *(_BYTE *)a3 != 4 )
          {
            if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
            {
              v13 = *(_QWORD *)(v11 + 24);
            }
            else
            {
              result = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000020u);
              v13 = result;
            }
            if ( v13 )
            {
              if ( !v12
                || (result = *(unsigned int *)(v12 + 24),
                    v14 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    (_DWORD)result == (_DWORD)v14) )
              {
                if ( *(_BYTE *)a3 == 4 )
                {
                  result = RtlpComputeCrcInternal(
                             v13,
                             *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                             0LL,
                             (__int64)&Crc64Ctrl);
                  if ( result == *(_QWORD *)(v12 + 8) )
                    return result;
                  v16 = 4112LL;
                  return VerifierBugCheckIfAppropriate(0xC4u, v16, *(_QWORD *)(a3 + 40), a2, v13);
                }
              }
              else
              {
                v15 = *(_QWORD *)(v12 + 16);
                if ( v13 < v15 || (result += v15, v13 + v14 > result) )
                {
                  LOBYTE(v5) = *(_BYTE *)a3 != 4;
                  v16 = v5 + 4112;
                  return VerifierBugCheckIfAppropriate(0xC4u, v16, *(_QWORD *)(a3 + 40), a2, v13);
                }
              }
              if ( *(_BYTE *)a3 == 3 )
              {
                result = KeGetCurrentIrql();
                if ( (unsigned __int8)result < 2u )
                {
                  v17 = RtlpComputeCrcInternal(
                          v13,
                          *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                          0LL,
                          (__int64)&Crc64Ctrl);
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
                  result = RtlpComputeCrcInternal(
                             v13,
                             *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                             0LL,
                             (__int64)&Crc64Ctrl);
                  if ( v17 != result )
                  {
                    v16 = 4113LL;
                    return VerifierBugCheckIfAppropriate(0xC4u, v16, *(_QWORD *)(a3 + 40), a2, v13);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
