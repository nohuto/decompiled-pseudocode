/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x140A2E020
 * Callers:
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsPfn @ 0x14025F1D0 (MiIsPfn.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiSanitizePage @ 0x14029B170 (MiSanitizePage.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiReferenceVad @ 0x14031F794 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiUpdateVadStartVpn @ 0x14034CF40 (MiUpdateVadStartVpn.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiCommitVadMetadataBits @ 0x1407D2944 (MiCommitVadMetadataBits.c)
 *     MiIsVaRangeAvailable @ 0x1407D3554 (MiIsVaRangeAvailable.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x1407D72F0 (MiAdvanceVadHint.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int a4)
{
  char v4; // r14
  __int64 v7; // r15
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Pool; // rax
  __int64 v11; // rbx
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int inserted; // ebp
  __int64 v17; // r14
  ULONG_PTR v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  unsigned __int64 v35; // [rsp+60h] [rbp-68h]
  unsigned __int64 v36; // [rsp+60h] [rbp-68h]
  unsigned __int64 v37; // [rsp+68h] [rbp-60h]
  _QWORD *v38; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 v40; // [rsp+80h] [rbp-48h]
  __int64 v41; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 *v42; // [rsp+D8h] [rbp+10h]
  _DWORD *v43; // [rsp+E0h] [rbp+18h]

  v43 = a3;
  v42 = a2;
  v4 = a4;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 || *(_QWORD *)(a1 + 72) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 88);
  v8 = a4 >> 3;
  if ( a4 >> 3 == 2 || (a4 & 5) == 5 || a4 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v38 = 0LL;
  v34 = (__int64)CurrentThread;
  Pool = MiAllocatePool(64, 0x40uLL, 0x6C646156u);
  v11 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[2] = -2LL;
  v13 = Pool[6] & 0xFFFFF01F;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_DWORD *)(v11 + 48) = v13 | ((v4 & 0x1F) << 7) | 0x200010;
  v14 = MiSanitizePage(*a3 >> 12);
  v41 = 0LL;
  v37 = -1LL;
  v15 = v14;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v7);
  if ( (*(_DWORD *)(v7 + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_10:
    UNLOCK_ADDRESS_SPACE_UNORDERED(v34, v7);
    if ( v37 != -1LL )
    {
      v17 = -1LL;
      v18 = 0LL;
      while ( v15 <= v37 )
      {
        if ( (unsigned int)MiIsPfn(v15) )
          goto LABEL_44;
        v32 = v15;
        if ( v18 )
          v32 = v17;
        ++v18;
        v17 = v32;
        if ( v15 == v37 )
        {
LABEL_44:
          if ( v18 )
          {
            MiDereferenceIoPages(1, v17, v18);
            v17 = -1LL;
            v18 = 0LL;
          }
        }
        ++v15;
      }
    }
    ExFreePoolWithTag((PVOID)v11, 0);
    return (unsigned int)inserted;
  }
  v19 = (unsigned __int16)*(_DWORD *)a3;
  if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
  {
    v21 = v19 + *v42;
    v20 = v21 + *(_QWORD *)(a1 + 24) - 1LL;
    if ( !(unsigned int)MiIsVaRangeAvailable(v7, v21, *(_QWORD *)(a1 + 24), *(_QWORD *)a1, *(_QWORD *)(a1 + 8)) )
    {
      inserted = -1073741800;
      goto LABEL_10;
    }
  }
  else
  {
    v35 = *(_QWORD *)(a1 + 24) + v19;
    inserted = MiSelectUserAddress(
                 *(_DWORD *)(a1 + 40),
                 *(_QWORD *)a1,
                 *(_QWORD *)(a1 + 8),
                 v35,
                 *(_QWORD *)(a1 + 16),
                 0LL,
                 v4,
                 0,
                 (__int64 *)&v38,
                 &v41);
    if ( inserted < 0 )
      goto LABEL_10;
    v20 = v41 + v35 - 1;
    v21 = (unsigned __int16)*v43 + v41;
  }
  v26 = v20 >> 12;
  v40 = v21 >> 12;
  v39 = v26;
  MiUpdateVadStartVpn(v11, v21 >> 12);
  v23 = *(unsigned __int8 *)(v11 + 32);
  v24 = *(unsigned int *)(v11 + 24);
  *(_BYTE *)(v11 + 33) = BYTE4(v26);
  v25 = (unsigned int)v26;
  LODWORD(v26) = 1;
  *(_DWORD *)(v11 + 28) = v25;
  LODWORD(v41) = 1;
  v36 = v15 + (v25 | ((unsigned __int64)BYTE4(v26) << 32)) - (v24 | (v23 << 32));
  if ( v8 == 3 )
  {
    if ( (v4 & 7) == 0 )
      goto LABEL_23;
    LODWORD(v26) = 2;
  }
  else if ( v8 == 1 )
  {
    LODWORD(v26) = v22;
  }
  LODWORD(v41) = v26;
LABEL_23:
  v33 = -1LL;
  v27 = v22;
  v28 = v15;
  if ( v15 <= v15 + (v25 | ((unsigned __int64)BYTE4(v26) << 32)) - (v24 | (v23 << 32)) )
  {
    while ( !(unsigned int)MiIsPfn(v28) )
    {
      v29 = v28;
      if ( v27 )
        v29 = v33;
      ++v27;
      v33 = v29;
      if ( v28 == v36 )
        goto LABEL_30;
LABEL_33:
      LODWORD(v26) = v41;
      if ( ++v28 > v36 )
        goto LABEL_34;
    }
    v29 = v33;
LABEL_30:
    if ( v27 )
    {
      inserted = MiReferenceIoPages(1, v29, v27, v26, 0LL, 0LL);
      if ( inserted < 0 )
        goto LABEL_10;
      v30 = v27 + v33 - 1;
      v27 = 0LL;
      v33 = -1LL;
      v37 = v30;
    }
    goto LABEL_33;
  }
LABEL_34:
  inserted = MiInsertVadCharges(v11, (struct _KPROCESS *)v7);
  if ( inserted < 0 )
    goto LABEL_10;
  MiInsertViewOfPhysicalSection(v7, v11, v15);
  if ( v38 )
    MiAdvanceVadHint(v40, v39, v38);
  if ( *(_DWORD *)(a1 + 120) )
  {
    MiLockVad(v34, v11);
    UNLOCK_ADDRESS_SPACE_UNORDERED(v34, v7);
    v31 = MiCommitVadMetadataBits(v11, 0LL, *(_DWORD *)(a1 + 120));
    if ( v31 < 0 )
    {
      MiReferenceVad(v11);
      MiDeleteVad((unsigned int *)v11, 0LL, 0);
      return (unsigned int)v31;
    }
    MiUnlockVad(v34, v11);
  }
  else
  {
    UNLOCK_ADDRESS_SPACE_UNORDERED(v34, v7);
  }
  *v42 = v21;
  return 0LL;
}
