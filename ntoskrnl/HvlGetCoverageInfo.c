char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[144]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[2064]; // [rsp+F0h] [rbp-10h] BYREF

  v15 = 0LL;
  LODWORD(v16) = 0;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v7 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(&v14, 1LL, v18, 1032LL);
  v9 = HvlpAcquireHypercallPage(&v11, 2LL, v17, 72LL);
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallInitiateHypercall(147) )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v9 + 8);
    a1[1] = *(_OWORD *)(v9 + 24);
    a1[2] = *(_OWORD *)(v9 + 40);
    a1[3] = *(_OWORD *)(v9 + 56);
    *a4 = *(_DWORD *)(v9 + 4);
    *a3 = *(_DWORD *)v9;
  }
  HvlpReleaseHypercallPage(&v11);
  HvlpReleaseHypercallPage(&v14);
  return v7;
}
