/*
 * XREFs of ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C00168C0
 * Callers:
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0016884 (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1C01DCB20 (-DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(PERESOURCE *this)
{
  struct _ERESOURCE *v2; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry1(1LL, 3056LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          3056LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !this[23] )
    WdLogSingleEntry5(0LL, 275LL, 17LL, this, 0LL, 0LL);
  v2 = this[24];
  this[24] = 0LL;
  this[23] = v2;
}
