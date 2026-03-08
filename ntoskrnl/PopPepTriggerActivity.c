/*
 * XREFs of PopPepTriggerActivity @ 0x140307C1C
 * Callers:
 *     PopPepTryPowerUpComponent @ 0x140304C68 (PopPepTryPowerUpComponent.c)
 *     PopPepUpdateIdleState @ 0x140304DB8 (PopPepUpdateIdleState.c)
 *     PopPepTryPowerDownDevice @ 0x1403050D0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x14059D930 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopPepCancelActivities @ 0x140307390 (PopPepCancelActivities.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepTriggerActivity(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  ULONG_PTR v4; // rbx
  BOOL v8; // ecx
  ULONG_PTR v9; // r10
  int v10; // ecx
  __int64 v11; // rdx
  _DWORD *v12; // r9
  _DWORD *v13; // rax

  v4 = a3;
  PopPepCancelActivities(a1, a2, a3);
  v8 = (unsigned int)v4 <= 5 && ActivityAttributes[136 * v4] == 1;
  v9 = a1 + 72;
  if ( !v8 )
    v9 = a2 + 56;
  v10 = 0;
  v11 = 0LL;
  do
  {
    v12 = *(_DWORD **)(v9 + 8 * v11);
    if ( v12 && (*(_DWORD *)&ActivityAttributes[136 * v4 + 16 + 4 * v11] & *v12) != 0 )
      PopFxBugCheck(0x666uLL, v9, v4, v10);
    ++v10;
    ++v11;
  }
  while ( v10 < 6 );
  if ( a2 )
    v13 = *(_DWORD **)(a2 + 8 * v4 + 56);
  else
    v13 = *(_DWORD **)(a1 + 8 * v4 + 72);
  *v13 |= 1u;
  v13[1] = a4;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))&ActivityAttributes[136 * v4 + 112])(a1, a2, a4);
}
