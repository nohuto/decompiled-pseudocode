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

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  unsigned __int64 v5; // r13
  NTSTATUS result; // eax
  NTSTATUS v7; // r12d
  unsigned __int64 v8; // r15
  int v9; // ebx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 j; // rdi
  unsigned __int64 v13; // r8
  PRKPROCESS v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned __int64 v25; // rcx
  _QWORD **v26; // rax
  _QWORD *i; // rcx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r12
  unsigned __int64 valid; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r12
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rsi
  unsigned __int64 m; // rdi
  __int64 v39; // r12
  unsigned __int64 v40; // rcx
  _QWORD **v41; // rax
  _QWORD *k; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  _DWORD *v45; // r9
  PRKPROCESS v46; // rdi
  void *v47; // rax
  unsigned __int8 v48; // [rsp+40h] [rbp-198h]
  NTSTATUS v49; // [rsp+44h] [rbp-194h]
  char v50; // [rsp+48h] [rbp-190h]
  __int64 v51; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v53; // [rsp+60h] [rbp-178h] BYREF
  __int64 v54; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v56; // [rsp+78h] [rbp-160h]
  __int64 v57; // [rsp+80h] [rbp-158h]
  unsigned __int64 v58; // [rsp+88h] [rbp-150h]
  PSIZE_T v59; // [rsp+90h] [rbp-148h]
  PVOID *v60; // [rsp+98h] [rbp-140h]
  int v61; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v62; // [rsp+A4h] [rbp-134h]
  __int16 v63; // [rsp+A6h] [rbp-132h]
  __int64 v64; // [rsp+A8h] [rbp-130h]
  __int64 v65; // [rsp+B0h] [rbp-128h]
  __int64 v66; // [rsp+B8h] [rbp-120h]
  __int128 v67; // [rsp+C0h] [rbp-118h]
  __int128 v68; // [rsp+D0h] [rbp-108h]
  __int128 v69; // [rsp+E0h] [rbp-F8h]
  __int128 v70; // [rsp+F0h] [rbp-E8h]
  __int128 v71; // [rsp+100h] [rbp-D8h]
  __int128 v72; // [rsp+110h] [rbp-C8h]
  __int128 v73; // [rsp+120h] [rbp-B8h]
  __int128 v74; // [rsp+130h] [rbp-A8h]
  __int128 v75; // [rsp+140h] [rbp-98h]
  __int64 v76; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v59 = RegionSize;
  v60 = BaseAddress;
  v5 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v63 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v53, (__int64)&v51, (__int64)&PROCESS);
  v7 = result;
  v49 = result;
  if ( result < 0 )
    return result;
  v8 = 0LL;
  v56 = 0LL;
  v9 = 0;
  v50 = 0;
  v10 = (v53 + v51 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v51 = v10;
  v58 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v53 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = 2;
    v50 = 2;
  }
  v64 = 20LL;
  v61 = 1;
  v62 = 4;
  v65 = 0LL;
  v66 = 0LL;
  j = 0LL;
  v13 = v10;
  v14 = PROCESS;
  v15 = MiLockVadRange(PROCESS, v11, v13, 0LL);
  v57 = v15;
  if ( !v15 )
    goto LABEL_91;
  v19 = (__int64)&v14[1].ActiveProcessorsPadding[6];
  v48 = MiLockWorkingSetShared(v19, v16, v17, v18);
  if ( v11 <= v51 )
  {
    v20 = 0xFFFFF68000000000uLL;
    v21 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
      {
        if ( MiWorkingSetIsContended(v19)
          || v5 && (unsigned int)MiPageTableLockIsContended(v19, v5)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v64) )
            MiFreeWsleList(v19, (__int64)&v61, 0);
          if ( v5 )
          {
            MiUnlockPageTable(v19, v5);
            v5 = 0LL;
          }
          MiUnlockWorkingSetShared(v19, v48);
          MiLockWorkingSetShared(v19, v22, v23, v24);
        }
        v21 = 0xFFFFF6FB40000000uLL;
        v20 = 0xFFFFF68000000000uLL;
      }
      if ( v11 > v8 || !j )
      {
        if ( j )
        {
          v25 = j;
          v26 = *(_QWORD ***)(j + 8);
          if ( v26 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v26; i; i = (_QWORD *)*i )
              j = (unsigned __int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v25 )
                break;
              v25 = j;
            }
          }
        }
        else
        {
          j = (unsigned __int64)MiLocateAddress(v11);
        }
        v9 &= ~4u;
        v50 = v9;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v50 = v9;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v56 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v28 = v20 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
      v29 = v21 + ((v11 >> 18) & 0x3FFFFFF8);
      if ( v5 == v29 )
        break;
      if ( v5 )
      {
        if ( HIDWORD(v64) )
          MiFreeWsleList(v19, (__int64)&v61, 0);
        MiUnlockPageTable(v19, v5);
      }
      valid = MiLockLowestValidPageTable(v19, v28, &v55);
      v5 = valid;
      if ( valid == v29 )
        break;
      MiUnlockPageTable(v19, valid);
      v5 = 0LL;
      v20 = 0xFFFFF68000000000uLL;
      v11 = (__int64)((v29 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v7 = -1073741782;
      v49 = -1073741782;
LABEL_54:
      v8 = v56;
      v21 = 0xFFFFF6FB40000000uLL;
      if ( v11 > v51 )
        goto LABEL_55;
    }
    v54 = MI_READ_PTE_LOCK_FREE(v28);
    if ( (v54 & 1) == 0 )
    {
      v7 = -1073741782;
      v49 = -1073741782;
LABEL_53:
      v20 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
      goto LABEL_54;
    }
    v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v54 = v31;
    v32 = *(_QWORD *)(v31 + 8);
    v33 = v32 | 0x8000000000000000uLL;
    v55 = v32 | 0x8000000000000000uLL;
    if ( (v9 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v28) == 1 )
      {
LABEL_52:
        v7 = v49;
        goto LABEL_53;
      }
      v31 = v54;
      v33 = v55;
    }
    v34 = *(_QWORD *)(v31 + 40);
    v35 = 0x1000000000LL;
    if ( (v34 & 0x1000000000LL) == 0 && v32 > 0 )
      MiDemoteCombinedPte(v19, v28, v33);
    if ( (MiGetWsleContents(v35, v11) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v61, v11, 1LL, 0LL);
      if ( HIDWORD(v64) == (_DWORD)v64 )
        MiFreeWsleList(v19, (__int64)&v61, 0);
      v7 = -1073741782;
      v49 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v64) )
    MiFreeWsleList(v19, (__int64)&v61, 0);
  if ( v5 )
  {
    MiUnlockPageTable(v19, v5);
    v5 = 0LL;
  }
  if ( v7 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v19, v48);
    v14 = PROCESS;
    v15 = v57;
