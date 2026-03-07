char DpiKsrDoKsrSave()
{
  int v0; // r14d
  struct _MDL *v1; // rdi
  int v2; // eax
  PMDL PagesForMdl; // rax
  __int64 v4; // rdx
  _DWORD *MappedSystemVa; // rsi
  int updated; // eax
  __int128 v8; // [rsp+58h] [rbp-9h] BYREF
  PVOID BaseAddress[2]; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+17h]
  _OWORD v11[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+B0h] [rbp+4Fh]

  v8 = 0LL;
  v10 = 0LL;
  v0 = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v1 = 0LL;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v8);
  if ( (int)v10 >= 0 )
  {
    v2 = DWORD2(v8);
    if ( DWORD2(v8) )
    {
      DWORD2(v8) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v2 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v1 = PagesForMdl;
      if ( !PagesForMdl
        || ((PagesForMdl->MdlFlags & 5) == 0
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = PagesForMdl->MappedSystemVa),
            (BaseAddress[0] = MappedSystemVa) == 0LL) )
      {
        v4 = -1073741670LL;
        v0 = -1073741670;
LABEL_12:
        WdLogSingleEntry1(2LL, v4);
        goto LABEL_13;
      }
      MappedSystemVa[1] = DWORD1(v8);
      *MappedSystemVa = DWORD2(v8);
      DWORD1(v8) = 0;
      BaseAddress[1] = (char *)MappedSystemVa + 29;
      BaseAddress[0] = (char *)MappedSystemVa + 29;
      DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v8);
      if ( __PAIR64__(DWORD1(v8), DWORD2(v8)) == *(_QWORD *)MappedSystemVa )
      {
        v11[1] = (unsigned __int64)v1;
        v11[0] = 0LL;
        v12 = 0LL;
        v11[2] = 0LL;
        updated = DpSaveMemoryForHotUpdateCB(0LL, (int *)v11);
        v0 = updated;
        if ( updated < 0 )
        {
          v4 = updated;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  if ( BaseAddress[0] )
    MmUnmapLockedPages(BaseAddress[0], v1);
  if ( (int)v10 >= 0 )
  {
    if ( v0 >= 0 )
    {
      LOBYTE(word_1C013B998) = 1;
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305188) = 1;
    }
    else
    {
      if ( v1 )
      {
        MmFreePagesFromMdl(v1);
        ExFreePoolWithTag(v1, 0);
      }
      dword_1C013B9AC = v0;
    }
  }
  else
  {
    dword_1C013B9AC = v10;
  }
  return DxgkLogInternalTriageEvent(
           0LL,
           65538,
           -1,
           (__int64)L"KSR Save routine has completed with status %1",
           (int)v10,
           0LL,
           0LL,
           0LL,
           0LL);
}
