/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402AE5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x14025B070 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x140314D20 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x140338B10 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403B6600 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x140536918 (MiShouldYieldProcessor.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620550 (MiUnlockVadRange.c)
 *     MiLockUnlockCommon @ 0x14067DB7C (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(HANDLE Handle, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  int v6; // r12d
  unsigned __int64 v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 j; // rdi
  unsigned __int64 v12; // r8
  PRKPROCESS v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *i; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r12
  unsigned __int64 valid; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rsi
  unsigned __int64 m; // rdi
  __int64 v38; // r12
  unsigned __int64 v39; // rcx
  _QWORD **v40; // rax
  _QWORD *k; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  PRKPROCESS v45; // rdi
  unsigned __int64 v46; // rax
  unsigned __int8 v47; // [rsp+40h] [rbp-198h]
  int v48; // [rsp+44h] [rbp-194h]
  char v49; // [rsp+48h] [rbp-190h]
  __int64 v50; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v52; // [rsp+60h] [rbp-178h] BYREF
  __int64 v53; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-160h]
  __int64 v56; // [rsp+80h] [rbp-158h]
  unsigned __int64 v57; // [rsp+88h] [rbp-150h]
  _QWORD *v58; // [rsp+90h] [rbp-148h]
  unsigned __int64 *v59; // [rsp+98h] [rbp-140h]
  int v60; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v61; // [rsp+A4h] [rbp-134h]
  __int16 v62; // [rsp+A6h] [rbp-132h]
  __int64 v63; // [rsp+A8h] [rbp-130h]
  __int64 v64; // [rsp+B0h] [rbp-128h]
  __int64 v65; // [rsp+B8h] [rbp-120h]
  __int128 v66; // [rsp+C0h] [rbp-118h]
  __int128 v67; // [rsp+D0h] [rbp-108h]
  __int128 v68; // [rsp+E0h] [rbp-F8h]
  __int128 v69; // [rsp+F0h] [rbp-E8h]
  __int128 v70; // [rsp+100h] [rbp-D8h]
  __int128 v71; // [rsp+110h] [rbp-C8h]
  __int128 v72; // [rsp+120h] [rbp-B8h]
  __int128 v73; // [rsp+130h] [rbp-A8h]
  __int128 v74; // [rsp+140h] [rbp-98h]
  __int64 v75; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v58 = a3;
  v59 = a2;
  v4 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v62 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  result = MiLockUnlockCommon(Handle, (__int64)&v52, (__int64)&v50, (__int64)&PROCESS);
  v6 = result;
  v48 = result;
  if ( (int)result < 0 )
    return result;
  v7 = 0LL;
  v55 = 0LL;
  v8 = 0;
  v49 = 0;
  v9 = (v52 + v50 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v50 = v9;
  v57 = v52 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v52 & 0xFFFFFFFFFFFFF000uLL;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = 2;
    v49 = 2;
  }
  v63 = 20LL;
  v60 = 1;
  v61 = 4;
  v64 = 0LL;
  v65 = 0LL;
  j = 0LL;
  v12 = v9;
  v13 = PROCESS;
  v14 = MiLockVadRange(PROCESS, v10, v12, 0LL);
  v56 = v14;
  if ( !v14 )
    goto LABEL_91;
  v18 = (__int64)&v13[1].ActiveProcessorsPadding[6];
  v47 = MiLockWorkingSetShared(v18, v15, v16, v17);
  if ( v10 <= v50 )
  {
    v19 = 0xFFFFF68000000000uLL;
    v20 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
      {
        if ( MiWorkingSetIsContended(v18)
          || v4 && (unsigned int)MiPageTableLockIsContended(v18, v4)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v63) )
            MiFreeWsleList(v18, (__int64)&v60, 0);
          if ( v4 )
          {
            MiUnlockPageTable(v18, v4);
            v4 = 0LL;
          }
          MiUnlockWorkingSetShared(v18, v47);
          MiLockWorkingSetShared(v18, v21, v22, v23);
        }
        v20 = 0xFFFFF6FB40000000uLL;
        v19 = 0xFFFFF68000000000uLL;
      }
      if ( v10 > v7 || !j )
      {
        if ( j )
        {
          v24 = j;
          v25 = *(_QWORD ***)(j + 8);
          if ( v25 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v25; i; i = (_QWORD *)*i )
              j = (unsigned __int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v24 )
                break;
              v24 = j;
            }
          }
        }
        else
        {
          j = (unsigned __int64)MiLocateAddress(v10);
        }
        v8 &= ~4u;
        v49 = v8;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v49 = v8;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v55 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v27 = v19 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      v28 = v20 + ((v10 >> 18) & 0x3FFFFFF8);
      if ( v4 == v28 )
        break;
      if ( v4 )
      {
        if ( HIDWORD(v63) )
          MiFreeWsleList(v18, (__int64)&v60, 0);
        MiUnlockPageTable(v18, v4);
      }
      valid = MiLockLowestValidPageTable(v18, v27, &v54);
      v4 = valid;
      if ( valid == v28 )
        break;
      MiUnlockPageTable(v18, valid);
      v4 = 0LL;
      v19 = 0xFFFFF68000000000uLL;
      v10 = (__int64)((v28 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v6 = -1073741782;
      v48 = -1073741782;
LABEL_54:
      v7 = v55;
      v20 = 0xFFFFF6FB40000000uLL;
      if ( v10 > v50 )
        goto LABEL_55;
    }
    v53 = MI_READ_PTE_LOCK_FREE(v27);
    if ( (v53 & 1) == 0 )
    {
      v6 = -1073741782;
      v48 = -1073741782;
LABEL_53:
      v19 = 0xFFFFF68000000000uLL;
      v10 += 4096LL;
      goto LABEL_54;
    }
    v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v53) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v53 = v30;
    v31 = *(_QWORD *)(v30 + 8);
    v32 = v31 | 0x8000000000000000uLL;
    v54 = v31 | 0x8000000000000000uLL;
    if ( (v8 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v27) == 1 )
      {
LABEL_52:
        v6 = v48;
        goto LABEL_53;
      }
      v30 = v53;
      v32 = v54;
    }
    v33 = *(_QWORD *)(v30 + 40);
    v34 = 0x1000000000LL;
    if ( (v33 & 0x1000000000LL) == 0 && v31 > 0 )
      MiDemoteCombinedPte(v18, v27, v32);
    if ( (MiGetWsleContents(v34, v10) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v60, v10, 1LL, 0LL);
      if ( HIDWORD(v63) == (_DWORD)v63 )
        MiFreeWsleList(v18, (__int64)&v60, 0);
      v6 = -1073741782;
      v48 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v63) )
    MiFreeWsleList(v18, (__int64)&v60, 0);
  if ( v4 )
  {
    MiUnlockPageTable(v18, v4);
    v4 = 0LL;
  }
  if ( v6 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v18, v47);
    v13 = PROCESS;
    v14 = v56;
