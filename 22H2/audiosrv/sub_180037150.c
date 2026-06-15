/*
 * XREFs of sub_180037150 @ 0x180037150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180037150(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  _OWORD *v7; // rax
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+50h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-20h] BYREF
  _OWORD *v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF

  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v9 = 2;
  v2 = *(__int64 **)(a1 + 528);
  v3 = *v2;
  v8 = xmmword_180160310;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, PROPVARIANT *))(v3 + 40))(v2, &v8, pvar);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = v4;
      v14 = (__int64)"SpatialAudioStateIO::Load";
      LODWORD(v13) = 28;
      sub_180109778((int)&dword_18019C480, (__int64)&v14, (__int64)&v13, (__int64)&v12);
    }
  }
  else if ( LOWORD(pvar[0]) != 65
         || LODWORD(pvar[1]) != 24
         || (v7 = v11, *(_OWORD *)(a1 + 544) = *v11,
                       *(_QWORD *)(a1 + 560) = *((_QWORD *)v7 + 2),
                       *(int *)(a1 + 544) >= 4) )
  {
    *(_OWORD *)(a1 + 544) = 0LL;
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  PropVariantClear(pvar);
  return v5;
}
