__int64 __fastcall MiCompleteSecureDriverLoad(__int64 a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // esi
  int v6; // ebx
  unsigned __int64 AnyMultiplexedVm; // rax
  __int64 v9[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v9, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 196);
  v9[0] = a1;
  v4 = v3 & 0x40;
  LODWORD(v9[3]) = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v5 = v4 != 0 ? 2 : 0;
  if ( !v4
    || ((unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) != 1
      ? (AnyMultiplexedVm = (unsigned __int64)MiGetAnyMultiplexedVm(1))
      : (AnyMultiplexedVm = MiGetSessionVm()),
        (v6 = MiPrepareDriverPatchState(v9, AnyMultiplexedVm), v6 >= 0)
     && (v6 = MiLockDriverPageRange(v9, 0, LODWORD(v9[3]) - 1, 7, 0LL), v6 >= 0)) )
  {
    v6 = VslCompleteSecureDriverLoad(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v5);
    if ( v6 >= 0 )
      v6 = 0;
  }
  MiUnlockDriverPages(v9);
  return (unsigned int)v6;
}
