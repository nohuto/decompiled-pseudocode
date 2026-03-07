__int64 __fastcall MiCombineAllPhysicalMemory(__int64 *a1)
{
  __int64 *v1; // rbx
  int v2; // esi
  int AffinityToken; // r15d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // rax
  PVOID v11; // r14
  char *v12; // r13
  int ClosestNodeWithProcessors; // ebx
  int active; // eax
  unsigned __int16 v15; // si
  PVOID PoolMm; // rax
  void *v17; // rbx
  unsigned __int16 v18; // dx
  PVOID v19; // rsi
  int v20; // eax
  unsigned int v21; // r9d
  unsigned int *v22; // r8
  unsigned int *v23; // rdx
  unsigned int v24; // eax
  unsigned __int64 v25; // r15
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rsi
  int v29; // ecx
  int PfnPageSizeIndexUnsynchronized; // eax
  unsigned __int64 v32; // rsi
  char v33; // [rsp+20h] [rbp-B8h]
  __int64 v34; // [rsp+28h] [rbp-B0h]
  void *v35; // [rsp+30h] [rbp-A8h] BYREF
  PVOID P; // [rsp+38h] [rbp-A0h]
  int v37; // [rsp+40h] [rbp-98h] BYREF
  unsigned int *v38; // [rsp+48h] [rbp-90h]
  unsigned int *v39; // [rsp+50h] [rbp-88h]
  PVOID v40; // [rsp+58h] [rbp-80h]
  __int64 *v41; // [rsp+60h] [rbp-78h]
  unsigned int *v42; // [rsp+68h] [rbp-70h]
  unsigned int *v43; // [rsp+70h] [rbp-68h]
  char *v44; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+80h] [rbp-58h]
  unsigned int v47; // [rsp+E8h] [rbp+10h] BYREF
  SIZE_T v48; // [rsp+F0h] [rbp+18h] BYREF
  int v49; // [rsp+F8h] [rbp+20h] BYREF

  v1 = (__int64 *)*a1;
  v2 = *((_DWORD *)a1 + 35);
  AffinityToken = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = a1[1];
  v6 = *(_QWORD *)*a1;
  v41 = (__int64 *)*a1;
  v33 = v2;
  v45 = v6;
  v42 = (unsigned int *)MiReferencePageRuns(v6, 1u);
  v7 = 0;
  v34 = *v42;
  v43 = &v42[4 * v34 + 4];
  if ( !KeNumberNodes )
    goto LABEL_29;
  do
  {
    v8 = *(_QWORD *)(v6 + 16);
    v35 = 0LL;
    LOWORD(v47) = 0;
    v9 = *(_QWORD *)(25408LL * v7 + v8 + 22832);
    if ( v9 < 0x10 )
      goto LABEL_28;
    v48 = (40 * v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = (char *)MiAllocateCrcList(v1, v2, &v48);
    v40 = v10;
    v11 = v10;
    if ( !v10 )
    {
      AffinityToken = -1073741670;
      break;
    }
    v12 = v10;
    v44 = &v10[40 * (v48 / 0x28)];
    ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(v7);
    active = KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, 0LL, 0, &v47);
    v15 = v47;
    AffinityToken = active;
    PoolMm = ExAllocatePoolMm(64, 16LL * (unsigned __int16)v47, 0x6147694Du, ClosestNodeWithProcessors | 0x80000000);
    P = PoolMm;
    if ( !PoolMm )
      goto LABEL_43;
    KeQueryNodeActiveAffinity2(ClosestNodeWithProcessors, (__int64)PoolMm, v15, &v47);
    AffinityToken = PsAllocateAffinityToken((__int64 *)&v35);
    if ( AffinityToken < 0 )
    {
      ExFreePoolWithTag(P, 0);
LABEL_43:
      ExFreePoolWithTag(v11, 0);
      break;
    }
    v17 = v35;
    v18 = v15;
    v19 = P;
    v20 = KeSetSystemMultipleGroupAffinityThread((__int64 *)P, v18, (__int64)v35);
    LODWORD(v48) = v20;
    if ( v20 < 0 )
    {
      PsFreeAffinityToken(v17);
      ExFreePoolWithTag(v19, 0);
      ExFreePoolWithTag(v11, 0);
      AffinityToken = v48;
      break;
    }
    v21 = 0;
    v47 = 0;
    if ( !(_DWORD)v34 )
    {
      AffinityToken = v20;
      goto LABEL_26;
    }
    v22 = v43;
    v23 = v42 + 6;
    v24 = v34;
    v39 = v42 + 6;
    v38 = v43;
    while ( *v22 != v7 )
    {
LABEL_21:
      ++v21;
      v22 += 2;
      v23 += 4;
      v47 = v21;
      v38 = v22;
      v39 = v23;
      if ( v21 >= v24 )
      {
        AffinityToken = v48;
        goto LABEL_23;
      }
    }
    v25 = *(_QWORD *)v23;
    v26 = *((_QWORD *)v23 - 1) - 1LL;
    v27 = 48 * v26 - 0x220000000000LL;
    if ( !*(_QWORD *)v23 )
    {
LABEL_20:
      v24 = v34;
      goto LABEL_21;
    }
    while ( (!v5 || !*(_DWORD *)(v5 + 4)) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      v27 += 48LL;
      ++v26;
      while ( 1 )
      {
        v37 = 0;
        v28 = 1LL;
        v29 = *(_BYTE *)(v27 + 34) & 7;
        v49 = v29;
        if ( (*(_QWORD *)(v27 + 40) & 0x10000000000LL) == 0 )
          break;
        PfnPageSizeIndexUnsynchronized = MiGetPfnPageSizeIndexUnsynchronized(v27, &v49, &v37);
        if ( PfnPageSizeIndexUnsynchronized == -1 )
        {
          v29 = v49;
          break;
        }
        v28 = MiLargePageSizes[PfnPageSizeIndexUnsynchronized];
LABEL_35:
        v32 = v28 - (v26 & (v28 - 1));
        if ( v32 >= v25 )
          goto LABEL_19;
        v26 += v32;
        v25 -= v32;
        v27 += 48 * v32;
      }
      if ( v29 <= 1 )
        goto LABEL_35;
      if ( (unsigned int)MiCombineCandidate(v41, v33, (_OWORD *)v27) )
      {
        *((_QWORD *)v12 + 2) = v26;
        if ( (unsigned int)MiComputeCombineHash(a1, v12) )
        {
          v12 += 40;
          if ( v12 == v44 )
          {
            MiProcessCrcList(
              (__int64)a1,
              (unsigned __int64 *)v40,
              0xCCCCCCCCCCCCCCCDuLL * ((v12 - (_BYTE *)v40) >> 3),
              v7);
            v12 = (char *)v40;
          }
        }
      }
      if ( !--v25 )
      {
LABEL_19:
        v21 = v47;
        v22 = v38;
        v23 = v39;
        goto LABEL_20;
      }
    }
    AffinityToken = -1073741248;
LABEL_23:
    v11 = v40;
    if ( v12 != v40 )
      MiProcessCrcList((__int64)a1, (unsigned __int64 *)v40, 0xCCCCCCCCCCCCCCCDuLL * ((v12 - (_BYTE *)v40) >> 3), v7);
    v17 = v35;
    v19 = P;
LABEL_26:
    KeRevertToUserMultipleGroupAffinityThread((__int64)v17);
    PsFreeAffinityToken(v17);
    ExFreePoolWithTag(v19, 0);
    ExFreePoolWithTag(v11, 0);
    if ( AffinityToken < 0 )
      break;
    v1 = v41;
    LOBYTE(v2) = v33;
    v6 = v45;
LABEL_28:
    ++v7;
  }
  while ( v7 != (unsigned __int16)KeNumberNodes );
LABEL_29:
  MiDereferencePageRuns((__int64)v42);
  return (unsigned int)AffinityToken;
}
