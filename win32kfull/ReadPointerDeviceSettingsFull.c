__int64 __fastcall ReadPointerDeviceSettingsFull(int a1, size_t a2, unsigned __int16 *a3)
{
  int v3; // edi
  _DWORD *v4; // rsi
  int v5; // ecx
  int v6; // ecx
  struct tagDEVICECONFIG_SETTING near **v8; // r15
  const char *v9; // r8
  __int128 v10; // xmm0
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  _WORD *v14; // r9
  __int16 v15; // r11
  __int64 v16; // r10
  unsigned __int16 v17; // r11
  NTSTATUS v18; // r14d
  const wchar_t *v19; // rcx
  __int16 v20; // r9
  unsigned __int64 v21; // r11
  WCHAR *v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  struct tagDEVICECONFIG_SETTING *v33; // rdi
  unsigned int v34; // edx
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // eax
  struct tagDEVICECONFIG_SETTING near *v39; // rbx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int128 v51; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v52; // [rsp+60h] [rbp-A0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v54[704]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0;
  v4 = (_DWORD *)a2;
  if ( a1 == 148 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v8 = off_1C0357038;
    v49 = L"PreventFlicks";
    v9 = L"\\Registry\\Machine";
    v50 = 0LL;
    KeyHandle = 0LL;
    v10 = *((_OWORD *)off_1C0357038 + 6);
    v11 = 0;
    *(_QWORD *)&SourceString.Length = 45875200LL;
    v52 = v10;
    SourceString.Buffer = (PWSTR)v54;
    v12 = 0x7FFFLL;
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    v13 = 350LL;
    v14 = v54;
    v15 = 0;
    v51 = (unsigned __int64)L"PreventFlicks";
    while ( v12 )
    {
      a2 = *(unsigned __int16 *)v9;
      if ( !(_WORD)a2 )
        break;
      *v14 = a2;
      v9 += 2;
      ++v14;
      --v12;
      ++v15;
      if ( !--v13 )
      {
        if ( v12 && *(_WORD *)v9 )
        {
          v18 = -2147483643;
          SourceString.Length = 2 * v15;
          goto LABEL_20;
        }
        break;
      }
    }
    SourceString.Length = 2 * v15;
    v18 = RtlUnicodeStringValidateWorker(&SourceString, a2, (ULONG)v9);
    if ( v18 >= 0 )
    {
      v19 = L"\\Software\\Policies\\Microsoft\\TabletPC";
      v18 = 0;
      v20 = 0;
      v21 = (unsigned __int64)v17 >> 1;
      v22 = &SourceString.Buffer[v21];
      v23 = ((unsigned __int64)SourceString.MaximumLength >> 1) - v21;
      if ( v23 )
      {
        while ( v16 && *v19 )
        {
          *v22++ = *v19++;
          --v16;
          ++v20;
          if ( !--v23 )
          {
            if ( !v16 || !*v19 )
              break;
            goto LABEL_83;
          }
        }
      }
      else
      {
LABEL_83:
        v18 = -2147483643;
      }
      SourceString.Length = 2 * (v20 + v21);
      if ( v18 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &SourceString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v18 >= 0 )
        {
          v18 = ReadPointerDeviceCfgDWORDSetting(KeyHandle, &v51);
          if ( v18 >= 0 && HIDWORD(v51) != DWORD2(v51) )
          {
            HIDWORD(v50) = HIDWORD(v51);
            v18 = 0;
          }
          ZwClose(KeyHandle);
        }
      }
    }
LABEL_20:
    if ( HIDWORD(v50) )
    {
      if ( v18 >= 0 )
        goto LABEL_24;
    }
    else
    {
      if ( (unsigned int)GetDWORDSettingValues(6LL, &v49) && HIDWORD(v50) == 1 )
        v11 = 1;
      if ( v11 )
        goto LABEL_24;
    }
    v3 = HIDWORD(v52);
LABEL_24:
    v24 = *((_DWORD *)v8 + 3);
    if ( v24 == -1 )
      v24 = *((_DWORD *)v8 + 2);
    *v4 = v24;
    v25 = *((_DWORD *)v8 + 7);
    if ( v25 == -1 )
      v25 = *((_DWORD *)v8 + 6);
    v4[1] = v25;
    v26 = *((_DWORD *)v8 + 11);
    if ( v26 == -1 )
      v26 = *((_DWORD *)v8 + 10);
    v4[2] = v26;
    v27 = *((_DWORD *)v8 + 15);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v8 + 14);
    v4[3] = v27;
    v28 = *((_DWORD *)v8 + 19);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v8 + 18);
    v4[4] = v28;
    v29 = *((_DWORD *)v8 + 23);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v8 + 22);
    v4[5] = v29;
    v30 = DWORD2(v52);
    if ( v3 != -1 )
      v30 = v3;
    v4[6] = v30;
    v31 = *((_DWORD *)v8 + 31);
    if ( v31 == -1 )
      v31 = *((_DWORD *)v8 + 30);
    v4[7] = v31;
    return 1LL;
  }
  v5 = a1 - 150;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( !v6 )
      return GetFlickMap((struct tagFLICK_MAP *)a2);
    v32 = v6 - 2;
    if ( v32 )
    {
      if ( v32 == 2 )
      {
        if ( !gPredictionMonitor && (int)CreatePredictionSettings(off_1C0357018, (const unsigned __int16 *)a2, a3) >= 0 )
        {
          gPredictionMonitor = 1;
          goto LABEL_46;
        }
        if ( gPredictionMonitor == 1 )
        {
LABEL_46:
          v33 = off_1C0357018;
          GetPredictionSettings(off_1C0357018, (const unsigned __int16 *)a2, a3);
          v34 = *((_DWORD *)v33 + 3);
          v35 = 60;
          if ( v34 == -1 )
          {
            v36 = *((_DWORD *)v33 + 2);
          }
          else
          {
            v36 = 60;
            if ( v34 <= 0x3C )
              v36 = *((_DWORD *)v33 + 3);
          }
          v4[1] = v36;
          glTOUCH_DRIVER_HW_STACK_LATENCY = v36;
          v37 = *((_DWORD *)v33 + 7);
          if ( v37 == -1 )
          {
            v35 = *((_DWORD *)v33 + 6);
          }
          else if ( v37 <= 0x3C )
          {
            v35 = *((_DWORD *)v33 + 7);
          }
          v4[2] = v35;
          glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v35;
          v38 = *((_DWORD *)v33 + 11);
          if ( v38 == -1 )
            v38 = *((_DWORD *)v33 + 10);
          v4[3] = v38;
          gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v38;
          return 1LL;
        }
      }
      return 0LL;
    }
    else
    {
      return GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
    }
  }
  else
  {
    v39 = off_1C03571F8;
    if ( !gModeMonitor )
      GetDWORDSettingValues(7LL, off_1C03571F8);
    v40 = *((_DWORD *)v39 + 3);
    if ( v40 == -1 )
      v40 = *((_DWORD *)v39 + 2);
    *v4 = v40;
    v41 = *((_DWORD *)v39 + 7);
    if ( v41 == -1 )
      v41 = *((_DWORD *)v39 + 6);
    v4[1] = v41;
    v42 = *((_DWORD *)v39 + 11);
    if ( v42 == -1 )
      v42 = *((_DWORD *)v39 + 10);
    v4[2] = v42;
    v43 = *((_DWORD *)v39 + 15);
    if ( v43 == -1 )
      v43 = *((_DWORD *)v39 + 14);
    v4[3] = v43;
    v44 = *((_DWORD *)v39 + 19);
    if ( v44 == -1 )
      v44 = *((_DWORD *)v39 + 18);
    v4[4] = v44;
    v45 = *((_DWORD *)v39 + 23);
    if ( v45 == -1 )
      v45 = *((_DWORD *)v39 + 22);
    v4[5] = v45;
    v46 = *((_DWORD *)v39 + 27);
    if ( v46 == -1 )
      v46 = *((_DWORD *)v39 + 26);
    v4[6] = v46;
    return 1LL;
  }
}
