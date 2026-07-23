/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x140973384
 * Callers:
 *     BiCreateEfiEntry @ 0x140971320 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _wcsupr @ 0x1403D1CF0 (_wcsupr.c)
 *     wcsstr @ 0x1403D3A90 (wcsstr.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406F35C8 (RtlStringFromGUIDEx.c)
 *     BcdQueryObject @ 0x140783204 (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140972388 (BiGetObjectReferenceFromEfiEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, void *a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  GUID Identifier; // [rsp+30h] [rbp-30h] BYREF
  GUID v13; // [rsp+40h] [rbp-20h] BYREF

  Identifier = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v13);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &Identifier);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&Identifier.Data1;
      if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&Identifier.Data1 )
        v5 = *(_QWORD *)v13.Data4 - *(_QWORD *)Identifier.Data4;
      if ( v5 )
      {
        v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, (const void *)(a1 + 48), v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&Identifier, &DestinationString, 1u);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(
                (void *)(a1 + 68 + 2 * ((unsigned __int64)(v9 - v8) >> 1)),
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeAnsiString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
