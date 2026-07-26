/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C0102194
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01012B8 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C010212C (_lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_--operator().c)
 *     _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C0123668 (_lambda_90693e01559ab5daa9d90de50bdb401e_--operator().c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012E1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C0102214 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(wchar_t *a1)
{
  __int64 v2; // rdx
  wchar_t *v3; // rax
  __int64 v4; // rcx
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return Rtl::KString::Initialize(&v6);
  v2 = 0x7FFFLL;
  v3 = a1;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = (0x7FFF - v2) & -(__int64)(v2 != 0);
  if ( v2 )
  {
    v6.Buffer = a1;
    v6.Length = 2 * v4;
    v6.MaximumLength = 2 * v4 + 2;
    return Rtl::KString::Initialize(&v6);
  }
  return 0LL;
}
