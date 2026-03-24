/*
 * XREFs of rimFindReferencedRimObj @ 0x1C015281C
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0168074 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168340 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0057A7C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(unsigned int a1, __int16 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *v5; // rdi
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v10; // rbx
  int v11; // eax
  int v12; // ebp
  int v13; // r8d
  NTSTATUS v14; // ebx

  v5 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_23;
  while ( 1 )
  {
    v10 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v10[5].Flink) && !BYTE2(v10->Blink) && (a1 & HIDWORD(v10[5].Flink)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v11 = 65814;
        if ( _bittest(&v11, a1) )
        {
          if ( LODWORD(v10[54].Flink) )
            goto LABEL_19;
          v13 = 403;
          goto LABEL_18;
        }
      }
      if ( a1 == 32 )
        break;
    }
LABEL_12:
    Flink = Flink->Flink;
    if ( Flink == &gObRimList )
      goto LABEL_20;
  }
  v12 = (int)v10[54].Flink;
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)&Flink[-1], a2, a3) )
  {
    if ( v12 )
      v5 = v10;
    goto LABEL_12;
  }
  if ( !v12 )
    goto LABEL_19;
  v13 = 413;
LABEL_18:
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v13);
LABEL_19:
  v5 = v10;
LABEL_20:
  if ( !v5 )
  {
LABEL_23:
    v14 = -1073741637;
    goto LABEL_24;
  }
  v14 = ObReferenceObjectByPointer(v5, 3u, ExRawInputManagerObjectType, 1);
  if ( v14 >= 0 )
    *a4 = v5;
LABEL_24:
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
