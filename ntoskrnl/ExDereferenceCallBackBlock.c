/*
 * XREFs of ExDereferenceCallBackBlock @ 0x14034C120
 * Callers:
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ExCallCallBack @ 0x1407D2DA4 (ExCallCallBack.c)
 *     PspCallProcessNotifyRoutines @ 0x1407D2E14 (PspCallProcessNotifyRoutines.c)
 *     PsCallImageNotifyRoutines @ 0x1407D30D0 (PsCallImageNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1407D3260 (PspCallThreadNotifyRoutines.c)
 *     DbgkLkmdRegisterCallback @ 0x140819220 (DbgkLkmdRegisterCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140819698 (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkLkmdUnregisterCallback @ 0x140937D20 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdFireCallbacks @ 0x140937DC4 (DbgkpLkmdFireCallbacks.c)
 *     PoUnregisterCoalescingCallback @ 0x140983E40 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B2C70 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2D60 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ExDereferenceCallBackBlock(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  if ( ((unsigned __int64)a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ExReleaseRundownProtection_0(a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( ((unsigned __int64)a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
