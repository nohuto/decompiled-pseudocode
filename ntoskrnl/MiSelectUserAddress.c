/*
 * XREFs of MiSelectUserAddress @ 0x1407D6D30
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInitializeVadCellBitMap @ 0x140729460 (MiInitializeVadCellBitMap.c)
 *     MiFindEmptyAddressRangeDown @ 0x140760E10 (MiFindEmptyAddressRangeDown.c)
 *     MiFindEmptyAddressRange @ 0x1407D6F10 (MiFindEmptyAddressRange.c)
 */

__int64 __fastcall MiSelectUserAddress(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 *a9,
        _QWORD *a10)
{
  unsigned __int64 v11; // r11
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r15d
  _KPROCESS *Process; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 result; // rax
  __int64 v25; // rdx
  int v26; // eax
  _DWORD v27[18]; // [rsp+50h] [rbp-48h] BYREF
  int v28; // [rsp+A0h] [rbp+8h]

  v28 = 0;
  v11 = a4;
  v27[0] = 0;
  *a10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  *a9 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (a1 & 0x100000) != 0 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0 )
    v15 = 1;
  v17 = Process[1].ActiveProcessors.StaticBitmap[5];
  v18 = (_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 48);
  v19 = v17 - 1;
  if ( v17 <= 0x100000000LL && a3 > v19 )
  {
    v20 = 2LL;
    goto LABEL_12;
  }
  if ( a8 < 0 )
  {
    v20 = 1LL;
  }
  else
  {
    v20 = 0LL;
    if ( !v15 && a3 < v19 && v17 > 0x100000000LL )
    {
      if ( v18[18] )
      {
        if ( a2 < v18[25] )
          goto LABEL_12;
        v25 = 0LL;
        if ( a3 >> 16 <= v18[23] )
          v25 = 2LL;
LABEL_32:
        v20 = v25;
        goto LABEL_12;
      }
      v21 = a2 >> 16;
      if ( a2 >> 16 && a3 - a2 + 1 >= 0x40000000 )
      {
        v18[26] = v21;
        v18[23] = a3 >> 16;
        v18[25] = v21 << 16;
        v18[24] = a3 + 1;
        v26 = MiInitializeVadCellBitMap(v18 + 18, 1);
        v11 = a4;
        v25 = 0LL;
        if ( v26 >= 0 )
          v25 = 2LL;
        goto LABEL_32;
      }
    }
  }
LABEL_12:
  v22 = (__int64)&v18[9 * v20];
  if ( (a1 & 0x20400000) != 541065216 && (a1 & 0x20000000) != 0 && v11 >= 0x40000000 )
  {
    v23 = a5;
    if ( a5 == 0x200000 )
    {
      v23 = 0x40000000LL;
      v28 = 1;
    }
  }
  else
  {
    v23 = a5;
  }
  while ( 1 )
  {
    result = v15
           ? MiFindEmptyAddressRangeDown(v22, v11, v23, a6, a2, a3, a7, (__int64)a10)
           : MiFindEmptyAddressRange(v22, v11, v23, a6, a2, a3, a7, (__int64)a10, (__int64)v27);
    if ( (int)result >= 0 || !v28 )
      break;
    v11 = a4;
    v23 = 0x200000LL;
    v28 = 0;
  }
  if ( v23 == 0x10000 )
  {
    if ( v27[0] )
      *a9 = v22;
  }
  return result;
}
