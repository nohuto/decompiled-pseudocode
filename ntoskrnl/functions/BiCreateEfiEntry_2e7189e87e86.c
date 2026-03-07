__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  ULONG *v3; // rsi
  int v5; // eax
  __int64 v6; // r14
  int SavedBootEntry; // ebx
  _DWORD *v8; // rdi
  ULONG v9; // eax
  ULONG v10; // eax
  ULONG v12; // [rsp+78h] [rbp+48h] BYREF
  PVOID P; // [rsp+80h] [rbp+50h] BYREF
  void *v14; // [rsp+88h] [rbp+58h] BYREF

  v12 = 0;
  v14 = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v14);
  v6 = (__int64)v14;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  v8 = (_DWORD *)(a2 + 48);
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(v14, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (ULONG *)P;
      SavedBootEntry = BiAddBootEntry((__int64)P, (__int64)&v12);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", v12);
        v3[2] = v12;
        v10 = v12;
        *v8 |= 0x21u;
        *(_DWORD *)(a2 + 32) = v10;
        *(_QWORD *)(a2 + 40) = v3;
        SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3[1]);
        if ( SavedBootEntry >= 0 )
        {
          *v8 |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry((__int64)v14, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = (ULONG *)P;
    goto LABEL_16;
  }
  v3 = (ULONG *)P;
  if ( (*v8 & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      *v8 |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    v8 = (_DWORD *)(a2 + 48);
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry((__int64)v3, (__int64)&v12);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", v12);
  v3[2] = v12;
  v9 = v12;
  *v8 |= 1u;
  *(_DWORD *)(a2 + 32) = v9;
  *(_QWORD *)(a2 + 40) = v3;
  SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3[1]);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*v8 & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
