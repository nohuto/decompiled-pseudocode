/*
 * XREFs of ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18031B5C0
 * Callers:
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x18031180C (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 *     ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180313340 (-GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180315720 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18031808C (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x180021778 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z @ 0x18030E558 (--$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180316358 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPendingActivation(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 result; // rax
  __int64 **v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  *a3 = 0LL;
  v11 = (__int64 **)(a1 + 528);
  v12 = 0LL;
  do
  {
    LOBYTE(v4) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v11);
    if ( !v4 )
    {
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const (&)[9]>(&v14, v5);
      return 2147647531LL;
    }
    v8 = v12;
    v9 = (_QWORD *)(v12 + 8);
    if ( !v12 )
      v9 = (_QWORD *)v6;
  }
  while ( v7 != *v9 );
  if ( v12 )
    v6 = v12 + 8;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v6 + 8), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
    &v14,
    (__int64 *)&StringRawBuffer);
  result = 0LL;
  *a3 = v8;
  return result;
}
