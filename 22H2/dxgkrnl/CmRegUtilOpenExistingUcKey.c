/*
 * XREFs of CmRegUtilOpenExistingUcKey @ 0x1C02C5990
 * Callers:
 *     CmRegUtilOpenExistingWstrKey @ 0x1C02C5A04 (CmRegUtilOpenExistingWstrKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmRegUtilOpenExistingUcKey(void *a1, struct _UNICODE_STRING *a2, ACCESS_MASK a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v6; // [rsp+20h] [rbp-38h] BYREF
  void *v7; // [rsp+60h] [rbp+8h] BYREF

  *(&v6.Length + 1) = 0;
  *(&v6.Attributes + 1) = 0;
  v7 = 0LL;
  *a4 = 0LL;
  v6.Length = 48;
  v6.RootDirectory = a1;
  v6.Attributes = 576;
  v6.ObjectName = a2;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&v7, a3, &v6);
  if ( result >= 0 )
    *a4 = v7;
  return result;
}
