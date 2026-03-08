/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C027110C
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C0094ED0 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserRemoveVisualIdentifier @ 0x1C0175CE0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C0270F00 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x1C02712C8 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1, int a2)
{
  struct InputObjectMapEntry *Entry; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct InputObjectMapEntry *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ebx
  struct InputObjectMapEntry *i; // rdx
  __int64 v14; // [rsp+50h] [rbp+18h]
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v15, (struct _EX_PUSH_LOCK *)&InputObjectMap::s_hashTableLock);
  Entry = InputObjectMap::FindEntry(a1);
  v9 = Entry;
  if ( !Entry )
  {
    v11 = -1073741275;
    goto LABEL_12;
  }
  if ( a2 != 1 )
  {
    v10 = *((_QWORD *)Entry + 3);
    if ( *(_QWORD *)(v10 + 56) != PsGetCurrentProcess(v6, v5, v7, v8) )
    {
      v11 = -1073741790;
LABEL_12:
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
      return v11;
    }
  }
  v14 = *((_QWORD *)v9 + 1) & (-1LL << (*(&InputObjectMap::s_hashTable + 4) & 0x1F));
  for ( i = (struct InputObjectMapEntry *)((char *)Buffer
                                         + 8
                                         * ((37
                                           * (BYTE6(v14)
                                            + 37
                                            * (BYTE5(v14)
                                             + 37
                                             * (BYTE4(v14)
                                              + 37
                                              * (BYTE3(v14)
                                               + 37
                                               * (BYTE2(v14) + 37
                                                             * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                                           + HIBYTE(v14)) & (unsigned int)((*(&InputObjectMap::s_hashTable + 1) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct InputObjectMapEntry **)i )
  {
    if ( *(struct InputObjectMapEntry **)i == v9 )
    {
      *(_QWORD *)i = *(_QWORD *)v9;
      --InputObjectMap::s_hashTable;
      *(_QWORD *)v9 |= 0x8000000000000002uLL;
      break;
    }
  }
  ExReleasePushLockExclusiveEx(v15, 0LL);
  KeLeaveCriticalRegion();
  InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)v9 + 3), *a1);
  ObfDereferenceObject(*((PVOID *)v9 + 3));
  ExFreePoolWithTag(v9, 0);
  return 0LL;
}
