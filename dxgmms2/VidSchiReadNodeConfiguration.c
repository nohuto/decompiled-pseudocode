__int64 __fastcall VidSchiReadNodeConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  const wchar_t *v7; // rcx
  NTSTATUS v8; // eax
  __int64 v10; // rax
  _DWORD *v11; // rdi
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rcx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h]

  v3 = *(_QWORD *)(a1 + 16);
  KeyHandle = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  v5 = DpiOpenPnpRegistryKey(*(_QWORD *)(v3 + 216));
  if ( v5 >= 0 )
  {
    v6 = 0x7FFFLL;
    v7 = L"HwQueuedRenderPacketGroupLimitPerNode";
    while ( *v7 )
    {
      ++v7;
      if ( !--v6 )
        goto LABEL_7;
    }
    ValueName.Buffer = L"HwQueuedRenderPacketGroupLimitPerNode";
    ValueName.Length = 2 * (0x7FFF - v6);
    ValueName.MaximumLength = ValueName.Length + 2;
LABEL_7:
    v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v8 == -2147483643 || v8 == -1073741789 )
    {
      v10 = 4LL * ResultLength;
      if ( !is_mul_ok(ResultLength, 4uLL) )
        v10 = -1LL;
      v11 = (_DWORD *)operator new[](v10, 0x31616956u, 256LL);
      if ( v11 )
      {
        v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v11, ResultLength, &ResultLength);
        if ( v5 >= 0 )
        {
          if ( v11[1] != 3
            || (v12 = (unsigned int)v11[2], (v12 & 3) != 0)
            || v12 > 4 * (unsigned __int64)*(unsigned int *)(a1 + 80) )
          {
            v5 = -1073741811;
          }
          else
          {
            v13 = 0;
            if ( (v12 & 0xFFFFFFFC) != 0 )
            {
              do
              {
                v14 = v13++;
                *(_DWORD *)(a2 + 4 * v14) = _byteswap_ulong(v11[v14 + 3]);
              }
              while ( v13 < v11[2] >> 2 );
            }
          }
        }
        operator delete(v11);
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
