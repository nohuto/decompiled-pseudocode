/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C0189520
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0188604 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C01887D8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  unsigned __int8 *Pool2; // rsi
  int CertificateSize; // edi
  SIZE_T Length; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  unsigned __int8 *v14; // [rsp+40h] [rbp-28h]

  v8 = 0;
  LODWORD(Length) = 0;
  Pool2 = 0LL;
  v13 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  CertificateSize = COPM::GetCertificateSize(*(void ***)(v13 + 3824), a1, a2, (unsigned int *)&Length);
  if ( CertificateSize >= 0 )
  {
    if ( a4 >= (unsigned int)Length )
    {
      Pool2 = (unsigned __int8 *)ExAllocatePool2(258LL, (unsigned int)Length, 1297108807LL);
      v14 = Pool2;
      if ( Pool2 )
      {
        CertificateSize = COPM::GetCertificate(*(void ***)(v13 + 3824), a1, a2, Pool2, Length);
        if ( CertificateSize >= 0 )
        {
          ProbeForWrite(a3, (unsigned int)Length, 1u);
          memmove(a3, Pool2, (unsigned int)Length);
        }
      }
      else
      {
        CertificateSize = -1073741801;
      }
    }
    else
    {
      CertificateSize = -1071774450;
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4D504F47u);
  if ( CertificateSize < 0 )
    return (unsigned int)CertificateSize;
  return v8;
}
