char __fastcall LinearFitT<256>::Update(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  _QWORD *v6; // rdi
  bool v8; // bp
  __int64 v9; // r15
  signed __int64 v10; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = *(_DWORD *)(a1 + 8);
  v6 = (_QWORD *)(16LL * (unsigned __int8)v3 + a1 + 104);
  if ( !v3 )
  {
    *v6 = a2;
    v6[1] = a3;
    LinearFitT<256>::Reset(a1);
    *(_OWORD *)(a1 + 104) = *(_OWORD *)v6;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 8) = 1;
LABEL_11:
    LinearFitT<256>::Compute_b0_b1(a1);
    return 1;
  }
  v8 = 0;
  v9 = 2LL * (unsigned __int8)(v3 - 1);
  v10 = abs64(a3 - *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 112));
  if ( a2 > *(_QWORD *)(a1 + 16LL * (unsigned __int8)(v3 - 1) + 104) + *(_QWORD *)(a1 + 88)
    || v10 > *(_QWORD *)(a1 + 96) )
  {
    if ( v3 > 0x100 )
    {
      if ( (v3 & 0x1FF) == 0 )
        v8 = (unsigned __int8)LinearFitT<256>::RebaseSums(a1) == 0;
      v12 = *v6 - *(_QWORD *)(a1 + 40);
      v13 = v6[1] - *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) -= v12;
      *(_QWORD *)(a1 + 64) -= v13;
      *(_QWORD *)(a1 + 72) -= v12 * v13;
      *(_QWORD *)(a1 + 80) -= v12 * v12;
    }
    *v6 = a2;
    v6[1] = a3;
    if ( !LinearFitT<256>::AddToSums((_QWORD *)a1, v6)
      && (!(unsigned __int8)LinearFitT<256>::RebaseSums(a1) || !LinearFitT<256>::AddToSums((_QWORD *)a1, v6))
      || v8
      || *v6 <= *(_QWORD *)(a1 + 8 * v9 + 104)
      || *(__int64 *)(a1 + 96) > 0 && v10 > *(_QWORD *)(a1 + 96) )
    {
      LinearFitT<256>::InitWithPoint(a1, v6);
    }
    goto LABEL_11;
  }
  return 0;
}
