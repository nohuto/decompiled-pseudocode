/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x14063CAD0
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1406399E8 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14063C604 (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x14063D324 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 *v5; // rbp
  unsigned __int64 v6; // r14
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  char v11; // al
  _OWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]
  unsigned __int8 v14; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  if ( qword_140C657C0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C657C0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v14 = 17;
  v5 = (__int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v12);
  v6 = MiCheckProtoPtePageState((ULONG_PTR)v5, &v14);
  if ( v6 )
  {
    v7 = MiLockLeafPage(v5, 0);
    if ( v7 )
    {
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v8;
      if ( (v8 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140C657C0 )
      {
        if ( (v8 & 0x10) != 0 )
          v8 &= ~0x10uLL;
        else
          v8 &= ~qword_140C657C0;
      }
      if ( v7 != 48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL )
        goto LABEL_7;
      if ( (*(_DWORD *)(v7 + 16) & 0x401) != 0x400LL || (__int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != v5 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v7 + 8), BugCheckParameter4);
      v11 = *(_BYTE *)(v7 + 34);
      if ( (v11 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v11 & 0x10) != 0 )
        {
          if ( *(char *)(v7 + 35) >= 0 )
            MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4));
          *(_BYTE *)(v7 + 34) &= ~0x10u;
        }
        MiDeleteTransitionPte((ULONG_PTR)v5, v7, 2u, 1);
        v2 = 1;
      }
    }
  }
  if ( v14 != 17 )
    MiUnlockProtoPoolPage(v6, v14);
  return MiSubsectionProtosCreated(v4, v12, 0LL, v2);
}
