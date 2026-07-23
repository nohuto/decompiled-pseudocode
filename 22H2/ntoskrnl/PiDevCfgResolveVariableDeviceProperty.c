/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x14077BD90
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateMultiSzData @ 0x14036E3C8 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryString @ 0x14036E3FC (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x14036E438 (PnpValidateStringData.c)
 *     PnpValidateRegistryDword @ 0x14039A2C8 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     PnpGetObjectProperty @ 0x1406B081C (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1406BD650 (RtlGUIDFromString.c)
 *     RtlStringFromGUIDEx @ 0x1406F35C8 (RtlStringFromGUIDEx.c)
 *     PnpRegSzToString @ 0x14073C4CC (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x14073EF38 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // ebx
  _DWORD *v7; // r15
  unsigned int v8; // edx
  _WORD *v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // r8
  int ObjectProperty; // eax
  unsigned int v13; // esi
  int v14; // r14d
  _DWORD *PoolWithTag; // rdi
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
    goto LABEL_57;
  v7 = P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_20;
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
    goto LABEL_15;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_57:
    v7 = P;
  }
  else
  {
    v7 = P;
    if ( !PnpValidateRegistryDword((__int64)P) )
      goto LABEL_20;
    v11 = *a1;
    v26 = *(_DWORD *)((char *)v7 + (unsigned int)v7[2]);
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0LL,
                       *(_QWORD *)(v11 + 48),
                       1,
                       0LL,
                       0LL,
                       (__int64)&Guid,
                       (__int64)&v22,
                       &v20,
                       &v19,
                       0);
    RegistryValue = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        RegistryValue = 0;
        goto LABEL_56;
      }
    }
    else
    {
      if ( (unsigned int)v22 > 0x2012 )
        goto LABEL_46;
      if ( (_DWORD)v22 == 8210 )
      {
        v13 = v19;
        if ( PnpValidateMultiSzData(v20, v19) )
        {
          v14 = 7;
          goto LABEL_13;
        }
        goto LABEL_20;
      }
      if ( (unsigned int)v22 > 0xD )
      {
        if ( (_DWORD)v22 == 18 )
          goto LABEL_11;
        if ( (_DWORD)v22 != 17 )
        {
          if ( (_DWORD)v22 == 20 )
            goto LABEL_11;
          if ( (unsigned int)v22 > 0x15 )
          {
            if ( (unsigned int)v22 > 0x18 )
            {
              if ( (_DWORD)v22 != 25 )
                goto LABEL_46;
LABEL_11:
              v13 = v19;
              if ( PnpValidateStringData((__int64)v20, v19) )
              {
                v14 = 1;
LABEL_13:
                PoolWithTag = v20;
                v20 = 0LL;
LABEL_14:
                *(_DWORD *)(a3 + 32) = v14;
                *(_DWORD *)(a3 + 36) = v13;
                *(_QWORD *)(a3 + 40) = PoolWithTag;
                goto LABEL_15;
              }
              goto LABEL_20;
            }
            goto LABEL_47;
          }
          goto LABEL_46;
        }
        if ( (_DWORD)v19 == 1 )
        {
          v14 = 4;
          v13 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v17 = *(_BYTE *)v20 == 0xFF;
            goto LABEL_29;
          }
          goto LABEL_28;
        }
LABEL_20:
        RegistryValue = -1073741823;
        goto LABEL_15;
      }
      if ( (_DWORD)v22 != 13 )
      {
        if ( (unsigned int)v22 > 5 )
        {
          if ( (unsigned int)v22 <= 7 )
          {
LABEL_47:
            if ( (_DWORD)v19 == 4 )
            {
              v14 = 4;
              v13 = 4;
              goto LABEL_13;
            }
            goto LABEL_20;
          }
          if ( (unsigned int)v22 <= 9 )
          {
            v13 = 8;
            if ( (_DWORD)v19 == 8 )
            {
              v14 = 11;
              goto LABEL_13;
            }
            goto LABEL_20;
          }
LABEL_46:
          v13 = v19;
          v14 = 3;
          goto LABEL_13;
        }
        if ( (unsigned int)v22 >= 4 )
        {
          if ( (_DWORD)v19 != 2 )
            goto LABEL_20;
          v14 = 4;
          v13 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v17 = *(unsigned __int16 *)v20;
            goto LABEL_29;
          }
LABEL_28:
          RegistryValue = -1073741670;
          goto LABEL_15;
        }
        if ( (unsigned int)v22 > 1 )
        {
          if ( (_DWORD)v19 != 1 )
            goto LABEL_20;
          v14 = 4;
          v13 = 4;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
          if ( PoolWithTag )
          {
            v17 = *(unsigned __int8 *)v20;
LABEL_29:
            *PoolWithTag = v17;
            goto LABEL_14;
          }
          goto LABEL_28;
        }
LABEL_56:
        PoolWithTag = 0LL;
        v13 = 0;
        v14 = 0;
        goto LABEL_14;
      }
      if ( (_DWORD)v19 != 16 )
        goto LABEL_20;
      RegistryValue = RtlStringFromGUIDEx((PGUID)v20, &UnicodeString, 1u);
      if ( RegistryValue >= 0 )
      {
        v13 = UnicodeString.Length + 2;
        v14 = 1;
        v18 = ExAllocatePoolWithTag(PagedPool, v13, 0x63647050u);
        PoolWithTag = v18;
        if ( v18 )
        {
          memmove(v18, UnicodeString.Buffer, v13);
          goto LABEL_14;
        }
        goto LABEL_28;
      }
    }
  }
LABEL_15:
  RtlFreeAnsiString(&UnicodeString);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
