/*
 * XREFs of ??0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z @ 0x1C0209364
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

CSaveRestoreCheckPoint *__fastcall CSaveRestoreCheckPoint::CSaveRestoreCheckPoint(
        CSaveRestoreCheckPoint *this,
        struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 TargetInfoAsUlong_low; // rdx
  __int128 *Prop; // rax
  __int128 v7; // xmm0

  v2 = *(_QWORD *)a2;
  TargetInfoAsUlong_low = LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  *(_QWORD *)this = v2;
  Prop = (__int128 *)GetProp((__int64)a2, TargetInfoAsUlong_low, 1u);
  if ( Prop )
    v7 = *Prop;
  else
    v7 = 0LL;
  *(_OWORD *)((char *)this + 8) = v7;
  return this;
}
