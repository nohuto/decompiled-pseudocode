/*
 * XREFs of ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C01236DC
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1C0125770 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C01029D0 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C0102EE8 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0123498 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0123884 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadStringArray(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  struct KRegKey v9; // [rsp+68h] [rbp+20h] BYREF

  v9.m_ptr = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, &v9);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
    {
      Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, 0LL);
      v6 = 0;
    }
  }
  else if ( !v5 )
  {
    v8 = 0LL;
    v6 = KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
           &v9.m_ptr,
           &v8,
           a3,
           a3);
  }
  if ( v9.m_ptr )
  {
    *(_QWORD *)&v8.Length = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v8, &v9);
  }
  return v6;
}
