char __fastcall PiPnpRtlServiceFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // esi
  char v8; // bl
  PCUNICODE_STRING v9; // rax
  int DeviceRegProp; // eax
  __int64 Pool2; // rbx
  void *v12; // rcx
  unsigned int v13; // ecx
  int v14; // r15d
  __int64 *i; // r14
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  int ObjectProperty; // eax
  __int64 v19; // rbx
  void *v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  const WCHAR *v24; // rsi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  int v28; // [rsp+40h] [rbp-99h]
  _BYTE v29[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-75h] BYREF
  int v31; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-6Dh] BYREF
  int v33; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-65h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v36[40]; // [rsp+90h] [rbp-49h] BYREF

  v34 = a3;
  v5 = a3;
  memset(v36, 0, 0x4EuLL);
  v8 = 0;
  v31 = 0;
  v33 = 0;
  DestinationString = 0LL;
  v29[0] = 0;
  v30 = 0;
  v32 = 0;
  if ( !*(_BYTE *)(a4 + 8) || CmIsDevicePresent(a1, a2, v29) >= 0 && v29[0] )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v9->Length >= 2u && *v9->Buffer )
    {
      while ( 1 )
      {
        v30 = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          a1,
                          (__int64)a2,
                          0LL,
                          5,
                          (__int64)&v31,
                          *(_QWORD *)(a4 + 16),
                          (__int64)&v30,
                          0);
        if ( !DeviceRegProp && v30 < 2 )
          break;
        if ( DeviceRegProp != -1073741789 )
        {
          if ( !DeviceRegProp )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                goto LABEL_52;
            }
          }
          break;
        }
        if ( v30 < 2 )
          break;
        Pool2 = ExAllocatePool2(256LL, v30, 1198550608LL);
        if ( !Pool2 )
          break;
        v12 = *(void **)(a4 + 16);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        v13 = v30;
        *(_QWORD *)(a4 + 16) = Pool2;
        *(_DWORD *)(a4 + 24) = v13;
      }
      v14 = 0;
      for ( i = &qword_14000A4B8; *(_DWORD *)i != 2 || v36[0]; i += 2 )
      {
        while ( 1 )
        {
LABEL_25:
          v16 = *(unsigned int *)i;
          v17 = v36;
          v28 = *(_DWORD *)(a4 + 24);
          if ( (_DWORD)v16 == 1 )
            v17 = a2;
          v30 = *(_DWORD *)(a4 + 24);
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             (__int64)v17,
                             v16,
                             0LL,
                             0LL,
                             *(i - 1),
                             (__int64)&v33,
                             *(_QWORD *)(a4 + 16),
                             v28,
                             (__int64)&v32,
                             0);
          v30 = v32;
          if ( !ObjectProperty && v32 < 2 )
          {
LABEL_47:
            v8 = 0;
            goto LABEL_48;
          }
          if ( ObjectProperty != -1073741789 )
            break;
          if ( v32 < 2 )
            goto LABEL_47;
          v19 = ExAllocatePool2(256LL, v32, 1198550608LL);
          if ( !v19 )
            goto LABEL_47;
          v20 = *(void **)(a4 + 16);
          if ( v20 )
            ExFreePoolWithTag(v20, 0);
          v21 = v30;
          *(_QWORD *)(a4 + 16) = v19;
          *(_DWORD *)(a4 + 24) = v21;
        }
        v8 = 0;
        if ( ObjectProperty >= 0 && v33 == 8210 )
        {
          v22 = *(_DWORD *)(a4 + 24);
          if ( v22 > 2 )
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v22 >> 1) - 2) = 0;
          v23 = *(_DWORD *)(a4 + 24);
          if ( v23 > 4 )
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v23 >> 1) - 4) = 0;
          v24 = *(const WCHAR **)(a4 + 16);
          if ( *v24 )
          {
            while ( RtlInitUnicodeStringEx(&DestinationString, v24) < 0
                 || !RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
            {
              v25 = -1LL;
              do
                ++v25;
              while ( v24[v25] );
              v24 += v25 + 1;
              if ( !*v24 )
                goto LABEL_47;
            }
            v5 = v34;
            goto LABEL_52;
          }
        }
LABEL_48:
        if ( (unsigned int)++v14 >= 4 )
          return v8;
      }
      v30 = 78;
      if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 9, (__int64)&v31, (__int64)v36, (__int64)&v30, 0) >= 0
        && v31 == 1
        && v30 >= 2 )
      {
        v36[38] = 0;
        goto LABEL_25;
      }
      return 0;
    }
    else
    {
LABEL_52:
      v8 = 1;
      v26 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 32);
      if ( v26 )
        return v26(a1, a2, v5, *(_QWORD *)(a4 + 40));
    }
  }
  return v8;
}