LABEL_91:
    MiUnlockVadRange(v14, v53, v15, 0LL);
    if ( (v9 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
    return -1073741782;
  }
  v36 = v58;
  v37 = 0LL;
  m = 0LL;
  v39 = v51;
  if ( v58 > v51 )
    goto LABEL_86;
  do
  {
    if ( v36 <= v37 && m )
      goto LABEL_75;
    if ( m )
    {
      v40 = m;
      v41 = *(_QWORD ***)(m + 8);
      if ( v41 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v41; k; k = (_QWORD *)*k )
          m = (unsigned __int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v40 )
            break;
          v40 = m;
        }
      }
    }
    else
    {
      m = (unsigned __int64)MiLocateAddress(v36);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v37 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v5 != ((v36 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v5 )
        MiUnlockPageTable(v19, v5);
      v5 = MiLockLowestValidPageTable(v19, ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v55);
    }
    MiUnlockVa(v19, v36);
    v36 += 4096LL;
    if ( (v36 & 0xF000) == 0
      && (MiWorkingSetIsContended(v19)
       || (unsigned int)MiPageTableLockIsContended(v19, v5)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v19, v5);
      v5 = 0LL;
      MiUnlockWorkingSetShared(v19, v48);
      MiLockWorkingSetShared(v19, v43, v44, v45);
    }
    v39 = v51;
  }
  while ( v36 <= v51 );
  LOBYTE(v9) = v50;
LABEL_86:
  if ( v5 )
    MiUnlockPageTable(v19, v5);
  MiUnlockWorkingSetShared(v19, v48);
  v46 = PROCESS;
  MiUnlockVadRange(PROCESS, v53, v57, 0LL);
  if ( (v9 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v46, 0x6D566D4Du);
  v47 = (void *)v58;
  *v59 = v39 - v58 + 4096;
  *v60 = v47;
  return 0;
}
