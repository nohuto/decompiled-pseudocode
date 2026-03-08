/*
 * XREFs of ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C018148C
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0180B48 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1C0180144 (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C0181710 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 */

void __fastcall EPATHOBJ::growlastrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  __int64 v4; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // edi
  struct _POINTFIX *v15; // rdx
  struct _POINTFIX *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  struct _POINTFIX *v19; // [rsp+58h] [rbp+20h] BYREF

  v19 = a4;
  v4 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v4 + 24);
    if ( v9 )
    {
      v10 = *((_DWORD *)a3 + 8);
      if ( v10 == (*(_DWORD *)(v8 + 16) & 0xFFFFFFFC) )
      {
        LODWORD(v11) = 0;
        v12 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
        v13 = v9 + *(unsigned int *)(v9 + 16);
        if ( v13 > v12 )
          v11 = (__int64)(v13 - v12) >> 3;
        v14 = *((_DWORD *)a3 + 9);
        if ( (unsigned int)v11 <= v14 )
          v14 = v11;
        if ( (v10 & 0x10) != 0 )
          v14 = 3 * (v14 / 3);
        if ( v14 )
        {
          if ( a2 )
            EXFORMOBJ::bXformRound((__int64 *)a2, (__int64 *)a3, v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL), v14);
          else
            umptr_r<_POINTL>::read<_POINTFIX>((__int64)a3, (void *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL)), v14);
          if ( !*((_BYTE *)a3 + 25) && !*((_BYTE *)a3 + 24) )
          {
            v15 = (struct _POINTFIX *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL));
            do
            {
              ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v15);
              v15 = v16 + 1;
            }
            while ( v17 != 1 );
            *(_DWORD *)(v8 + 20) += v14;
            v18 = *(unsigned int *)(v8 + 20);
            v19 = 0LL;
            *(_QWORD *)(v9 + 8) = v8 + 8 * (v18 + 3);
            *((_DWORD *)a3 + 9) -= v14;
            if ( umptr<_POINTL>::ssizet_add_to_sizet(*((_QWORD *)a3 + 2), v14, (__int64 *)&v19)
              && (unsigned __int64)v19 <= *((_QWORD *)a3 + 1) )
            {
              *((_QWORD *)a3 + 2) = v19;
            }
            else
            {
              *((_BYTE *)a3 + 24) = 1;
            }
          }
        }
      }
    }
  }
}
