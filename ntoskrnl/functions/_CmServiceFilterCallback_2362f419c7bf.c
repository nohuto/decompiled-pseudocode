char __fastcall CmServiceFilterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // bl
  const WCHAR *v8; // rdx
  int DeviceRegProp; // ebx
  unsigned int v10; // eax
  void *v11; // rcx
  __int64 Pool2; // rax
  int v13; // esi
  int *v14; // rax
  int v15; // r13d
  unsigned int v16; // r12d
  int *v17; // r15
  unsigned int v18; // eax
  int InstallerClassRegProp; // eax
  void *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  const WCHAR *v24; // r14
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64, __int64, _QWORD); // rax
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h]
  unsigned int v31; // [rsp+4Ch] [rbp-B4h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  _DWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v35[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v36; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v39[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v40; // [rsp+ECh] [rbp-14h]

  v31 = a3;
  v33 = a2;
  v32 = a1;
  v28 = 0;
  v29 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v8 = *(const WCHAR **)a4;
    if ( *(_QWORD *)a4 && *v8 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
        return v7;
      while ( 1 )
      {
        v28 = *(_DWORD *)(a4 + 16);
        DeviceRegProp = CmGetDeviceRegProp(v6, v5, 0LL, 5, (__int64)&v29, *(_QWORD *)(a4 + 8), (__int64)&v28, 0);
        v10 = v28;
        if ( !DeviceRegProp && v28 < 2 )
        {
LABEL_13:
          v13 = -1073741811;
          goto LABEL_18;
        }
        if ( DeviceRegProp != -1073741789 )
          break;
        if ( v28 < 2 )
          goto LABEL_13;
        v11 = *(void **)(a4 + 8);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0);
          v10 = v28;
        }
        Pool2 = ExAllocatePool2(256LL, v10, 1380994640LL);
        *(_QWORD *)(a4 + 8) = Pool2;
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 16) = 0;
          v13 = -1073741801;
          goto LABEL_18;
        }
        *(_DWORD *)(a4 + 16) = v28;
      }
      v13 = DeviceRegProp;
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0)
        || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      {
LABEL_18:
        v14 = v34;
        v34[0] = 1;
        v36 = v34;
        v34[1] = 2;
        v30 = 0;
        v35[0] = 18;
        v35[1] = 19;
        while ( 1 )
        {
          v15 = *v14;
          if ( *v14 == 2 )
          {
            v28 = 78;
            v13 = CmGetDeviceRegProp(v6, v5, 0LL, 9, (__int64)&v29, (__int64)v39, (__int64)&v28, 0);
            v7 = 0;
            if ( v13 < 0 || v29 != 1 || v28 < 2 )
              return v7;
            v40 = 0;
          }
          v16 = 0;
          v17 = v35;
          do
          {
            while ( 1 )
            {
              v18 = *(_DWORD *)(a4 + 16);
              v28 = v18;
              if ( v15 == 1 )
              {
                InstallerClassRegProp = CmGetDeviceRegProp(
                                          v6,
                                          v33,
                                          0LL,
                                          *v17,
                                          (__int64)&v29,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v28,
                                          0);
LABEL_29:
                v13 = InstallerClassRegProp;
                v18 = v28;
                goto LABEL_30;
              }
              if ( v15 == 2 )
              {
                InstallerClassRegProp = CmGetInstallerClassRegProp(
                                          v6,
                                          (__int64)v39,
                                          0LL,
                                          *v17,
                                          (__int64)&v29,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v28);
                goto LABEL_29;
              }
LABEL_30:
              if ( !v13 && v18 < 2 )
              {
LABEL_32:
                v13 = -1073741811;
LABEL_33:
                v7 = 0;
                goto LABEL_55;
              }
              if ( v13 != -1073741789 )
                break;
              if ( v18 < 2 )
                goto LABEL_32;
              v20 = *(void **)(a4 + 8);
              if ( v20 )
              {
                ExFreePoolWithTag(v20, 0);
                v18 = v28;
              }
              v21 = ExAllocatePool2(256LL, v18, 1380994640LL);
              *(_QWORD *)(a4 + 8) = v21;
              if ( !v21 )
              {
                *(_DWORD *)(a4 + 16) = 0;
                v13 = -1073741801;
                goto LABEL_33;
              }
              *(_DWORD *)(a4 + 16) = v28;
            }
            v22 = *(_DWORD *)(a4 + 16);
            v7 = 0;
            if ( v13 >= 0 && v29 == 7 )
            {
              if ( v22 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v22 >> 1) - 2) = 0;
              v23 = *(_DWORD *)(a4 + 16);
              if ( v23 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v23 >> 1) - 4) = 0;
              v24 = *(const WCHAR **)(a4 + 8);
              if ( *v24 )
              {
                while ( RtlInitUnicodeStringEx(&String2, v24) < 0
                     || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
                {
                  v25 = -1LL;
                  do
                    ++v25;
                  while ( v24[v25] );
                  v24 += v25 + 1;
                  if ( !*v24 )
                  {
                    v7 = 0;
                    goto LABEL_54;
                  }
                }
                v6 = v32;
                v5 = v33;
                goto LABEL_59;
              }
LABEL_54:
              v6 = v32;
            }
LABEL_55:
            ++v16;
            ++v17;
          }
          while ( v16 < 2 );
          v14 = v36 + 1;
          ++v30;
          ++v36;
          if ( v30 >= 2 )
            return v7;
          v5 = v33;
        }
      }
LABEL_59:
      a3 = v31;
    }
    v7 = 1;
    v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(a4 + 24);
    if ( v26 )
      return v26(v6, v5, a3, *(_QWORD *)(a4 + 32));
  }
  return v7;
}
