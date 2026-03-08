/*
 * XREFs of ??1?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B0A98
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC400 (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<DataProviderManager>::~ComPtr<DataProviderManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)CMILRefCountBaseT<IUnknown>::InternalRelease(result);
  }
  return result;
}
