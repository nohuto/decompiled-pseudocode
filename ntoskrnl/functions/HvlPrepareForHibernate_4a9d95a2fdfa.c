__int64 __fastcall HvlPrepareForHibernate(__int128 *a1, LONGLONG *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v9; // r14d
  PHYSICAL_ADDRESS *v10; // rbx
  PHYSICAL_ADDRESS *v11; // rax
  __int128 v12; // xmm0
  LONGLONG *v13; // rsi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]

  v23 = 0LL;
  LODWORD(v24) = 0;
  v20 = 0LL;
  LODWORD(v21) = 0;
  v9 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v22, 1, 0LL, 88LL);
  v11 = HvlpAcquireHypercallPage((__int64)&v19, 2, 0LL, 32LL);
  v12 = *a1;
  v13 = (LONGLONG *)v11;
  v14 = a1[1];
  *(ULONG *)((char *)&v10[10].LowPart + 1) = 0;
  *(_WORD *)((char *)&v10[10].QuadPart + 5) = 0;
  HIBYTE(v10[10].QuadPart) = 0;
  *(_OWORD *)&v10->LowPart = v12;
  LOBYTE(v10[10].LowPart) = 0;
  v15 = a1[2];
  *(_OWORD *)&v10[2].LowPart = v14;
  v16 = a1[3];
  *(_OWORD *)&v10[4].LowPart = v15;
  v17 = a1[4];
  *(_OWORD *)&v10[6].LowPart = v16;
  *(_OWORD *)&v10[8].LowPart = v17;
  if ( (unsigned __int16)HvcallInitiateHypercall(134) )
  {
    v9 = -1073741823;
  }
  else
  {
    *a2 = *v13;
    *a3 = v13[1];
    *a4 = v13[2];
    *a5 = v13[3];
  }
  HvlpReleaseHypercallPage((__int64)&v19);
  HvlpReleaseHypercallPage((__int64)&v22);
  return v9;
}
