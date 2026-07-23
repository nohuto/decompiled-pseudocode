/*
 * XREFs of RtlAreBitsClear @ 0x1402F7CC0
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1406FC6A4 (HvGetHiveLogFileStatus.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     HvIsRangeDirty @ 0x14087BDB4 (HvIsRangeDirty.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x1409A7DFC (HalpMmAllocCtxMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  char v6; // r11
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // r10
  unsigned int *v10; // rdx

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v6 = StartingIndex + Length - 1;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - Length) << StartingIndex)) == 0;
  if ( (v8 & (-1 << StartingIndex)) != 0 )
    return 0;
  v10 = v7 + 1;
  if ( v10 == v9 )
    return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  result = 0;
  while ( !*v10 )
  {
    if ( ++v10 == v9 )
      return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  }
  return result;
}
