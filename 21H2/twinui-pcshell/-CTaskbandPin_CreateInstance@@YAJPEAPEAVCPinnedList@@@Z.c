/*
 * XREFs of ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x180150100
 * Callers:
 *     ??R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ @ 0x1801367F4 (--R_lambda_1852a6ec92915f877811d72e8734d237_@@QEBAXXZ.c)
 *     ??R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ @ 0x180136BB0 (--R_lambda_5284c52766b4bd9adb216c46a73dea2b_@@QEBAXXZ.c)
 *     ??R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ @ 0x180136CC8 (--R_lambda_7573529bdd9445da64c4582e06079e73_@@QEBAXXZ.c)
 *     _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator() @ 0x180136F68 (_lambda_d2b9f9141b354d7aab2c271df0a099ad_--operator().c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013B080 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CTaskbandPin@@QEAA@XZ @ 0x18014FF2C (--0CTaskbandPin@@QEAA@XZ.c)
 */

__int64 __fastcall CTaskbandPin_CreateInstance(struct CPinnedList **a1)
{
  CTaskbandPin *v2; // rax
  struct CPinnedList *v3; // rdx

  v2 = (CTaskbandPin *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  if ( v2 )
    v3 = CTaskbandPin::CTaskbandPin(v2);
  *a1 = v3;
  return v3 == 0LL ? 0x8007000E : 0;
}
