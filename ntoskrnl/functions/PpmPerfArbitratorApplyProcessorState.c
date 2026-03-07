char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  char v5; // r12
  __int64 v6; // rbp
  char v9; // si
  char v10; // r13
  signed int v11; // ebx
  int v12; // edx
  _DWORD *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // eax
  unsigned __int16 v20; // bx
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int128 v23; // xmm0
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rdx
  signed __int64 v28; // rcx
  signed __int64 v29; // rbx
  __int128 v30; // rt0
  unsigned __int8 v31; // tt
  __int64 v32; // [rsp+48h] [rbp-50h]

  v4 = *(_QWORD *)(a1 + 33976);
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 33968);
  v9 = 1;
  v10 = 0;
  if ( PpmPerfQosEnabled )
    v11 = *(_DWORD *)(a1 + 34112);
  else
    v11 = 0;
  v12 = *(_DWORD *)(v6 + 764);
  if ( v11 == *(_DWORD *)(a1 + 34116) )
  {
    v13 = (_DWORD *)(v4 + 104);
    if ( *(_DWORD *)(v4 + 104) != v12 )
    {
      if ( !v11 )
      {
LABEL_6:
        *v13 = v12;
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(v6 + 483) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
      {
        a2 = 1;
        goto LABEL_6;
      }
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(v6 + 483) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
      return 0;
    v19 = *(unsigned __int16 *)(a1 + 34120);
    v13 = (_DWORD *)(v4 + 104);
    if ( !_bittest(&v19, v11) || *v13 != v12 )
    {
      *v13 = v12;
      LOBYTE(a3) = 1;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 34116) = v11;
    v10 = 1;
  }
  if ( !(_BYTE)a3 )
    goto LABEL_15;
LABEL_8:
  if ( v5 )
    *v13 = 0;
  v14 = v11;
  LOBYTE(a4) = v5;
  *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 72);
  LOBYTE(a3) = a2;
  *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 76);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(v6 + 40LL * v11 + 768);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(v6 + 40LL * v11 + 784);
  *(_QWORD *)(v4 + 96) = *(_QWORD *)(v6 + 40LL * v11 + 800);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v6 + 384))(*(_QWORD *)(v4 + 8), v4 + 64, a3, a4);
  if ( PopHeteroSystem )
  {
    v16 = *(unsigned __int16 *)(v6 + 2LL * v11 + 748);
    v20 = *(_WORD *)(a1 + 34120);
    if ( (_WORD)v16 != v20 )
    {
      *(_WORD *)(a1 + 34120) = v16;
      LODWORD(v15) = 0;
      v21 = *(_QWORD *)(a1 + 192);
      do
      {
        v17 = (unsigned __int16)v16;
        LOWORD(v17) = v16 & 1;
        if ( (_WORD)v17 != (v20 & 1) )
        {
          v22 = *(unsigned __int8 *)(a1 + 209);
          if ( (v16 & 1) != 0 )
            _interlockedbittestandset64((volatile signed __int32 *)(v21 + 8LL * (unsigned int)v15 + 200), v22);
          else
            _interlockedbittestandreset64((volatile signed __int32 *)(v21 + 8LL * (unsigned int)v15 + 200), v22);
        }
        LOWORD(v16) = (unsigned __int16)v16 >> 1;
        v15 = (unsigned int)(v15 + 1);
        v20 >>= 1;
      }
      while ( (unsigned int)v15 < 7 );
    }
  }
  if ( (unsigned __int8)KiIsQosGroupingActive(v16, v15, v17) )
  {
    v23 = *(_OWORD *)(*(_QWORD *)(a1 + 192) + 256LL);
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 264LL);
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 256LL);
    while ( 1 )
    {
      v26 = *(_QWORD *)(a1 + 200);
      v27 = *(_QWORD *)(a1 + 34912);
      v28 = *((_QWORD *)&v23 + 1);
      if ( ((v14 - 1) & 0xFFFFFFFFFFFFFFFAuLL) != 0 )
      {
        v29 = v25 & ~v26;
        v28 = ~v27 & *((_QWORD *)&v23 + 1);
      }
      else
      {
        v29 = v25 | v26;
        if ( (v27 & v29) == v27 )
          v28 = v27 | *((_QWORD *)&v23 + 1);
      }
      *(_QWORD *)&v30 = v25;
      *((_QWORD *)&v30 + 1) = v24;
      v31 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 256LL),
              v28,
              v29,
              (signed __int64 *)&v30);
      v32 = *((_QWORD *)&v30 + 1);
      v24 = *((_QWORD *)&v30 + 1);
      v25 = v30;
      if ( v31 )
        break;
      *((_QWORD *)&v23 + 1) = v32;
    }
  }
  if ( v5 )
  {
LABEL_15:
    if ( !v10 )
      return v9;
  }
  PpmEventProcessorPerfStateChange(a1 + 33968, a2, *(unsigned int *)(a1 + 34116));
  return v9;
}
