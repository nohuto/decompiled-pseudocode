__int64 __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // r10
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_QWORD *)(a1 + 104);
  v3 = 0;
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*v2, v1) || (unsigned int)MiWorkingSetIsContended(*v2) )
    return 1LL;
  LOBYTE(v3) = KeShouldYieldProcessor() != 0;
  return v3;
}
