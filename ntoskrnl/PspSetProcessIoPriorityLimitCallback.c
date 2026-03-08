/*
 * XREFs of PspSetProcessIoPriorityLimitCallback @ 0x1407DD170
 * Callers:
 *     PspSetProcessBackgroundCountCallback @ 0x1407DD150 (PspSetProcessBackgroundCountCallback.c)
 * Callees:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C (PspNotifyProcessEffectiveIoLimitChanged.c)
 */

__int64 __fastcall PspSetProcessIoPriorityLimitCallback(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( (*(_DWORD *)(a1 + 1120) & 1) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 1296);
    v3 = *a2;
    if ( (_DWORD)v3 != *(_DWORD *)(v2 + 1068) )
      PspNotifyProcessEffectiveIoLimitChanged(a1, v3, (unsigned int)v3 < *(_DWORD *)(v2 + 1068));
  }
  return 0LL;
}
