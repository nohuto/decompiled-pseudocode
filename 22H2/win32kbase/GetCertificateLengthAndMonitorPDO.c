/*
 * XREFs of GetCertificateLengthAndMonitorPDO @ 0x1C014027C
 * Callers:
 *     NtGdiGetCertificate @ 0x1C0140720 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C0140880 (NtGdiGetCertificateSize.c)
 * Callees:
 *     CallMonitor @ 0x1C00C08B0 (CallMonitor.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C0147BA8 (DrvPVPGetFirstActiveMonitor.c)
 */

__int64 __fastcall GetCertificateLengthAndMonitorPDO(struct _UNICODE_STRING *a1, int a2, void *a3, _QWORD *a4)
{
  __int64 result; // rax
  int v7; // edi
  int InputBuffer; // [rsp+58h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = DrvPVPGetFirstActiveMonitor(a1);
  if ( (int)result >= 0 )
  {
    v7 = CallMonitor(0LL, 0x232483u, &InputBuffer, 4u, a3, 4u);
    if ( v7 >= 0 )
    {
      if ( a4 )
        *a4 = 0LL;
      else
        ObfDereferenceObject(0LL);
      return 0LL;
    }
    else
    {
      ObfDereferenceObject(0LL);
      return (unsigned int)v7;
    }
  }
  return result;
}
