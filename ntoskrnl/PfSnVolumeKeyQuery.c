/*
 * XREFs of PfSnVolumeKeyQuery @ 0x14076C3D0
 * Callers:
 *     PfSnNameQueryWorker @ 0x1402E1560 (PfSnNameQueryWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PfSnArrayGrow @ 0x14076C494 (PfSnArrayGrow.c)
 *     PfSnFailProcessTrace @ 0x14097C804 (PfSnFailProcessTrace.c)
 */

__int64 __fastcall PfSnVolumeKeyQuery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v9; // rcx
  int v12; // eax

  v3 = *(unsigned int *)(a1 + 596);
  v4 = (_QWORD *)(a1 + 584);
  v5 = *(_QWORD **)(a1 + 584);
  v9 = &v5[v3];
  while ( v5 < v9 )
  {
    if ( *v5 == a2 )
      return 0;
    ++v5;
  }
  if ( (unsigned int)PfSnArrayGrow(v3, a2, a3, (int)a1 + 592, (__int64)v4) )
  {
    *(_QWORD *)(*v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 596))++) = a2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_140C64D48 + 24))(*(_QWORD *)(a1 + 352), a3);
    if ( v12 >= 0 )
      return 0;
    return (unsigned int)v12;
  }
  else
  {
    PfSnFailProcessTrace(a1);
    return (unsigned int)-1073741670;
  }
}
