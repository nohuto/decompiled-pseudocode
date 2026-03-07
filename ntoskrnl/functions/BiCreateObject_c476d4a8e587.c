NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // r9
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r10
  char v12; // r11
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  UUID *p_Uuid; // r10
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  NTSTATUS result; // eax
  _BYTE v24[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  v28 = 0LL;
  UnicodeString.Buffer = 0LL;
  v8 = *a3;
  v9 = 0LL;
  Uuid = 0LL;
  v10 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", v8, v6);
  if ( !*a3 )
    return -1073741637;
  v13 = a3[1];
  if ( !(v13 >> 28) )
    return -1073741637;
  if ( v13 >> 28 == 1 )
  {
    v14 = v13 & 0xFFFFF;
    if ( (v13 & 0xFFFFF) == 0 )
      return -1073741637;
    v15 = (v13 >> 20) & 0xF;
    if ( !v15 )
      return -1073741637;
    if ( v15 == 1 )
    {
      v16 = v14 - 1;
      if ( !v16 )
      {
        if ( v11 )
        {
          v17 = *v11 - *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1;
          if ( *v11 == *(_QWORD *)&GUID_FIRMWARE_BOOTMGR.Data1 )
            v17 = v11[1] - *(_QWORD *)GUID_FIRMWARE_BOOTMGR.Data4;
          if ( !v17 )
          {
LABEL_12:
            if ( (unsigned __int8)BiIsObjectAliased(v11, v29) )
              return -1073741773;
            goto LABEL_13;
          }
        }
        return -1073741637;
      }
      if ( v16 == 1048574 && (v12 & 1) == 0 )
        return -1073741637;
    }
  }
  else if ( v13 >> 28 == 2 && ((v13 & 0xF00000) == 0 || (v13 & 0xF00000) == 0x200000 && (v13 & 0xFFFFF) == 0) )
  {
    return -1073741637;
  }
  if ( v11 )
    goto LABEL_12;
  BiLogMessage(2LL, L"Generating object GUID.");
  result = ExUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    p_Uuid = &Uuid;
LABEL_13:
    v19 = RtlStringFromGUIDEx(&p_Uuid->Data1, (__int64)&UnicodeString, 1);
    if ( v19 >= 0 )
    {
      BiLogMessage(2LL, L"Object GUID: %s", UnicodeString.Buffer);
      v21 = BiOpenKey(a1, L"Objects", (unsigned int)(v20 + 2), &v26);
      v9 = v26;
      v19 = v21;
      if ( v21 >= 0 )
      {
        v22 = BiCreateKey(v26, UnicodeString.Buffer, 983103LL, 0LL, &v25, v24);
        v10 = v25;
        v19 = v22;
        if ( v22 >= 0 )
        {
          v19 = BiSetObjectDescription(v25);
          if ( v19 >= 0 )
          {
            v19 = BiCreateKey(v10, L"Elements", 131097LL, 0LL, &v28, v24);
            if ( v19 >= 0 )
            {
              *a5 = v10;
              v19 = 0;
            }
            if ( v28 )
              BiCloseKey(v28);
          }
        }
      }
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v19 < 0 && v10 )
      BiCloseKey(v10);
    if ( v9 )
      BiCloseKey(v9);
    return v19;
  }
  return result;
}
