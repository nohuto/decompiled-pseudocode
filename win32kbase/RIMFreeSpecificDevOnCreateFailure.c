/*
 * XREFs of RIMFreeSpecificDevOnCreateFailure @ 0x1C019DEC8
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC0DC (rimDoRimDevChangeAsyncWorkItem.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     rimFreeSpecificDevFinal @ 0x1C00BC028 (rimFreeSpecificDevFinal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserLogError @ 0x1C017CC90 (UserLogError.c)
 */

LONG_PTR __fastcall RIMFreeSpecificDevOnCreateFailure(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rbp
  __int64 i; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  LONG_PTR *j; // rcx
  LONG_PTR result; // rax
  LONG_PTR v10; // rax

  UserLogError(-1073741122);
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 966);
  v4 = a2[4];
  RIMLockExclusive((__int64)(a1 + 44));
  for ( i = a1[47]; (__int64 *)i != a1 + 47; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 56) == v4 )
      *(_DWORD *)(i + 128) = 1;
  }
  a1[45] = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 44, 0LL);
  KeLeaveCriticalRegion();
  for ( j = a1 + 53; ; j = (LONG_PTR *)(result + 40) )
  {
    result = *j;
    if ( !*j )
      break;
    if ( (_QWORD *)result == a2 )
    {
      v10 = a2[5];
      a2[31] = 0LL;
      *j = v10;
      a2[5] = 0LL;
      return rimFreeSpecificDevFinal(a1, (__int64)a2, v6, v7);
    }
  }
  return result;
}
