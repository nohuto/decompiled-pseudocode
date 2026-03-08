/*
 * XREFs of PipMatchPersistentMemoryV1 @ 0x140950B7C
 * Callers:
 *     PipEnumeratePersistedMemoryCallback @ 0x14055D610 (PipEnumeratePersistedMemoryCallback.c)
 *     PipGetPersistentMemory @ 0x1409503F8 (PipGetPersistentMemory.c)
 * Callees:
 *     PipGetDeviceObjectLocation @ 0x14094FFE4 (PipGetDeviceObjectLocation.c)
 *     PnpCompareMultiSz @ 0x140969650 (PnpCompareMultiSz.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMatchPersistentMemoryV1(ULONG_PTR a1, __int64 a2, char a3, _BYTE *a4)
{
  PVOID v4; // rbx
  int DeviceObjectLocation; // eax
  unsigned int v8; // edi
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v4 = 0LL;
  P = 0LL;
  *a4 = 0;
  if ( !a1 )
  {
    if ( !a3 && *(_DWORD *)(a2 + 4) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    DeviceObjectLocation = PipGetDeviceObjectLocation(a1, &v10, &P);
    v4 = P;
    v8 = DeviceObjectLocation;
    if ( DeviceObjectLocation < 0 )
      goto LABEL_10;
    if ( (unsigned __int8)PnpCompareMultiSz((PCWCH)P, (PCWCH)(a2 + 16), 0) )
LABEL_8:
      *a4 = 1;
  }
LABEL_9:
  v8 = 0;
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x61706E50u);
  return v8;
}
