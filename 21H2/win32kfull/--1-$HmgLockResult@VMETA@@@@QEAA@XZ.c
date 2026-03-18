/*
 * XREFs of ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x1C015FA64
 * Callers:
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B6FB0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall HmgLockResult<META>::~HmgLockResult<META>(__int64 a1)
{
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a1 + 12LL));
    *(_QWORD *)a1 = 0LL;
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(a1 + 8);
}
