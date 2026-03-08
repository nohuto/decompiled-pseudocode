/*
 * XREFs of ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0180C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C0180144 (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0180FA8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bAppend(EPATHOBJ *this, struct EPATHOBJ *a2, struct _POINTFIX *a3)
{
  __int64 v3; // rax
  __int64 *i; // rdi
  unsigned __int64 v8; // r14
  int v9; // r10d
  int v10; // ecx
  unsigned int v11; // edx
  __int64 result; // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+48h] [rbp-8h]
  int v17; // [rsp+4Ch] [rbp-4h]
  struct _POINTL v18; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v18 = 0LL;
  for ( i = *(__int64 **)(v3 + 32); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v11 = *(_DWORD *)this & 0xFFFFFFFD;
      *(_DWORD *)this = v11;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)this = v11 | 1;
      result = 1LL;
      *((_DWORD *)this + 1) += *((_DWORD *)a2 + 1);
      return result;
    }
    v8 = *((unsigned int *)i + 5);
    v13[0] = i + 3;
    v9 = v8;
    v14 = 0LL;
    v15 = 0;
    v10 = *((_DWORD *)i + 4);
    v13[1] = v8;
    v16 = v10 & 0x10;
    v17 = v8;
    if ( (v10 & 1) != 0 )
    {
      v18.x = a3->x + *((_DWORD *)i + 6);
      v18.y = a3->y + *((_DWORD *)i + 7);
      EPATHOBJ::bMoveTo(this, 0LL, &v18);
      v19 = 0LL;
      v17 = v8 - 1;
      if ( umptr<_POINTL>::ssizet_add_to_sizet(0LL, 1uLL, (__int64 *)&v19) && v19 <= v8 )
        v14 = v19;
      else
        LOBYTE(v15) = 1;
    }
    if ( v9 )
      break;
LABEL_10:
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) |= 8u;
      *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 1u;
    }
  }
  while ( (unsigned int)EPATHOBJ::createrec(this, 0LL, (struct _PATHDATAL *)v13, a3) )
  {
    if ( !v17 )
      goto LABEL_10;
  }
  return 0LL;
}
