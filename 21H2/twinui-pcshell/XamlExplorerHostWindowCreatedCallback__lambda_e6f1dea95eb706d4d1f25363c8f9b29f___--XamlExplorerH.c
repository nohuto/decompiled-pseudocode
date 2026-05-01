/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x180358AB8
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___ @ 0x180358330 (MakeXamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180358970 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 */

_QWORD *__fastcall XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)a1);
  *a1 = off_1806490E0;
  a1[4] = off_180649130;
  a1[6] = 0LL;
  if ( a1 + 6 != a2 )
  {
    a1[6] = *a2;
    *a2 = 0LL;
  }
  a1[7] = a2[1];
  return a1;
}
