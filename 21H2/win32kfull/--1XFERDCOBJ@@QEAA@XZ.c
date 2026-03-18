/*
 * XREFs of ??1XFERDCOBJ@@QEAA@XZ @ 0x1C027932C
 * Callers:
 *     GreExtEscape @ 0x1C013D59C (GreExtEscape.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_DWORD *)this + 20) )
    PopThreadGuardedObject((char *)this + 48);
  MDCOBJ::~MDCOBJ(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)this + 16);
}
