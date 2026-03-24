/*
 * XREFs of CmpAbortRollbackPacket @ 0x14077A7CC
 * Callers:
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpTransDereferenceTransaction @ 0x14066E000 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406A5420 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v7; // rbx
  int v8; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v7 )
        break;
LABEL_19:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v7 & 1) != 0 )
    {
      v8 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
      if ( v8 < 0 )
        goto LABEL_12;
      CmpTransDereferenceTransaction(v7);
    }
    else
    {
      v8 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v8 < 0 )
        goto LABEL_12;
      HalPutDmaAdapter((PADAPTER_OBJECT)v7);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_12:
    if ( ((v8 + 1072103405) & 0xFFFFFFFC) == 0 && v8 != -1072103404 )
    {
      v8 = 0;
      if ( a2 )
        *a2 = 1;
    }
    if ( v2 >= 0 && v8 < 0 )
      v2 = v8;
    goto LABEL_19;
  }
  return (unsigned int)v2;
}
