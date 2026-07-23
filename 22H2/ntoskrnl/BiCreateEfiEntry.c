/*
 * XREFs of BiCreateEfiEntry @ 0x140971320
 * Callers:
 *     BiBindEfiEntries @ 0x140970678 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140971AE8 (BiExportBcdObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x140784964 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BiAddBootEntry @ 0x140970188 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140970F70 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x14097251C (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1409731BC (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140973384 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  _BOOT_ENTRY *v3; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  ULONG v8; // eax
  ULONG v9; // eax
  ULONG Id; // [rsp+68h] [rbp+38h] BYREF
  PVOID P; // [rsp+70h] [rbp+40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+48h] BYREF

  Id = 0;
  BcdObjectHandle = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_17;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(BcdObjectHandle, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (_BOOT_ENTRY *)P;
      SavedBootEntry = BiAddBootEntry((PBOOT_ENTRY)P, &Id);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", Id);
        v3->Id = Id;
        v9 = Id;
        a2[3].Data1 |= 0x21u;
        a2[2].Data1 = v9;
        *(_QWORD *)a2[2].Data4 = v3;
        SavedBootEntry = BiSetRegistryValue((__int64)v6, L"FirmwareVariable", L"Description", 3u, v3, v3->Length);
        if ( SavedBootEntry >= 0 )
        {
          a2[3].Data1 |= 2u;
LABEL_14:
          if ( SavedBootEntry >= 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      goto LABEL_17;
    }
LABEL_16:
    v3 = (_BOOT_ENTRY *)P;
    goto LABEL_17;
  }
  SavedBootEntry = BiGetSavedBootEntry(BcdObjectHandle, &P);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  v3 = (_BOOT_ENTRY *)P;
  if ( (a2[3].Data1 & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry < 0 )
      goto LABEL_17;
    a2[3].Data1 |= 0x20u;
  }
  SavedBootEntry = BiAddBootEntry(v3, &Id);
  if ( SavedBootEntry >= 0 )
  {
    BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", Id);
    v3->Id = Id;
    v8 = Id;
    a2[3].Data1 |= 1u;
    a2[2].Data1 = v8;
    *(_QWORD *)a2[2].Data4 = v3;
    SavedBootEntry = BiSetRegistryValue((__int64)v6, L"FirmwareVariable", L"Description", 3u, v3, v3->Length);
    if ( SavedBootEntry >= 0 )
    {
      SavedBootEntry = BiUpdateEfiEntry(a1, a2);
      goto LABEL_14;
    }
  }
LABEL_17:
  BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
LABEL_18:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
