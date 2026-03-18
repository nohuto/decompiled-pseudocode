/*
 * XREFs of rimFindReferencedRimObj @ 0x1C0004BD0
 * Callers:
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00046D4 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C019C4FC (RIMIDECreatePseudoHIDDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0056498 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rbx
  int v14; // eax
  NTSTATUS v15; // ebx
  int v17; // ebp

  v8 = 0LL;
  RIMLockExclusive(&gObListLock);
  Flink = gObRimList.Flink;
  v12 = &gObRimList;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_15;
  while ( 1 )
  {
    v13 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v13[5].Flink) && !BYTE2(v13->Blink) && (a1 & HIDWORD(v13[5].Flink)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v14 = 65814;
        if ( _bittest(&v14, a1) )
        {
          if ( LODWORD(v13[68].Flink) )
            goto LABEL_10;
          goto LABEL_9;
        }
      }
      if ( a1 == 32 )
        break;
    }
LABEL_20:
    Flink = Flink->Flink;
    if ( Flink == &gObRimList )
      goto LABEL_11;
  }
  v17 = (int)v13[68].Flink;
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages(&Flink[-1], a2, a3) )
  {
    v12 = &gObRimList;
    if ( v17 )
      v8 = v13;
    goto LABEL_20;
  }
  if ( v17 )
LABEL_9:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10);
LABEL_10:
  v8 = v13;
LABEL_11:
  if ( !v8 )
  {
LABEL_15:
    v15 = -1073741637;
    goto LABEL_14;
  }
  v15 = ObReferenceObjectByPointer(v8, 3u, ExRawInputManagerObjectType, 1);
  if ( v15 >= 0 )
    *a4 = v8;
LABEL_14:
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
