void __fastcall ClearWakeBit(struct tagTHREADINFO *a1, int a2, int a3)
{
  if ( !a3 )
    goto LABEL_2;
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 54) + 40LL) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 56LL) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 54) + 396LL) & 0x20) != 0 )
      a2 &= ~2u;
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)a1 + 56) + 8LL), ~a2);
  }
}
