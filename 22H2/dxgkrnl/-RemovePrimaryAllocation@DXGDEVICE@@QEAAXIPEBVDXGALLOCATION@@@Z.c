/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C001975C
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C015F764 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int i; // [rsp+30h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v8 = 0LL;
  for ( i = 2; (unsigned int)v8 < *((_DWORD *)this + v3 + 238); v8 = (unsigned int)(v8 + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 103] + v8) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v9[3] = a3;
      v9[4] = (unsigned int)v8;
      v9[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1208) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v10 + 24) = 868LL;
        WdLogEvent5_WdAssertion(v10);
      }
      *((_QWORD *)this[v3 + 103] + v8) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1208);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
