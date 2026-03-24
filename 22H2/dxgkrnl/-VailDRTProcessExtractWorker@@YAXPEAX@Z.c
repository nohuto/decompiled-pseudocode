/*
 * XREFs of ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C02B6280
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028AD80 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall VailDRTProcessExtractWorker(unsigned int *a1)
{
  struct _KPROCESS *v1; // rdx
  unsigned int RemoteBundleObject; // eax
  bool v4; // zf
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+50h] [rbp-18h]

  v1 = (struct _KPROCESS *)*((_QWORD *)a1 + 24);
  v6 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v1);
  RemoteBundleObject = DxgkExtractRemoteBundleObject(a1[12], a1[13], (void **)a1 + 7, 0LL);
  v4 = v6 == 0;
  a1[56] = RemoteBundleObject;
  if ( !v4 )
    KeUnstackDetachProcess(&ApcState);
  KeSetEvent((PRKEVENT)(a1 + 50), 0, 0);
}
