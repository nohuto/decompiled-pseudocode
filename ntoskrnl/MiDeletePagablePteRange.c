__int64 __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        _QWORD *a8)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v11; // r15d
  int v12; // r14d
  int v13; // r12d
  unsigned __int8 v14; // di
  ULONG_PTR v15; // rdx
  __int64 v16; // r9
  int v17; // ecx
  __int32 v18; // eax
  char v19; // r15
  __int64 (__fastcall *v20)(_QWORD *); // r8
  KIRQL v21; // al
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  unsigned int v26; // esi
  unsigned __int64 i; // rdi
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int8 v34; // al
  __int64 v35; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v38; // rcx
  ULONG_PTR v39; // rax
  __int64 SharedVm; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // [rsp+30h] [rbp-D0h]
  KIRQL v45; // [rsp+31h] [rbp-CFh]
  char v47; // [rsp+33h] [rbp-CDh]
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v50; // [rsp+68h] [rbp-98h]
  ULONG_PTR v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  _OWORD v53[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v54; // [rsp+A0h] [rbp-60h] BYREF
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  _BYTE v59[104]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v60)(_QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v61)(_QWORD *); // [rsp+140h] [rbp+40h]
  _QWORD *v62; // [rsp+148h] [rbp+48h]
  _QWORD v63[22]; // [rsp+150h] [rbp+50h] BYREF
  int v64; // [rsp+200h] [rbp+100h] BYREF
  __int16 v65; // [rsp+204h] [rbp+104h]
  __int16 v66; // [rsp+206h] [rbp+106h]
  __int64 v67; // [rsp+208h] [rbp+108h]
  ULONG_PTR v68; // [rsp+210h] [rbp+110h]
  ULONG_PTR v69; // [rsp+218h] [rbp+118h]
  _BYTE v70[152]; // [rsp+220h] [rbp+120h] BYREF
  char v71; // [rsp+338h] [rbp+238h]

  v8 = a5;
  v9 = a4;
  v52 = a5;
  v66 = 0;
  memset(v70, 0, sizeof(v70));
  v11 = a7;
  v12 = a7 & 0x100;
  v44 = 0;
  v71 = 4 * (a6 & 7);
  v13 = a7 & 0x10;
  v50 = a8 + 5;
  while ( 1 )
  {
    v14 = a2;
    v45 = a2;
    memset(v63, 0, 0xA8uLL);
    v54 = 0LL;
    memset(v59, 0, sizeof(v59));
    LODWORD(v63[20]) |= 2u;
    v63[4] = a8;
    LODWORD(v63[15]) = v11;
    v67 = 20LL;
    v64 = MiTbFlushType(a1);
    v55 = &v64;
    v65 = v15;
    v68 = v15;
    v69 = v15;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      BYTE4(v63[15]) = 1;
    v17 = a7 & 0x200;
    v54.m128i_i8[4] = v71 | v54.m128i_i8[4] & 0xE3;
    v62 = v63;
    v18 = 39;
    v54.m128i_i32[0] = 39;
    if ( (a7 & 0x200) != 0 )
    {
      v18 = 1059;
      v54.m128i_i32[0] = 1059;
    }
    if ( v12 )
    {
      v18 |= 0x800u;
      v54.m128i_i32[0] = v18;
    }
    if ( (a7 & 0x800) != (_DWORD)v15 )
      v54.m128i_i8[6] = 63;
    v57 = v9;
    v19 = 0;
    v60 = MiDeleteVa;
    v58 = v8;
    v20 = MiDeleteVaTail;
    v61 = MiDeleteVaTail;
    v56 = a1;
    v47 = 0;
    if ( v13 )
    {
      CurrentThread = KeGetCurrentThread();
      v38 = *(_QWORD *)(a8[5] + 32LL) + 64LL;
      --CurrentThread->SpecialApcDisable;
      v39 = ExAcquireAutoExpandPushLockShared(v38, v15);
      v17 = a7 & 0x200;
      v51 = v39;
      v50 = a8 + 5;
      v18 = v54.m128i_i32[0];
    }
    else
    {
      v51 = v15;
    }
    if ( a2 == 17 )
    {
      if ( (v18 & 4) != 0 )
      {
        v21 = MiLockWorkingSetShared(a1);
      }
      else
      {
        SharedVm = MiGetSharedVm(a1, v15, v20, v16);
        v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
        v9 = a4;
      }
      v17 = a7 & 0x200;
      v14 = v21;
      v45 = v21;
      v22 = v54.m128i_i32[0];
    }
    else
    {
      v22 = v18 & 0xFFFFFFFD;
      v19 = 1;
      v54.m128i_i32[0] = v22;
      v47 = 1;
    }
    v54.m128i_i8[7] = v14;
    if ( v12 )
    {
      if ( !v17 )
        v22 = v22 & 0xFFFFEFFB | 0x1000;
      v54.m128i_i32[0] = v22 & 0xFFFFFFFD;
      v41 = MiGetSharedVm(a1, v15, v20, v16);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v41 + 64));
    }
    if ( (a7 & 0x80) == 0 )
      goto LABEL_40;
    if ( v44 )
      goto LABEL_40;
    if ( ((v9 ^ v8) & 0xFFFFFFE00000LL) != 0 )
      goto LABEL_40;
    v23 = MiFastLockLeafPageTable(a1, v9, 0);
    v24 = v23;
    if ( !v23 )
      goto LABEL_40;
    memset(v53, 0, sizeof(v53));
    MiFillPteHierarchy(v9, v53);
    v25 = *((_QWORD *)v53 + v24);
    v26 = v24 - 1;
    if ( v26 )
    {
      MiUnlockPageTableInternal(a1, v25);
      v13 = a7 & 0x10;
LABEL_40:
      MiWalkPageTables(&v54);
      goto LABEL_28;
    }
    i = v52;
    v28 = v9;
    v29 = *(_QWORD *)&v53[0];
    while ( 1 )
    {
      for ( i = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL; v29 <= i; v29 += 8 * v30 )
      {
        MiDeleteVa(&v54, v29, v26);
        v30 = (unsigned int)(v54.m128i_i32[2] + 1);
        v54.m128i_i32[2] = 0;
      }
      MiDeleteVaTail(&v54);
      if ( v26 == 3 || (*(_DWORD *)(MiGetUsedPtesHandle(v28) + 16) & 0x3FF0000) != 0 )
        break;
      if ( !(unsigned int)MiLockPageTableInternal(a1, ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
      {
        v44 = 1;
        break;
      }
      MiUnlockPageTableInternal(a1, v25);
      v29 = v25;
      v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v26;
      v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiUnlockPageTableInternal(a1, v25);
    v9 = a4;
    v14 = v45;
    v12 = a7 & 0x100;
    v19 = v47;
    v13 = a7 & 0x10;
LABEL_28:
    if ( !v12
      || (v42 = MiGetSharedVm(a1, v31, v32, v33),
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v42 + 64)),
          (a7 & 0x200) != 0) )
    {
      v34 = v54.m128i_i8[0];
    }
    else
    {
      v34 = v54.m128i_i8[0] | 4;
      v54.m128i_i32[0] |= 4u;
    }
    if ( !v19 )
    {
      if ( (v34 & 4) != 0 )
        MiUnlockWorkingSetShared(a1, v14);
      else
        MiUnlockWorkingSetExclusive(a1, v14);
    }
    v35 = a8[6];
    if ( v35 < 0 )
    {
      v43 = *(unsigned __int16 *)(a1 + 174);
      v49 = 0LL;
      a8[1] = MiFreeLargePages(*(_QWORD *)(qword_140C67048 + 8 * v43), v35, (unsigned int)&v49, (int)a8 + 24, 0);
      a8[6] = v49;
    }
    result = (__int64)v50;
    if ( *v50 && v63[16] )
      result = MiFreePhysicalPageChain(*(_QWORD *)(*v50 + 32LL));
    if ( v13 )
      result = MiUnlockAweVadsShared(KeGetCurrentThread(), v51);
    if ( v44 != 1 )
      return result;
    v8 = v52;
    v11 = a7;
    v44 = 2;
  }
}
