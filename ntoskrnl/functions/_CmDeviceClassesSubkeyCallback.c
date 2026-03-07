__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  __int64 v7; // rcx
  _WORD *v8; // r15
  int v9; // eax
  char v10; // r12
  wchar_t *v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  wchar_t *v16; // rax
  size_t v17; // rdx
  wchar_t *v18; // rsi
  __int64 v19; // r8
  unsigned int v20; // esi
  unsigned __int8 (__fastcall *v21)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v22; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  _WORD *Pool2; // rax
  int v29; // [rsp+30h] [rbp-50h] BYREF
  unsigned int KeyHandle[3]; // [rsp+34h] [rbp-4Ch] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchRemaining; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v36; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&KeyHandle[1] = 0LL;
  v29 = 0;
  v7 = *a4;
  v8 = 0LL;
  v9 = *a4;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v10 = 0;
  v11 = 0LL;
  v36 = 0;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v12 = v9 - 1;
  if ( v12 )
  {
    v13 = -1LL;
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a3[v14] );
      if ( !v14 || *a3 != 35 )
        return 0LL;
    }
    if ( (unsigned int)v7 >= 3 && ((_DWORD)v7 != 3 || !*((_BYTE *)a4 + 1428)) )
      goto LABEL_10;
  }
  else
  {
    v13 = -1LL;
    v24 = -1LL;
    do
      ++v24;
    while ( a3[v24] );
    if ( v24 != 38 || *a3 != 123 )
      return 0LL;
  }
  v25 = 0LL;
  if ( a1 )
    v25 = *(_QWORD *)(a1 + 224);
  if ( (int)SysCtxRegOpenKey(v25, a2, (__int64)a3, 8u, 0x20019u, (__int64)&KeyHandle[1]) < 0 )
    goto LABEL_36;
LABEL_10:
  v15 = *a4;
  if ( *a4 >= 3 )
  {
    if ( v15 == 3 )
    {
      do
        ++v13;
      while ( a3[v13] );
      if ( v13 > 1 && *a3 == 35 )
        v10 = 1;
    }
    goto LABEL_16;
  }
  if ( v15 != 2 || !*((_WORD *)a4 + 506) )
    goto LABEL_16;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    KeyHandle[0] = 400;
    if ( (int)RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], L"DeviceInstance", &v29, Pool2, KeyHandle) < 0
      || v29 != 1
      || KeyHandle[0] < 2
      || (v8[199] = 0, RtlInitUnicodeStringEx(&String1, v8) < 0)
      || RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) < 0
      || !RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
LABEL_61:
      ExFreePoolWithTag(v8, 0);
      goto LABEL_36;
    }
LABEL_16:
    if ( *a4 >= 2 )
    {
      v16 = (wchar_t *)ExAllocatePool2(256LL, 1008LL, 1380994640LL);
      v11 = v16;
      if ( !v16 )
        goto LABEL_35;
      v17 = 504LL;
      if ( *((_WORD *)a4 + 2) )
      {
        if ( RtlStringCchCopyExW(v16, 0x1F8uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
          goto LABEL_34;
        v18 = ppszDestEnd;
        v17 = pcchRemaining - 1;
        *ppszDestEnd = 0;
      }
      else
      {
        v18 = v16;
      }
      if ( *a4 == 2 || v10 == 1 )
      {
        if ( RtlStringCchCopyW(v18, v17, a3) < 0 )
          goto LABEL_34;
        if ( v10 == 1 )
          *v18 = 92;
      }
    }
    if ( *a4 < 3 )
    {
      v26 = ExAllocatePool2(256LL, 1464LL, 1380994640LL);
      v27 = v26;
      if ( v26 )
      {
        *(_DWORD *)v26 = *a4 + 1;
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v26 + 4), 0x1F8uLL, v11, 0LL, 0LL, 0x900u);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v27 + 1012), 0xC8uLL, (NTSTRSAFE_PCWSTR)a4 + 506, 0LL, 0LL, 0x900u);
        *(_QWORD *)(v27 + 1416) = *((_QWORD *)a4 + 177);
        *(_DWORD *)(v27 + 1424) = a4[356];
        *(_BYTE *)(v27 + 1428) = *((_BYTE *)a4 + 1428);
        *(_QWORD *)(v27 + 1432) = *((_QWORD *)a4 + 179);
        *(_QWORD *)(v27 + 1440) = *((_QWORD *)a4 + 180);
        *(_QWORD *)(v27 + 1448) = *((_QWORD *)a4 + 181);
        *(_DWORD *)(v27 + 1456) = a4[364];
        *(_DWORD *)(v27 + 1460) = a4[365];
        PnpCtxRegEnumKeyWithCallback(a1, *(_QWORD *)&KeyHandle[1], &CmDeviceClassesSubkeyCallback, v27);
        *((_QWORD *)a4 + 177) = *(_QWORD *)(v27 + 1416);
        a4[356] = *(_DWORD *)(v27 + 1424);
        a4[365] = *(_DWORD *)(v27 + 1460);
        *((_QWORD *)a4 + 181) = *(_QWORD *)(v27 + 1448);
        a4[364] = *(_DWORD *)(v27 + 1456);
        ExFreePoolWithTag((PVOID)v27, 0);
      }
    }
    else
    {
      *(_QWORD *)v11 = *(_QWORD *)L"\\\\?\\";
      if ( CmValidateDeviceInterfaceName(v7, (__int64)v11) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v11) >= 0 )
      {
        v20 = DestinationString.MaximumLength >> 1;
        if ( !*((_BYTE *)a4 + 1428) || CmIsDeviceInterfaceEnabled(a1, v11, v19, (__int64)&v36) >= 0 && v36 )
        {
          v21 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 179);
          if ( !v21 || v21(a1, v11, 3LL, *((_QWORD *)a4 + 180)) )
          {
            a4[365] += v20;
            v22 = a4[364];
            if ( v22 > v20 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 181), v22, v11, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 181) += 2LL * v20;
              a4[364] -= v20;
            }
          }
        }
      }
    }
    if ( !v11 )
    {
LABEL_35:
      if ( !v8 )
        goto LABEL_36;
      goto LABEL_61;
    }
LABEL_34:
    ExFreePoolWithTag(v11, 0);
    goto LABEL_35;
  }
LABEL_36:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return 0LL;
}
