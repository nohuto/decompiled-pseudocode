/*
 * XREFs of PopPropogateCoolingChange @ 0x140584860
 * Callers:
 *     PoSetThermalActiveCooling @ 0x14097FC40 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x14097FCF0 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x14097FDF0 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     PopDisableCoolingExtension @ 0x1409800A8 (PopDisableCoolingExtension.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x14098A200 (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x14098A2C4 (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

unsigned int __fastcall PopPropogateCoolingChange(__int64 a1)
{
  char v2; // si
  unsigned __int8 v3; // di
  __int64 *i; // rcx
  unsigned __int8 v5; // r8
  unsigned int result; // eax
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx
  struct _KEVENT *v9; // rcx

  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return result;
  }
  do
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          v5 = v3;
          if ( *((_BYTE *)i + 18) )
          {
            v3 = *((_BYTE *)i + 16);
            if ( v3 >= v5 )
              v3 = v5;
            if ( *((_BYTE *)i + 17) )
              v2 = 1;
          }
        }
      }
      if ( v3 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v3;
      *(_BYTE *)(a1 + 67) = 1;
      PopReleaseRwLock(a1 + 32);
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 136))(*(_QWORD *)(a1 + 96), v3);
      result = (unsigned int)PopAcquireRwLockExclusive(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v2 == *(_BYTE *)(a1 + 65) )
      goto LABEL_18;
    *(_BYTE *)(a1 + 65) = v2;
    *(_BYTE *)(a1 + 67) = 1;
    PopReleaseRwLock(a1 + 32);
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v7) = v2;
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 96), v7);
    result = (unsigned int)PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_18:
  v8 = *(struct _KEVENT **)(a1 + 80);
  if ( v8 )
    result = KeSetEvent(v8, 0, 0);
  v9 = *(struct _KEVENT **)(a1 + 72);
  if ( v9 )
    return KeSetEvent(v9, 0, 0);
  return result;
}
