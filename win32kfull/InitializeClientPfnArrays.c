__int64 __fastcall InitializeClientPfnArrays(__int128 *a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  __int128 v11; // xmm1
  _OWORD *v12; // rdi

  if ( dword_1C036117C || !a1 )
    return 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) == gpepCSRSS )
  {
    v8 = *a1;
    hModClient = a4;
    dword_1C036117C = 1;
    *(_OWORD *)(gpsi + 392LL) = v8;
    *(_OWORD *)(gpsi + 408LL) = a1[1];
    *(_OWORD *)(gpsi + 424LL) = a1[2];
    *(_OWORD *)(gpsi + 440LL) = a1[3];
    *(_OWORD *)(gpsi + 456LL) = a1[4];
    *(_OWORD *)(gpsi + 472LL) = a1[5];
    *(_OWORD *)(gpsi + 488LL) = a1[6];
    v9 = a1[7];
    v10 = a1 + 8;
    *(_OWORD *)(gpsi + 504LL) = v9;
    *(_OWORD *)(gpsi + 520LL) = *v10;
    *(_OWORD *)(gpsi + 536LL) = v10[1];
    *(_OWORD *)(gpsi + 552LL) = v10[2];
    *(_OWORD *)(gpsi + 568LL) = v10[3];
    *(_OWORD *)(gpsi + 584LL) = *a2;
    *(_OWORD *)(gpsi + 600LL) = a2[1];
    *(_OWORD *)(gpsi + 616LL) = a2[2];
    *(_OWORD *)(gpsi + 632LL) = a2[3];
    *(_OWORD *)(gpsi + 648LL) = a2[4];
    *(_OWORD *)(gpsi + 664LL) = a2[5];
    *(_OWORD *)(gpsi + 680LL) = a2[6];
    v11 = a2[7];
    v12 = a2 + 8;
    *(_OWORD *)(gpsi + 696LL) = v11;
    *(_OWORD *)(gpsi + 712LL) = *v12;
    *(_OWORD *)(gpsi + 728LL) = v12[1];
    *(_OWORD *)(gpsi + 744LL) = v12[2];
    *(_OWORD *)(gpsi + 760LL) = v12[3];
    *(_OWORD *)(gpsi + 776LL) = *(_OWORD *)a3;
    *(_OWORD *)(gpsi + 792LL) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(gpsi + 808LL) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(gpsi + 824LL) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(gpsi + 840LL) = *(_OWORD *)(a3 + 64);
    *(_QWORD *)(gpsi + 856LL) = *(_QWORD *)(a3 + 80);
    return 0LL;
  }
  return 3221225506LL;
}
