/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C0021AB8
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x1C002263C (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     memmove @ 0x1C0004280 (memmove.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     NVMeQueueWorkItem @ 0x1C0016B88 (NVMeQueueWorkItem.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax

  StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  result = (unsigned int)(*(_DWORD *)(a1 + 4484) + 1);
  *(_DWORD *)(a1 + 4484) = result;
  if ( *(_BYTE *)(a1 + 22) )
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 1u);
  return result;
}
