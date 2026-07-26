/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C0116F4C
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031780 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0060070 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01099E8 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  signed int v4; // edi
  void *m_ptr; // r9
  HANDLE v6; // rbx
  __int64 v7; // rdx
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  ULONG v11; // esi
  NTSTATUS i; // eax
  UNICODE_STRING *v13; // rbx
  UNICODE_STRING *v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-41h]
  char v17[4]; // [rsp+28h] [rbp-41h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  PCUNICODE_STRING GuidString[2]; // [rsp+38h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  GUID Guid; // [rsp+78h] [rbp+Fh] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Au,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  if ( IsIfBlockAvailable(a2) )
  {
    v4 = 0;
  }
  else
  {
    m_ptr = a1->m_ptr;
    v6 = 0LL;
    KeyHandle = 0LL;
    *(_OWORD *)GuidString = 0LL;
    v7 = 0x7FFFLL;
    v8 = L"NetworkInterface";
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v7;
    }
    while ( v7 );
    v9 = (0x7FFF - v7) & -(__int64)(v7 != 0);
    v4 = v7 == 0 ? 0xC000000D : 0;
    if ( v7 )
    {
      GuidString[1] = (PCUNICODE_STRING)L"NetworkInterface";
      LOWORD(GuidString[0]) = 2 * v9;
      WORD1(GuidString[0]) = 2 * v9 + 2;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)GuidString;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = m_ptr;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
      v6 = KeyHandle;
      v4 = v10;
    }
    if ( v4 >= 0 )
    {
      GuidString[0] = 0LL;
      v11 = 0;
      for ( i = KRegKey::GetSubkeyName(&KeyHandle, 0, (void **)GuidString);
            ;
            i = KRegKey::GetSubkeyName(&KeyHandle, v11, (void **)GuidString) )
      {
        v4 = i;
        if ( i < 0 )
        {
          v14 = (UNICODE_STRING *)GuidString[0];
          if ( !GuidString[0] )
            goto LABEL_24;
          goto LABEL_23;
        }
        v13 = (UNICODE_STRING *)GuidString[0];
        Guid = 0LL;
        if ( RtlGUIDFromString(GuidString[0], &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
          break;
        if ( v13 )
          ExFreePoolWithTag(v13, 0x7274534Bu);
        ++v11;
        GuidString[0] = 0LL;
      }
      v4 = 0;
      *a2 = Guid;
      if ( v13 )
      {
        v14 = v13;
LABEL_23:
        ExFreePoolWithTag(v14, 0x7274534Bu);
      }
LABEL_24:
      if ( KeyHandle )
      {
        GuidString[0] = (PCUNICODE_STRING)ZwClose;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(
          (__int64 (__fastcall **)(_QWORD))GuidString,
          &KeyHandle);
      }
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v17 = v4;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x3Bu,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
          *(_DWORD *)v17);
      }
      if ( v6 )
      {
        GuidString[0] = (PCUNICODE_STRING)ZwClose;
        KeyHandle = v6;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(
          (__int64 (__fastcall **)(_QWORD))GuidString,
          &KeyHandle);
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      v16);
  }
  return (unsigned int)v4;
}
