/*
 * XREFs of PopPepTriggerActivity @ 0x1402836C8
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1402828E0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 *     PopPepUpdateIdleState @ 0x140283A08 (PopPepUpdateIdleState.c)
 *     PopPepTryPowerUpComponent @ 0x140283B58 (PopPepTryPowerUpComponent.c)
 *     PopPepSurprisePowerOn @ 0x14038BCE8 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopPepCancelActivities @ 0x1402837B4 (PopPepCancelActivities.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepTriggerActivity(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  ULONG_PTR v4; // rdi
  BOOL v8; // ecx
  ULONG_PTR v9; // r11
  int v10; // edx
  __int64 v11; // r8
  _DWORD *v12; // r9
  _DWORD *v13; // rax

  v4 = (int)a3;
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
