/*
 * XREFs of ArbShareDriverExclusive @ 0x14093394C
 * Callers:
 *     ArbFindSuitableRange @ 0x140823360 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     RtlGetFirstRange @ 0x140823310 (RtlGetFirstRange.c)
 *     RtlGetNextRange @ 0x140823670 (RtlGetNextRange.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // si
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int8 v12; // dl
  struct _DEVICE_OBJECT *v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // rdi
  bool v19; // zf
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 *v21; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  ResultLength = 0;
  v21 = 0LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  memset(v22, 0, sizeof(v22));
  v6 = *(_DWORD *)(v3 + 44);
  if ( (v6 & 2) == 0 )
  {
    if ( (v6 & 4) != 0
      || IoGetDeviceProperty(
           *(PDEVICE_OBJECT *)(v3 + 32),
           DevicePropertyEnumeratorName,
           0xAu,
           PropertyBuffer,
           &ResultLength) < 0 )
    {
      goto LABEL_8;
    }
    v7 = wcsicmp(PropertyBuffer, L"ROOT");
    v8 = *(_QWORD *)(a2 + 32);
    if ( v7 )
    {
      *(_DWORD *)(v8 + 44) |= 4u;
      goto LABEL_8;
    }
    *(_DWORD *)(v8 + 44) |= 2u;
  }
  v4 = 1;
LABEL_8:
  RtlGetFirstRange(*(__int64 **)(a1 + 48), (__int64)v22, &v21);
  while ( 1 )
  {
    v17 = v21;
    if ( !v21 )
      return 0;
    v9 = *v21;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = v10 < *v21;
    if ( v10 > *v21 )
    {
      if ( v21[1] < v10 )
        goto LABEL_30;
      v11 = v10 < v9;
    }
    if ( !v11 || *(_QWORD *)(a2 + 24) >= v9 )
    {
      v12 = *((_BYTE *)v21 + 32);
      if ( (v12 & *(_BYTE *)(a2 + 67)) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (v12 & 2) != 0) )
      {
        v13 = (struct _DEVICE_OBJECT *)v21[3];
        if ( v13 )
        {
          if ( v4 )
          {
            v14 = *((_BYTE *)v21 + 33);
            if ( (v14 & 0x40) == 0 )
            {
              if ( (v14 & 0x20) != 0
                || IoGetDeviceProperty(v13, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_34;
              }
              if ( !wcsicmp(PropertyBuffer, L"ROOT") )
              {
                *((_BYTE *)v17 + 33) |= 0x20u;
LABEL_34:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v19 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_36;
              }
              *((_BYTE *)v17 + 33) |= 0x40u;
            }
            v4 = 0;
          }
          v15 = *(_QWORD *)(v17[3] + 24);
          if ( v15 )
            break;
        }
      }
    }
LABEL_30:
    RtlGetNextRange((__int64 *)v22, &v21, 1);
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v16 )
      break;
LABEL_29:
    v15 = *(_QWORD *)(v15 + 24);
    if ( !v15 )
      goto LABEL_30;
  }
  while ( *(_QWORD *)(v15 + 8) != *(_QWORD *)(v16 + 8) )
  {
    v16 = *(_QWORD *)(v16 + 24);
    if ( !v16 )
      goto LABEL_29;
  }
  *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
  v19 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
LABEL_36:
  if ( v19 )
    *(_BYTE *)(a2 + 66) |= 2u;
  return 1;
}
