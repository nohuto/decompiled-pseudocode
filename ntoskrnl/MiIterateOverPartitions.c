/*
 * XREFs of MiIterateOverPartitions @ 0x140626FE0
 * Callers:
 *     MiFinishResume @ 0x1406244A0 (MiFinishResume.c)
 *     MiMirrorBlackPhase @ 0x1406247B4 (MiMirrorBlackPhase.c)
 *     MiResumeFromHibernate @ 0x1406263EC (MiResumeFromHibernate.c)
 *     MiMirrorDiscardPageContents @ 0x14064CE84 (MiMirrorDiscardPageContents.c)
 *     MiLockAllMemoryLists @ 0x14064E354 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x140650214 (MiUnlockAllMemoryLists.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140652D30 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MmEnumerateBadPages @ 0x140A2CF14 (MmEnumerateBadPages.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiIterateOverPartitions(void (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // r10d
  char *v8; // r11
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned int v11; // edx
  char *v12; // rdx
  __int64 i; // r8
  unsigned int SizeOfBitMap; // edx
  __int64 v15; // rcx

  v2 = 0;
  while ( 2 )
  {
    v5 = v2 < qword_140C67028->SizeOfBitMap ? v2 : 0;
    v6 = qword_140C67028->SizeOfBitMap - 1;
    v7 = ((__int64)qword_140C67028->Buffer & 4) != 0LL ? 0x20 : 0;
    v8 = (char *)qword_140C67028->Buffer - (((__int64)qword_140C67028->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v7 + v6;
      result = v6 - v5 + 1;
      if ( v6 - v5 == -1 )
        goto LABEL_4;
      v12 = &v8[8 * ((unsigned __int64)(v7 + v5) >> 6)];
      result = ~*(_QWORD *)v12;
      for ( i = result | ((1LL << ((v7 + v5) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v12 )
      {
        v12 += 8;
        if ( v12 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
          goto LABEL_4;
      }
      _BitScanForward64((unsigned __int64 *)&result, ~i);
      v11 = result + ((unsigned int)((v12 - v8) >> 3) << 6);
      if ( v11 > v9 )
      {
LABEL_4:
        v11 = -1;
        goto LABEL_11;
      }
      if ( v11 != -1 )
        break;
LABEL_11:
      if ( !v5 )
        goto LABEL_16;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140C67028->SizeOfBitMap )
        SizeOfBitMap = qword_140C67028->SizeOfBitMap;
      v6 = SizeOfBitMap - 1;
      v5 = 0;
    }
    v11 -= v7;
LABEL_16:
    if ( v11 >= v2 && v11 != -1 )
    {
      v2 = v11 + 1;
      v15 = *(_QWORD *)(qword_140C67048 + 8LL * v11);
      if ( (*(_DWORD *)(v15 + 4) & 2) != 0 )
        a1(v15, a2);
      continue;
    }
    return result;
  }
}
