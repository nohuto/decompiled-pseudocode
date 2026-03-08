/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C001595C
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C01D79D0 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  _BYTE v11[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+68h] [rbp-20h]
  int i; // [rsp+70h] [rbp-18h]

  v3 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v6 = 0LL;
  for ( i = 2; (unsigned int)v6 < *((_DWORD *)this + v3 + 246); v6 = (unsigned int)(v6 + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 107] + v6) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)v6;
      v7[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1240) )
      {
        WdLogSingleEntry1(1LL, 873LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              0,
              2,
              -1,
              (__int64)L"m_PrimaryDescription[VidPnSourceId].PrimaryCount",
              873LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      *((_QWORD *)this[v3 + 107] + v6) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1240);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
