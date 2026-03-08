/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x14085D06C
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiAllocateProcessVads @ 0x1407286B0 (MiAllocateProcessVads.c)
 *     MiInsertProcessVads @ 0x140729774 (MiInsertProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x140A28654 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v5; // [rsp+28h] [rbp-40h] BYREF

  memset(&v5, 0, sizeof(v5));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28] = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v5);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess(&v5);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}
