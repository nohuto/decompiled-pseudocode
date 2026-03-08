/*
 * XREFs of BiBindEfiEntries @ 0x14082D024
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14082BF38 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiGetKeyName @ 0x14082EEA0 (BiGetKeyName.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5A244 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140A5AC9C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x140A5B66C (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140A5BF94 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiEntries(__int64 a1, GUID **a2)
{
  NTSTATUS KeyName; // edi
  GUID *v3; // rbx
  unsigned int Data1; // eax
  unsigned int v7; // eax
  GUID v9; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  void *v13; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  GUID Guid; // [rsp+60h] [rbp-20h] BYREF

  v13 = 0LL;
  KeyName = 0;
  v3 = *a2;
  if ( *a2 != (GUID *)a2 )
  {
    while ( 1 )
    {
      Data1 = v3[3].Data1;
      if ( (Data1 & 0x10) != 0 )
        break;
      if ( (Data1 & 1) != 0 )
      {
        if ( (Data1 & 4) == 0 && (Data1 & 0x20) != 0 && !(unsigned __int8)BiIsPortableWorkspaceBoot() )
        {
          if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
            goto LABEL_7;
          goto LABEL_15;
        }
        v12 = 0LL;
        SourceString = 0LL;
        v11 = 0LL;
        v7 = v3[3].Data1;
        Guid = 0LL;
        DestinationString = 0LL;
        if ( (v7 & 4) == 0 )
        {
          v12 = 0x101FFFFF00000001LL;
          KeyName = BiCreateObject(a1, 0LL, (unsigned int *)&v12, 1LL, &v11);
          if ( KeyName >= 0 )
          {
            KeyName = BiGetKeyName(v11, &SourceString);
            if ( KeyName >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              KeyName = RtlGUIDFromString(&DestinationString, &Guid);
              if ( KeyName >= 0 )
              {
                v9 = Guid;
                v3[3].Data1 |= 4u;
                v3[1] = v9;
              }
            }
            if ( SourceString )
              ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
          }
          if ( v11 )
            BcdCloseObject(v11);
          if ( KeyName < 0 )
            goto LABEL_35;
        }
        KeyName = BiUpdateBcdObject(a1, v3);
        if ( KeyName < 0 )
        {
LABEL_35:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)KeyName);
          return (unsigned int)KeyName;
        }
      }
      else if ( (Data1 & 4) != 0 )
      {
        if ( (Data1 & 8) != 0 )
        {
          KeyName = BcdOpenObject(a1, &v3[1], &v13);
          if ( KeyName < 0 )
            goto LABEL_35;
          BcdDeleteObject(v13);
          v3[3].Data1 &= 0xFFFFFFF9;
        }
        else if ( !(unsigned __int8)BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(a1, v3) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v3);
        }
      }
LABEL_7:
      v3 = *(GUID **)&v3->Data1;
      if ( v3 == (GUID *)a2 )
        return (unsigned int)KeyName;
    }
    if ( (Data1 & 1) == 0 )
      goto LABEL_7;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", v3[2].Data1);
    if ( (int)BiDeleteBootEntry(v3[2].Data1) < 0 )
      goto LABEL_7;
    v3[3].Data1 &= ~1u;
LABEL_15:
    BiRemoveBootEntryFromNvramDisplayOrder(v3);
    goto LABEL_7;
  }
  return (unsigned int)KeyName;
}
