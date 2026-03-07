__int64 __fastcall BcdOpenStore(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned __int16 *v3; // rbx
  char v4; // si
  int v7; // r14d
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  const wchar_t *v14; // r8
  unsigned int v15; // r10d
  unsigned int v16; // ebp
  _DWORD *Pool2; // rax
  void *v18; // r14
  _DWORD *v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2 & 1;
  LOBYTE(a1) = a2 & 1;
  v7 = a2 & 2;
  v8 = BiAcquireBcdSyncMutant(a1);
  if ( v8 < 0 )
  {
    if ( v3 )
      v14 = (const wchar_t *)*((_QWORD *)v3 + 1);
    else
      v14 = L"NULL";
    BiLogMessage(4LL, L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x", v14, a2, v8);
    return v15;
  }
  else
  {
    v25 = 0LL;
    v9 = 0;
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", a2);
    if ( v3 )
    {
      if ( !v4 )
        BiCleanupLoadedStores(0LL);
      v16 = *v3 + 14;
      Pool2 = (_DWORD *)ExAllocatePool2(258LL, v16, 1262764866LL);
      v18 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 1;
        v19 = Pool2 + 3;
        Pool2[1] = v16;
        Pool2[2] = 3;
        memmove(Pool2 + 3, *((const void **)v3 + 1), *v3);
        *((_WORD *)v19 + ((unsigned __int64)*v3 >> 1)) = 0;
        BiLogMessage(2LL, L"Store path: \"%s\"", v19);
        if ( v4 )
        {
          BiLogMessage(v20, L"Store will be accessed with offline registry APIs.");
          v9 = 32;
        }
        v21 = BiAddStoreFromFile((__int64)v18, v9, &v25);
        v12 = v21;
        if ( v21 >= 0 )
        {
          v23 = v25;
          BiDeleteRegistryValue(v25, L"GuidCache", L"Description");
          v24 = BiMarkTreatAsSystemStore(v23, 0);
          v12 = v24;
          if ( v24 >= 0 )
            *a3 = v23;
          else
            BiLogMessage(4LL, L"Failed to clear system store flag. Status: %x", (unsigned int)v24);
        }
        else
        {
          v22 = 4LL;
          if ( v21 == -1073741809 )
            v22 = 2LL;
          BiLogMessage(
            v22,
            L"BcdOpenStore: Failed to add store from file %ws. StoreFlags: 0x%x Status: %x",
            v19,
            v9,
            v21);
        }
        ExFreePoolWithTag(v18, 0x4B444342u);
      }
      else
      {
        v12 = -1073741801;
      }
    }
    else if ( v4 )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( v7 )
        BiLogMessage(v10, L"Store will be synchronized with firmware.");
      else
        v9 = 2;
      v11 = BiOpenSystemStore(a3, v9);
      v12 = v11;
      if ( v11 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v11);
    }
    LOBYTE(v10) = v4;
    BiReleaseBcdSyncMutant(v10);
    return v12;
  }
}
