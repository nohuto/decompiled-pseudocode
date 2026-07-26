/*
 * XREFs of ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C01247AC
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0125B6C (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0102B24 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01099E8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C0109AE8 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds<long (*)(_GUID const &)>(
        int a1,
        __int64 a2,
        __int64 (__fastcall *a3)(GUID *))
{
  unsigned int v4; // eax
  unsigned int SubkeyName; // edi
  ULONG v6; // esi
  ULONG i; // edx
  UNICODE_STRING *v8; // rbx
  PCUNICODE_STRING GuidString; // [rsp+20h] [rbp-E0h] BYREF
  KRegKey v11; // [rsp+28h] [rbp-D8h] BYREF
  GUID Guid; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t v13[256]; // [rsp+40h] [rbp-C0h] BYREF

  v11.m_ptr = 0LL;
  netsetupBuildStorePath(a1, System, v13);
  v4 = KRegKey::Open(&v11, 8u, v13, 0LL);
  SubkeyName = v4;
  if ( v4 == -1073741772 )
  {
    SubkeyName = 0;
  }
  else if ( !v4 )
  {
    v6 = 0;
    GuidString = 0LL;
    for ( i = 0; ; i = v6 )
    {
      SubkeyName = KRegKey::GetSubkeyName(&v11.m_ptr, i, (void **)&GuidString);
      if ( SubkeyName == -2147483622 )
        break;
      if ( SubkeyName )
        goto LABEL_13;
      v8 = (UNICODE_STRING *)GuidString;
      Guid = 0LL;
      if ( !RtlGUIDFromString(GuidString, &Guid) )
      {
        SubkeyName = a3(&Guid);
        if ( SubkeyName )
          goto LABEL_14;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x7274534Bu);
      ++v6;
      GuidString = 0LL;
    }
    SubkeyName = 0;
LABEL_13:
    v8 = (UNICODE_STRING *)GuidString;
LABEL_14:
    if ( v8 )
      ExFreePoolWithTag(v8, 0x7274534Bu);
  }
  if ( v11.m_ptr )
  {
    GuidString = (PCUNICODE_STRING)ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&GuidString, &v11);
  }
  return SubkeyName;
}
