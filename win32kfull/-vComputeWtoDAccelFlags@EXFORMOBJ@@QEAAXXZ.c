void __fastcall EXFORMOBJ::vComputeWtoDAccelFlags(EXFORMOBJ *this)
{
  __int64 v1; // rax
  __int64 v2; // r8
  EFLOAT **v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_DWORD *)(*(_QWORD *)this + 32LL) = 8;
  v1 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 24LL) && !*(_DWORD *)(v1 + 28) )
    *(_DWORD *)(v1 + 32) |= 0x40u;
  if ( EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)this + 4LL)) && EFLOAT::bIsZero((EFLOAT *)(v2 + 8)) )
  {
    *(_DWORD *)(v4 + 32) |= 1u;
    if ( EFLOAT::bIs16(*v3) && EFLOAT::bIs16((EFLOAT *)(v5 + 12)) )
      *(_DWORD *)(v6 + 32) |= 2u;
  }
}
