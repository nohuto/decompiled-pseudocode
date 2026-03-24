/*
 * XREFs of ?vComputeWtoDAccelFlags@EXFORMOBJ@@QEAAXXZ @ 0x1C014F0BC
 * Callers:
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C014F01C (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00986B8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C014F130 (-bIs16@EFLOAT@@QEBAHXZ.c)
 */

void __fastcall EXFORMOBJ::vComputeWtoDAccelFlags(EXFORMOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  EFLOAT **v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx

  *(_DWORD *)(*(_QWORD *)this + 32LL) = 8;
  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 24LL) && !*(_DWORD *)(v1 + 28) )
  {
    *(_DWORD *)(v1 + 32) |= 0x40u;
    v2 = *(_QWORD *)this;
  }
  if ( EFLOAT::bIsZero((EFLOAT *)(v2 + 4)) && EFLOAT::bIsZero((EFLOAT *)(v3 + 8)) )
  {
    *(_DWORD *)(v4 + 32) |= 1u;
    if ( (unsigned int)EFLOAT::bIs16(*v5) )
    {
      if ( (unsigned int)EFLOAT::bIs16((EFLOAT *)(v6 + 12)) )
        *(_DWORD *)(v7 + 32) |= 2u;
    }
  }
}
