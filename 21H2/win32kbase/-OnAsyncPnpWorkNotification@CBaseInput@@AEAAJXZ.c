/*
 * XREFs of ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C01DC420
 * Callers:
 *     <none>
 * Callees:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 */

__int64 __fastcall CBaseInput::OnAsyncPnpWorkNotification(char **this)
{
  return RIMOnAsyncPnpWorkNotification(this[1]);
}
