/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x14038B4B8
 * Callers:
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReplicatePteChange @ 0x1402A4528 (MiReplicatePteChange.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FCB78 (MiInsertRecursiveTbFlushEntries.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiTransformValidPteInPlace @ 0x1403BD25C (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(unsigned __int64 *a1, int a2)
{
  unsigned __int64 ValidPte; // rbx
  char v5; // al
  unsigned __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  bool v9; // zf
  _QWORD v10[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C693D8 == (PVOID)qword_140C693E0 )
  {
    memset(v10, 0, 0xB8uLL);
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    if ( a2 && v5 < 0 )
      MiInsertLargeTbFlushEntry((__int64)v10, a2, (__int64)a1);
    else
      MiInsertRecursiveTbFlushEntries((__int64)v10, a2, (__int64)a1);
    v6 = ZeroPte;
    v7 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)a1) )
      goto LABEL_16;
    if ( MiPteHasShadow() )
    {
      v7 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v9 = (ZeroPte & 1) == 0;
        goto LABEL_14;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v9 = (ZeroPte & 1) == 0;
LABEL_14:
      if ( !v9 )
        v6 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_16:
    *a1 = v6;
    if ( v7 )
      MiWritePteShadow((__int64)a1, v6, v8);
    goto LABEL_19;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, (__int64)*(&qword_140C693D8 + a2), a2 != 0 ? -1476395004 : 536870913);
  MiTransformValidPteInPlace(a1, a1, ValidPte, (unsigned int)a2);
  if ( a2 == 3 )
  {
    memset(v10, 0, 0xB8uLL);
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    MiReplicatePteChange((__int64)a1, ValidPte, 0);
    MiInsertRecursiveTbFlushEntries((__int64)v10, 3, (__int64)a1);
LABEL_19:
    MiFlushTbList((int *)v10);
  }
}
