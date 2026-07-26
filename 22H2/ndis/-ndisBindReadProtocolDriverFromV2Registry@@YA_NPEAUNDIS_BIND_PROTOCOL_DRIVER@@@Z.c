/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0123ECC
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0101C34 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0032120 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0102B24 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0108B80 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x1C0123A3C (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  char v4; // r14
  __int64 v5; // r8
  NTSTATUS v6; // ecx
  Rtl::KString *value; // rdx
  const wchar_t *v8; // rax
  char v9; // bl
  __int64 v10; // r8
  __int64 v11; // rdx
  signed int v12; // ecx
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE KeyHandle_8[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v16[2]; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING v17; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-30h] BYREF
  wchar_t v20[304]; // [rsp+E8h] [rbp-20h] BYREF

  a1->ProtocolBindFlags = 0;
  KeyHandle = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
  v4 = 1;
  *(_OWORD *)KeyHandle_8 = 0LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v5 = (0x7FFF - v2) & -(__int64)(v2 != 0);
  v6 = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
  {
    KeyHandle_8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup";
    LOWORD(KeyHandle_8[0]) = 2 * v5;
    WORD1(KeyHandle_8[0]) = 2 * v5 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)KeyHandle_8;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  }
  if ( v6 < 0
    || (value = a1->Name.__ptr_.__value_,
        v19 = 0LL,
        (int)KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___(
               &KeyHandle,
               &value->_UNICODE_STRING,
               &v19) < 0)
    || (int)RtlStringCchPrintfW(
              v20,
              0x12CuLL,
              (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%"
                          "04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\Kernel",
              (unsigned int)v19,
              WORD2(v19),
              WORD3(v19),
              BYTE8(v19),
              BYTE9(v19),
              BYTE10(v19),
              BYTE11(v19),
              BYTE12(v19),
              BYTE13(v19),
              BYTE14(v19),
              HIBYTE(v19)) < 0 )
  {
    v4 = 0;
    goto LABEL_27;
  }
  KeyHandle_8[0] = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)KeyHandle_8, 1u, v20, 0LL) < 0 )
    goto LABEL_23;
  v17 = 0LL;
  v8 = L"NoStartAtBoot";
  v9 = 0;
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v10;
  }
  while ( v10 );
  v11 = (0x7FFF - v10) & -(__int64)(v10 != 0);
  v12 = v10 == 0 ? 0xC000000D : 0;
  if ( v10 )
  {
    v17.Buffer = L"NoStartAtBoot";
    v17.Length = 2 * v11;
    v17.MaximumLength = 2 * v11 + 2;
    v16[0] = 0;
    if ( KRegKey::QueryValueUlong((KRegKey *)KeyHandle_8, &v17, v16) != -1073741772 && v16[0] )
    {
      if ( v16[0] != 1 )
      {
        v12 = -1073739509;
        goto LABEL_20;
      }
      v9 = 1;
    }
    v12 = 0;
  }
LABEL_20:
  if ( v12 >= 0 )
  {
    if ( !v9 )
      a1->ProtocolBindFlags |= 1u;
    goto LABEL_24;
  }
LABEL_23:
  v4 = 0;
LABEL_24:
  if ( KeyHandle_8[0] )
  {
    *(_QWORD *)v16 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))v16, KeyHandle_8);
  }
LABEL_27:
  if ( KeyHandle )
  {
    KeyHandle_8[0] = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(
      (__int64 (__fastcall **)(_QWORD))KeyHandle_8,
      &KeyHandle);
  }
  return v4;
}
