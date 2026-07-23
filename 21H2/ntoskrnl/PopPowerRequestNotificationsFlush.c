/*
 * XREFs of PopPowerRequestNotificationsFlush @ 0x1408E1C48
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14066DD84 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopNotifyUserPowerRequestAction @ 0x1408E1BC8 (PopNotifyUserPowerRequestAction.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1408F27F8 (PopUmpoSendPowerRequestCreate.c)
 */

char __fastcall PopPowerRequestNotificationsFlush(__int64 *a1)
{
  __int64 i; // rbx
  int v3; // edi
  _DWORD *v4; // rbp
  int v5; // eax

  for ( i = *a1; (__int64 *)i != a1; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 88) )
    {
      PopUmpoSendPowerRequestCreate(*(unsigned int *)(i + 28));
      v3 = 0;
      v4 = (_DWORD *)(i + 32);
      do
      {
        v5 = *(_DWORD *)(i + 24);
        if ( !_bittest(&v5, v3) && *v4 && (unsigned int)v3 <= 3 )
          LOBYTE(v5) = PopNotifyUserPowerRequestAction(i, v3, 1);
        ++v3;
        ++v4;
      }
      while ( v3 < 6 );
    }
  }
  return v5;
}
