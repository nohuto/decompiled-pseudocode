/*
 * XREFs of ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00089F8
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C00DCAA8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJI@Z @ 0x1C0291360 (-Initialize@DXGKEYEDMUTEX@@QEAAJI@Z.c)
 * Callees:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AllocHandle(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax

  if ( *(struct _KTHREAD **)(a1 + 264) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 1100LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return HMGRTABLE::AllocHandle(a1 + 288, a2, a3);
}
