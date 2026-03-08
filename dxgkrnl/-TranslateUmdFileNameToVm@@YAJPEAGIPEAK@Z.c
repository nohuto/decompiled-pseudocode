/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02CB87C
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C02CB0CC (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02CB98C (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0305F44 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03856B8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003F8DC (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C02CAAFC (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVm(size_t *a1, unsigned int a2, unsigned int *a3)
{
  size_t *v6; // rax
  const unsigned __int16 *v7; // rdx
  signed int UmdFileName; // ebx
  __int64 v9; // rax
  wchar_t String[264]; // [rsp+30h] [rbp-458h] BYREF
  unsigned __int16 v12[4]; // [rsp+240h] [rbp-248h] BYREF
  size_t v13[65]; // [rsp+248h] [rbp-240h] BYREF

  RtlStringCbCopyW(String, 0x104uLL, a1);
  _wcslwr(String);
  v6 = (size_t *)wcsstr(String, L"\\filerepository\\");
  UmdFileName = 0;
  if ( !v6 )
    return (unsigned int)UmdFileName;
  UmdFileName = GenerateUmdFileName(v12, v7, v6);
  if ( UmdFileName < 0 )
    goto LABEL_10;
  UmdFileName = RtlStringCbCopyW((unsigned __int16 *)a1, 2LL * a2, v13);
  if ( UmdFileName >= 0 )
  {
    if ( !a3 )
      return (unsigned int)UmdFileName;
    goto LABEL_7;
  }
  if ( !a3 )
  {
LABEL_10:
    WdLogSingleEntry1(3LL, UmdFileName);
    return (unsigned int)UmdFileName;
  }
  UmdFileName = -2147483643;
LABEL_7:
  v9 = -1LL;
  do
    ++v9;
  while ( v12[v9] );
  *a3 = 2 * v9 + 2;
  if ( UmdFileName < 0 )
    goto LABEL_10;
  return (unsigned int)UmdFileName;
}
