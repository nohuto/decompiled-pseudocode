/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x1C011C6F8
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  if ( *(_QWORD *)this )
    DLODCOBJ::vUnlock(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 16);
}
