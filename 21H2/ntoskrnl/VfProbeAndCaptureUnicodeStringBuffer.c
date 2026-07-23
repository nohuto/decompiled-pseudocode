/*
 * XREFs of VfProbeAndCaptureUnicodeStringBuffer @ 0x1409C71BC
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C7184 (VfProbeAndCaptureUnicodeString.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VfProbeAndCaptureUnicodeStringBuffer(unsigned __int16 *a1, POOL_TYPE a2)
{
  __int64 v3; // rax
  unsigned __int16 v5; // di
  unsigned __int64 v6; // rcx
  PVOID PoolWithTag; // rax
  PVOID v8; // rsi

  v3 = *a1;
  if ( (v3 & 1) != 0 )
    return 3221225485LL;
  v5 = 0;
  if ( (_WORD)v3 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( v6 + v3 > 0x7FFFFFFF0000LL || v6 + v3 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithTag = ExAllocatePoolWithTag(a2, *a1, 0x43536656u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
    *((_QWORD *)a1 + 1) = v8;
    v5 = *a1;
  }
  else
  {
    *((_QWORD *)a1 + 1) = MmBadPointer;
  }
  a1[1] = v5;
  return 0LL;
}
