__int64 __fastcall BiOpenSystemStore(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r12d
  char v4; // r8
  int v5; // ebx
  int v6; // eax
  const wchar_t **v7; // r14
  __int64 v8; // rsi
  bool v9; // zf
  int v10; // eax
  bool v11; // si
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  int v16; // eax
  bool v17; // cf
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-20h] BYREF
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+90h] [rbp+48h] BYREF
  int v24; // [rsp+98h] [rbp+50h]

  *a1 = 0LL;
  v2 = 0LL;
  v23 = 0;
  Handle = 0LL;
  P[0] = 0LL;
  v3 = a2;
  v18 = 0LL;
  v24 = 0;
  BiLogMessage(2LL, L"Opening system store. Flags: 0x%x", a2);
  BiCleanupLoadedStores(16 * (v4 & 1u));
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v5 < 0 )
    goto LABEL_20;
  v6 = BiEnumerateSubKeys(Handle, P, &v23);
  v7 = (const wchar_t **)P[0];
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_18;
  v8 = 0LL;
  v5 = -1073741275;
  v9 = v23 == 0;
  if ( !v23 )
    goto LABEL_7;
  while ( 1 )
  {
    if ( wcsnicmp(v7[v8], L"BCD", 3uLL) )
      goto LABEL_5;
    if ( wcstoul(v7[v8] + 3, 0LL, 10) == -1 )
      goto LABEL_5;
    BiLogMessage(2LL, L"Found loaded store at key %s", v7[v8]);
    v16 = BiOpenKey(Handle, v7[v8], 131097LL, &v18);
    v2 = v18;
    v5 = v16;
    if ( v16 < 0 )
      goto LABEL_5;
    if ( BiIsSystemStore(v18) )
      break;
    BiCloseKey(v2);
LABEL_5:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v23 )
      goto LABEL_6;
  }
  BiLogMessage(2LL, L"Store %s is the system store", v7[v8]);
  v5 = 0;
LABEL_6:
  v3 = a2;
  v9 = (_DWORD)v8 == v23;
LABEL_7:
  if ( !v9 )
  {
LABEL_11:
    if ( (v3 & 2) != 0 )
    {
      v2 |= 2uLL;
      goto LABEL_17;
    }
    BiLogMessage(2LL, L"Synchronizing store with firmware");
    v11 = BiWasFirmwareModified(v2);
    v12 = BiGetFirmwareType() - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v5 = BiBindEfiNamespaceObjects(v2);
        v14 = (unsigned int)v5;
        if ( v5 >= 0 )
          goto LABEL_15;
LABEL_32:
        BiLogMessage(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", v3, v14, v18);
        goto LABEL_33;
      }
      if ( v13 != 1 )
      {
        v5 = -1073741637;
        v14 = 3221225659LL;
        goto LABEL_32;
      }
    }
    v5 = 0;
LABEL_15:
    if ( !v11 )
      BiSetFirmwareModified(v2, 0);
LABEL_17:
    *a1 = v2;
    if ( v5 < 0 )
      goto LABEL_33;
    goto LABEL_18;
  }
  BiLogMessage(2LL, L"The system store is not already loaded");
  v18 = 0LL;
  if ( (v3 & 4) != 0 )
  {
    BiLogMessage(4LL, L"Specified flags prevent opening unloaded system store");
    v5 = -1073741275;
  }
  else
  {
    v10 = BiLoadSystemStore(&v18);
    v2 = v18;
    v5 = v10;
    if ( v10 >= 0 )
    {
      v24 = 1;
      goto LABEL_11;
    }
LABEL_33:
    if ( v2 )
    {
      v17 = v24 != 0;
      v24 = -v24;
      BiCloseStore(v2, v17 ? 2 : 0);
    }
  }
LABEL_18:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
