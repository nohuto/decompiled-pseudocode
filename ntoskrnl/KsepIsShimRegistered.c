/*
 * XREFs of KsepIsShimRegistered @ 0x140801090
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1409740B0 (KseUnregisterShim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KsepIsShimRegistered(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d
  _QWORD *v7; // r10
  _QWORD *v8; // rcx
  _QWORD *v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rdx

  v4 = 0;
  if ( !a2 || !a1 )
    return 0LL;
  v7 = (_QWORD *)(a1 + 16);
  v8 = *(_QWORD **)(a1 + 16);
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( (*((_DWORD *)v9 + 7) & 4) == 0 )
    {
      v10 = *(_QWORD **)(v9[2] + 8LL);
      v11 = *v10 - *a2;
      if ( *v10 == *a2 )
        v11 = v10[1] - a2[1];
      if ( !v11 )
      {
        if ( a4 )
          *a4 = v9;
        return 1;
      }
    }
  }
  return v4;
}
