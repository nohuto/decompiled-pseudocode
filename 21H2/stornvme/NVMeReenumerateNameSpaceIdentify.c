/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C001AAB8
 * Callers:
 *     NVMeReenumerateNameSpaceStart @ 0x1C001AC78 (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     NVMeQueueWorkItem @ 0x1C001522C (NVMeQueueWorkItem.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  __int64 result; // rax

  StorPortExtendedFunction(0LL, a1, 6144LL, 1701672526LL);
  ++*(_DWORD *)(a1 + 4028);
  result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 1u);
  return result;
}
