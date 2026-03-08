/*
 * XREFs of PopPepProcessEvent @ 0x140307424
 * Callers:
 *     PopPepNotifyIdleState @ 0x1402EFAF0 (PopPepNotifyIdleState.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopPluginDevicePower @ 0x140306D00 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x14030721C (PopPluginComponentActive.c)
 *     PopPepCompleteComponentIdleState @ 0x14059C714 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x14099A948 (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepTryPowerDownDevice @ 0x1403050D0 (PopPepTryPowerDownDevice.c)
 *     PopPepCountReadyActivities @ 0x140307578 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1403075C4 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140307608 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x14030768C (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140307780 (PopPepPromoteActivities.c)
 *     PopPepComponentGetWork @ 0x1403078BC (PopPepComponentGetWork.c)
 *     PopPepCompleteActivity @ 0x140307B40 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x140307C1C (PopPepTriggerActivity.c)
 */

char __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v10; // r12
  unsigned int v11; // r14d
  unsigned int ready; // r15d
  char Work; // bp
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v6 = (int)a3;
  v7 = a4;
  v19 = 0;
  v10 = PopPepLockActivityLink(a1, a2, a3, a4, &v19);
  if ( (_DWORD)v6 == 6 || (v11 = dword_140004FAC[34 * v6], (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( v7 != 6 )
    PopPepTriggerActivity(a1, a2, v7, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(a1, ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
