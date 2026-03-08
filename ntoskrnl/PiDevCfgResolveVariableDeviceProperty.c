/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     PnpValidateRegistryString @ 0x1403C1BE8 (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x1403C1C24 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1403C2404 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PnpGetObjectProperty @ 0x1406CEE90 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     PnpRegSzToString @ 0x1407707FC (PnpRegSzToString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  _DWORD *v7; // r15
  unsigned int v8; // edx
  _WORD *v9; // rcx
  wchar_t *v10; // rax
  int v11; // r14d
  __int64 v12; // r8
  int ObjectProperty; // eax
  unsigned int v14; // esi
  _DWORD *Pool2; // rdi
  int v17; // ecx
  _DWORD *v18; // rax
  __int64 v19; // [rsp+60h] [rbp-39h] BYREF
  PVOID v20; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-19h] BYREF
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-9h] BYREF
  GUID Guid; // [rsp+A0h] [rbp+7h] BYREF
  int v26; // [rsp+B0h] [rbp+17h]

  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LODWORD(v22) = 0;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v26 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  Guid = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_59;
  v7 = P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_18;
  v8 = v7[3];
  v9 = (_WORD *)((char *)v7 + (unsigned int)v7[2]);
  LODWORD(P) = 0;
  PnpRegSzToString(v9, v8, (int *)&P);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  v10 = (wchar_t *)((char *)v7 + (unsigned int)v7[2]);
  GuidString.Length = (unsigned __int16)P;
  GuidString.Buffer = v10;
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_13;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_59:
    v7 = P;
  }
  else
  {
    v7 = P;
    if ( !PnpValidateRegistryDword((__int64)P) )
      goto LABEL_18;
    v11 = 1;
    v12 = *a1;
    v26 = *(_DWORD *)((char *)v7 + (unsigned int)v7[2]);
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0,
                       *(_QWORD *)(v12 + 48),
                       1,
                       0LL,
                       0LL,
                       (__int64)&Guid,
                       (__int64)&v22,
                       &v20,
                       (unsigned int *)&v19,
                       0);
    RegistryValue = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        RegistryValue = 0;
        goto LABEL_58;
      }
    }
    else
    {
      if ( (unsigned int)v22 > 0xD )
      {
        if ( (_DWORD)v22 != 17 )
        {
          if ( (_DWORD)v22 == 18 || (_DWORD)v22 == 20 )
            goto LABEL_10;
          if ( (_DWORD)v22 != 22 && (_DWORD)v22 != 23 && (_DWORD)v22 != 24 )
          {
            if ( (_DWORD)v22 != 25 )
            {
              if ( (_DWORD)v22 == 8210 )
              {
                v14 = v19;
                if ( PnpValidateMultiSzData(v20, v19) )
                {
                  v11 = 7;
                  goto LABEL_11;
                }
                goto LABEL_18;
              }
LABEL_49:
              v14 = v19;
              v11 = 3;
              goto LABEL_11;
            }
LABEL_10:
            v14 = v19;
            if ( PnpValidateStringData((__int64)v20, v19) )
            {
LABEL_11:
              Pool2 = v20;
              v20 = 0LL;
LABEL_12:
              *(_DWORD *)(a3 + 32) = v11;
              *(_DWORD *)(a3 + 36) = v14;
              *(_QWORD *)(a3 + 40) = Pool2;
              goto LABEL_13;
            }
            goto LABEL_18;
          }
LABEL_50:
          if ( (_DWORD)v19 == 4 )
          {
            v11 = 4;
            v14 = 4;
            goto LABEL_11;
          }
          goto LABEL_18;
        }
        if ( (_DWORD)v19 != 1 )
          goto LABEL_18;
        v11 = 4;
        v14 = 4;
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
        if ( Pool2 )
        {
          v17 = *(_BYTE *)v20 == 0xFF;
          goto LABEL_55;
        }
        goto LABEL_31;
      }
      if ( (_DWORD)v22 != 13 )
      {
        if ( (unsigned int)v22 > 5 )
        {
          if ( (_DWORD)v22 != 6 && (_DWORD)v22 != 7 )
          {
            if ( (unsigned int)(v22 - 8) > 1 )
              goto LABEL_49;
            v14 = 8;
            if ( (_DWORD)v19 == 8 )
            {
              v11 = 11;
              goto LABEL_11;
            }
LABEL_18:
            RegistryValue = -1073741823;
            goto LABEL_13;
          }
          goto LABEL_50;
        }
        if ( (_DWORD)v22 == 5 )
          goto LABEL_25;
        if ( (unsigned int)v22 >= 2 )
        {
          if ( (_DWORD)v22 == 2 || (_DWORD)v22 == 3 )
          {
            if ( (_DWORD)v19 != 1 )
              goto LABEL_18;
            v11 = 4;
            v14 = 4;
            Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
            if ( Pool2 )
            {
              v17 = *(unsigned __int8 *)v20;
              goto LABEL_55;
            }
LABEL_31:
            RegistryValue = -1073741670;
            goto LABEL_13;
          }
LABEL_25:
          if ( (_DWORD)v19 != 2 )
            goto LABEL_18;
          v11 = 4;
          v14 = 4;
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 1667526736LL);
          if ( Pool2 )
          {
            v17 = *(unsigned __int16 *)v20;
LABEL_55:
            *Pool2 = v17;
            goto LABEL_12;
          }
          goto LABEL_31;
        }
LABEL_58:
        Pool2 = 0LL;
        v14 = 0;
        v11 = 0;
        goto LABEL_12;
      }
      if ( (_DWORD)v19 != 16 )
        goto LABEL_18;
      RegistryValue = RtlStringFromGUIDEx((unsigned int *)v20, (__int64)&UnicodeString, 1);
      if ( RegistryValue >= 0 )
      {
        v14 = UnicodeString.Length + 2;
        v18 = (_DWORD *)ExAllocatePool2(256LL, v14, 1667526736LL);
        Pool2 = v18;
        if ( v18 )
        {
          memmove(v18, UnicodeString.Buffer, v14);
          goto LABEL_12;
        }
        goto LABEL_31;
      }
    }
  }
LABEL_13:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
