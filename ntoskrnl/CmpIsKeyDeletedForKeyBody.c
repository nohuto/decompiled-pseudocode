/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140AF21E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1406B4A70 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A10EC4 (CmEnumerateValueFromLayeredKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x140A13D78 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x140A18448 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r9
  _QWORD **v7; // r10
  int v8; // ecx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    goto LABEL_3;
  NextElement = CmListGetNextElement((_QWORD **)(v4 + 208), &v10, 32);
  if ( !NextElement )
    goto LABEL_3;
  do
  {
    v8 = *((_DWORD *)NextElement + 17);
    if ( v8 == 2 || v8 == 11 )
      break;
    NextElement = CmListGetNextElement(v7, &v10, 32);
  }
  while ( NextElement );
  if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v6) )
LABEL_9:
    LOBYTE(NextElement) = 1;
  else
LABEL_3:
    LOBYTE(NextElement) = 0;
  return (char)NextElement;
}
