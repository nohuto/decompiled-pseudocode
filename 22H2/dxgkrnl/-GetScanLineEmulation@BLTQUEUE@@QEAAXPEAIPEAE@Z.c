/*
 * XREFs of ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C03D1ACC
 * Callers:
 *     DxgkGetScanLine @ 0x1C02D1910 (DxgkGetScanLine.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C034C4BC (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::GetScanLineEmulation(struct _KTHREAD **this, unsigned int *a2, unsigned __int8 *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // r8
  __int64 v9; // r9
  LONGLONG v10; // rax
  char v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 51, 0);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v13 = 2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (__int64)this[58];
  v8 = 0;
  if ( v7 )
  {
    v9 = *((unsigned int *)this + 120);
    v10 = v9 * (PerformanceCounter.QuadPart - (__int64)this[55]) / v7;
    if ( ((_DWORD)this[119] & 2) != 0 )
    {
      if ( (unsigned int)v10 >= (unsigned int)v9 )
        LODWORD(v10) = *((_DWORD *)this + 120);
    }
    else
    {
      LODWORD(v10) = (unsigned int)v10 % (unsigned int)v9;
    }
    if ( (unsigned int)v10 < *((_DWORD *)this + 118) || (unsigned int)v10 > *((_DWORD *)this + 119) )
      v8 = 1;
    *a3 = v8;
    *a2 = v10;
  }
  else
  {
    *a2 = 0;
    *a3 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
