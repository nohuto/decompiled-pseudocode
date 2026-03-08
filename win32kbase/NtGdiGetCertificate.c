/*
 * XREFs of NtGdiGetCertificate @ 0x1C01893C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00CE990 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     CallMonitor @ 0x1C017EE60 (CallMonitor.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C018873C (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificate(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  void *Pool2; // rsi
  __int64 v10; // rdx
  int CertificateLengthAndMonitorPDO; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // rcx
  SIZE_T Length; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    LODWORD(Length) = 0;
    Object[0] = 0LL;
    Pool2 = 0LL;
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, InputBuffer, &Length, Object);
    if ( CertificateLengthAndMonitorPDO >= 0 )
    {
      if ( a4 >= (unsigned int)Length )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, (unsigned int)Length, 1297108807LL);
        Object[1] = Pool2;
        if ( Pool2 )
        {
          CertificateLengthAndMonitorPDO = CallMonitor(
                                             (PDEVICE_OBJECT)Object[0],
                                             0x232487u,
                                             &InputBuffer,
                                             4u,
                                             Pool2,
                                             Length);
          if ( CertificateLengthAndMonitorPDO >= 0 )
          {
            ProbeForWrite(a3, (unsigned int)Length, 1u);
            memmove((void *)a3, Pool2, (unsigned int)Length);
          }
        }
        else
        {
          CertificateLengthAndMonitorPDO = -1073741801;
        }
      }
      else
      {
        CertificateLengthAndMonitorPDO = -1071774450;
      }
    }
    v14 = Object[0];
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x4D504F47u);
    UserSessionSwitchLeaveCrit((__int64)v14, v10, v12, v13);
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v8;
  }
  return result;
}
