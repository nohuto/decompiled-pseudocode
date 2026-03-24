/*
 * XREFs of ??1DXGSHAREDVMOBJECT@@AEAA@XZ @ 0x1C0040B80
 * Callers:
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023B42C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSHAREDVMOBJECT::~DXGSHAREDVMOBJECT(DXGSHAREDVMOBJECT *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 160LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 4) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 162LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
