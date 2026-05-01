/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801A9320
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ @ 0x1801B2050 (-_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ @ 0x1801B21E0 (-_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ @ 0x180212F30 (-_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7ab9639d2235ac39484be6f8e25fe51c_@@CAXXZ @ 0x1802D2A30 (-_lambda_invoker_cdecl_@_lambda_7ab9639d2235ac39484be6f8e25fe51c_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_b55becccc8b67eee49088d4c1be9735f_@@CAXXZ @ 0x1802D2A80 (-_lambda_invoker_cdecl_@_lambda_b55becccc8b67eee49088d4c1be9735f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ @ 0x18031DC00 (-_lambda_invoker_cdecl_@_lambda_975e4d64c8b5daac57efc1784b54d4a5_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ @ 0x18033AD10 (-_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ @ 0x1803C68E0 (-_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ @ 0x180461F30 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ @ 0x1804DB210 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801A8F98 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
