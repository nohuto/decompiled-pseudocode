/*
 * XREFs of MiCombineWithExisting @ 0x14034A4C4
 * Callers:
 *     MiConvertPrivateToProto @ 0x14034A20C (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiRebuildPageTableLeafAges @ 0x14032AD30 (MiRebuildPageTableLeafAges.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403482CC (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140349598 (MI_WSLE_LOG_ACCESS.c)
 *     MiMapSinglePage @ 0x14034A868 (MiMapSinglePage.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiConfirmCombinePageContents @ 0x14034B140 (MiConfirmCombinePageContents.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 v6; // r13
  volatile __int64 *v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rdi
  int v15; // ebx
  unsigned __int64 *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rcx
  char WsleContents; // di
  int v20; // r15d
  BOOL v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rbx
  char v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v29; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v31; // [rsp+40h] [rbp-59h]
  __int64 v32; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+50h] [rbp-49h]
  unsigned __int64 v34; // [rsp+58h] [rbp-41h]
  unsigned __int64 v35; // [rsp+60h] [rbp-39h]
  __int64 v36; // [rsp+68h] [rbp-31h]
  __int128 v37; // [rsp+70h] [rbp-29h] BYREF
  __int128 v38; // [rsp+80h] [rbp-19h]
  __int128 *v39; // [rsp+90h] [rbp-9h] BYREF
  int v40; // [rsp+98h] [rbp-1h]
  int v41; // [rsp+9Ch] [rbp+3h]

  v4 = *(_QWORD *)(a2 + 16);
  v29 = a1[14];
  v6 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v39 = (__int128 *)a4;
  v36 = a2;
  v31 = a1;
  v37 = 0LL;
  v38 = 0LL;
  v8 = (volatile __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
  v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v32) >> 12) & 0xFFFFFFFFFFLL;
  v35 = v9;
  v10 = 48 * v9 - 0x220000000000LL;
  v11 = a3 + 32;
  v30 = (_QWORD *)*a1;
  v34 = v11;
  v33 = MiLockProtoPoolPage(v11, 0LL);
  v12 = v33;
  if ( !v33 )
    return 0LL;
  v13 = MiLockLeafPage(v11, 0LL);
  if ( v13 )
  {
    v14 = v31[12];
    MiMapSinglePage(v14, v9, 3221225488LL, 0LL);
    MiMapSinglePage(v14 + 4096, 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4), 3221225488LL, 0LL);
    v15 = MiConfirmCombinePageContents(v31, 0xAAAAAAAAAAAAAAABuLL * ((v13 + 0x220000000000LL) >> 4), *v30);
    *(_QWORD *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
    *(_QWORD *)((((v14 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
    if ( v15 )
    {
      MiGetPfnPriority(v10);
      MiUpdatePfnPriority(v13);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v33, 0x11u);
    if ( v15 )
    {
      if ( dword_140C67C68 )
        MI_WSLE_LOG_ACCESS(v29, (unsigned __int64)v8);
      v16 = (unsigned __int64 *)v34;
      v17 = MiSwizzleInvalidPte((v34 << 16) | 0x400) | 0x800;
      LODWORD(v30) = 0;
      WsleContents = MiGetWsleContents(v18, v6);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v10 + 32) == 1 )
      {
        if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
        {
          v20 = 1;
          v37 = 0LL;
          v38 = 0LL;
          MiIdentifyPfn(v35, &v37);
        }
        else
        {
          v20 = 0;
        }
        v21 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v8, v17, 2);
        v22 = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 24) |= 0x4000000000000000uLL;
        *(_BYTE *)(v10 + 34) |= 7u;
        v23 = v22 & 0xFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_QWORD *)(v36 + 16) = v10;
        if ( v21 )
          MiInsertTbFlushEntry((__int64)v39, v6, 1LL, 0);
        v24 = WsleContents;
        v25 = v29;
        MiRemoveWsle(v29, v6, 1LL, v24, 10, 1);
        MiRebuildPageTableLeafAges(v26, v6);
        v27 = 48 * v23 - 0x220000000000LL;
        LODWORD(v29) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v29);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
        MiDecrementShareCount(v27);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiResolveProtoCombine((unsigned __int64 *)v8, v25, v16);
        if ( v20 )
        {
          v41 = 0;
          v39 = &v37;
          *((_QWORD *)&v38 + 1) = v16;
          v40 = 32;
          EtwTraceKernelEvent((unsigned int)&v39, 1, 671088641, 634, 289413892);
        }
        ++*(_QWORD *)v31[13];
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    MiUnlockProtoPoolPage(v12, 0x11u);
  }
  return 3221225496LL;
}
