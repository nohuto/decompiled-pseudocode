/*
 * XREFs of XilCoreCommonBuffer_Create @ 0x1C001BE7C
 * Callers:
 *     CommonBuffer_Create @ 0x1C0072F2C (CommonBuffer_Create.c)
 * Callees:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

void __fastcall XilCoreCommonBuffer_Create(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)(a3 + 8) = a1;
  *(_QWORD *)a3 = a2;
  if ( !*(_BYTE *)(a3 + 24) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(a3 + 16));
    *(_BYTE *)(a3 + 24) = 1;
  }
  *(_DWORD *)(a3 + 32) = 512;
  *(_QWORD *)(a3 + 168) = a3 + 160;
  *(_QWORD *)(a3 + 160) = a3 + 160;
  *(_QWORD *)(a3 + 192) = a3 + 184;
  *(_QWORD *)(a3 + 184) = a3 + 184;
  *(_QWORD *)(a3 + 72) = a3 + 64;
  *(_QWORD *)(a3 + 64) = a3 + 64;
  *(_QWORD *)(a3 + 88) = a3 + 80;
  *(_QWORD *)(a3 + 80) = a3 + 80;
  *(_DWORD *)(a3 + 36) = 8;
  *(_DWORD *)(a3 + 40) = 8;
  *(_DWORD *)(a3 + 44) = 4;
  *(_DWORD *)(a3 + 48) = 8;
  *(_DWORD *)(a3 + 52) = 16;
  XilCoreCommonBuffer_AllocateBuffers((__int64 **)a3, a3 + 32, 8);
  *(_DWORD *)(a3 + 96) = 4096;
  *(_QWORD *)(a3 + 136) = a3 + 128;
  *(_QWORD *)(a3 + 128) = a3 + 128;
  *(_QWORD *)(a3 + 152) = a3 + 144;
  *(_QWORD *)(a3 + 144) = a3 + 144;
  *(_DWORD *)(a3 + 100) = 1;
  *(_DWORD *)(a3 + 104) = 4;
  *(_DWORD *)(a3 + 108) = 1;
  *(_DWORD *)(a3 + 112) = 1;
  *(_DWORD *)(a3 + 116) = 2;
  XilCoreCommonBuffer_AllocateBuffers((__int64 **)a3, a3 + 96, 4);
}
