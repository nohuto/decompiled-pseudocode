/*
 * XREFs of ArbShareDriverExclusive @ 0x1C00A293C
 * Callers:
 *     ArbFindSuitableRange @ 0x1C00A18C0 (ArbFindSuitableRange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

char __fastcall ArbShareDriverExclusive(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // di
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  ULONGLONG Start; // rcx
  ULONGLONG v10; // rax
  bool v11; // cf
  UCHAR Attributes; // r8
  struct _DEVICE_OBJECT *Owner; // rcx
  UCHAR Flags; // al
  PRTL_RANGE v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  bool v19; // zf
  PRTL_RANGE Range; // [rsp+30h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+40h] [rbp-40h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+60h] [rbp-20h] BYREF

  Range = 0LL;
  ResultLength = 0;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
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
    v7 = _wcsicmp(PropertyBuffer, L"ROOT");
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
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( 1 )
  {
    v15 = Range;
    if ( !Range )
      return 0;
    Start = Range->Start;
    v10 = *(_QWORD *)(a2 + 16);
    v11 = v10 < Range->Start;
    if ( v10 > Range->Start )
    {
      if ( Range->End < v10 )
        goto LABEL_30;
      v11 = v10 < Start;
    }
    if ( !v11 || *(_QWORD *)(a2 + 24) >= Start )
    {
      Attributes = Range->Attributes;
      if ( (Attributes & *(_BYTE *)(a2 + 67)) == 0
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2 || (Attributes & 2) != 0) )
      {
        Owner = (struct _DEVICE_OBJECT *)Range->Owner;
        if ( Owner )
        {
          if ( v4 )
          {
            Flags = Range->Flags;
            if ( (Flags & 0x40) == 0 )
            {
              if ( (Flags & 0x20) != 0
                || IoGetDeviceProperty(Owner, DevicePropertyEnumeratorName, 0xAu, PropertyBuffer, &ResultLength) < 0 )
              {
                goto LABEL_34;
              }
              if ( !_wcsicmp(PropertyBuffer, L"ROOT") )
              {
                Range->Flags |= 0x20u;
LABEL_34:
                *(_QWORD *)a2 = *(_QWORD *)(a2 + 16);
                *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
                v19 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL) + 2LL) == 2;
                goto LABEL_36;
              }
              Range->Flags |= 0x40u;
              v15 = Range;
            }
            v4 = 0;
          }
          v16 = *((_QWORD *)v15->Owner + 3);
          if ( v16 )
            break;
        }
      }
    }
LABEL_30:
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL);
    if ( v17 )
      break;
LABEL_29:
    v16 = *(_QWORD *)(v16 + 24);
    if ( !v16 )
      goto LABEL_30;
  }
  while ( *(_QWORD *)(v16 + 8) != *(_QWORD *)(v17 + 8) )
  {
    v17 = *(_QWORD *)(v17 + 24);
    if ( !v17 )
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
