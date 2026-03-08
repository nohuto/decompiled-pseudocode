/*
 * XREFs of MiGetVadMandatoryPageSize @ 0x1402CAA10
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiCreateWriteWatchView @ 0x140755EB4 (MiCreateWriteWatchView.c)
 *     NtResetWriteWatch @ 0x140755F20 (NtResetWriteWatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetVadMandatoryPageSize(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = MiVadPageSizes[(v1 >> 19) & 3];
  if ( result < 0x200 && (v1 & 0x800000) == 0 )
    return 1LL;
  return result;
}