LABEL_91:
    MiUnlockVadRange(v13, v52, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return 3221225514LL;
  }
  v35 = v57;
  v36 = 0LL;
  m = 0LL;
  v38 = v50;
  if ( v57 > v50 )
    goto LABEL_86;
  do
  {
    if ( v35 <= v36 && m )
      goto LABEL_75;
    if ( m )
    {
      v39 = m;
      v40 = *(_QWORD ***)(m + 8);
      if ( v40 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v40; k; k = (_QWORD *)*k )
          m = (unsigned __int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v39 )
            break;
          v39 = m;
        }
      }
    }
    else
    {
      m = (unsigned __int64)MiLocateAddress(v35);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v36 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v4 != ((v35 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v4 )
        MiUnlockPageTable(v18, v4);
      v4 = MiLockLowestValidPageTable(v18, ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v54);
    }
    MiUnlockVa(v18, v35);
    v35 += 4096LL;
    if ( (v35 & 0xF000) == 0
      && (MiWorkingSetIsContended(v18)
       || (unsigned int)MiPageTableLockIsContended(v18, v4)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v18, v4);
      v4 = 0LL;
      MiUnlockWorkingSetShared(v18, v47);
      MiLockWorkingSetShared(v18, v42, v43, v44);
    }
    v38 = v50;
  }
  while ( v35 <= v50 );
  LOBYTE(v8) = v49;
LABEL_86:
  if ( v4 )
    MiUnlockPageTable(v18, v4);
  MiUnlockWorkingSetShared(v18, v47);
  v45 = PROCESS;
  MiUnlockVadRange(PROCESS, v52, v56, 0LL);
  if ( (v8 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v45, 0x6D566D4Du);
  v46 = v57;
  *v58 = v38 - v57 + 4096;
  *v59 = v46;
  return 0LL;
}
