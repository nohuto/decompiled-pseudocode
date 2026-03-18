/*
 * XREFs of ReadPointerDeviceSettingsFull @ 0x1C0047820
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0041214 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C0048004 (RtlUnicodeStringValidateWorker.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C0048044 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0049950 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0049A84 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F3320 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettingsFull(int a1, size_t a2, unsigned __int16 *a3, unsigned int a4)
{
  int v4; // edi
  _DWORD *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  struct tagDEVICECONFIG_SETTING near **v9; // r15
  const char *v10; // r8
  __int128 v11; // xmm0
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rcx
  _WORD *v15; // r9
  __int16 v16; // r11
  __int64 v17; // r10
  unsigned __int16 v18; // r11
  NTSTATUS v19; // r14d
  const wchar_t *v20; // rcx
  __int16 v21; // r9
  unsigned __int64 v22; // r11
  WCHAR *v23; // r8
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  struct tagDEVICECONFIG_SETTING *v34; // rdi
  unsigned int v35; // edx
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // ecx
  int v39; // eax
  struct tagDEVICECONFIG_SETTING near *v40; // rbx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int128 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+60h] [rbp-A0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v55[704]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0;
  v5 = (_DWORD *)a2;
  if ( a1 == 148 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v9 = off_1C0354038;
    v50 = L"PreventFlicks";
    v10 = L"\\Registry\\Machine";
    v51 = 0LL;
    KeyHandle = 0LL;
    v11 = *((_OWORD *)off_1C0354038 + 6);
    v12 = 0;
    *(_QWORD *)&SourceString.Length = 45875200LL;
    v53 = v11;
    SourceString.Buffer = (PWSTR)v55;
    v13 = 0x7FFFLL;
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    v14 = 350LL;
    v15 = v55;
    v16 = 0;
    v52 = (unsigned __int64)L"PreventFlicks";
    while ( v13 )
    {
      a2 = *(unsigned __int16 *)v10;
      if ( !(_WORD)a2 )
        break;
      *v15 = a2;
      v10 += 2;
      ++v15;
      --v13;
      ++v16;
      if ( !--v14 )
      {
        if ( v13 && *(_WORD *)v10 )
        {
          v19 = -2147483643;
          SourceString.Length = 2 * v16;
          goto LABEL_20;
        }
        break;
      }
    }
    SourceString.Length = 2 * v16;
    v19 = RtlUnicodeStringValidateWorker(&SourceString, a2, (ULONG)v10);
    if ( v19 >= 0 )
    {
      v20 = L"\\Software\\Policies\\Microsoft\\TabletPC";
      v19 = 0;
      v21 = 0;
      v22 = (unsigned __int64)v18 >> 1;
      v23 = &SourceString.Buffer[v22];
      v24 = ((unsigned __int64)SourceString.MaximumLength >> 1) - v22;
      if ( v24 )
      {
        while ( v17 && *v20 )
        {
          *v23++ = *v20++;
          --v17;
          ++v21;
          if ( !--v24 )
          {
            if ( !v17 || !*v20 )
              break;
            goto LABEL_83;
          }
        }
      }
      else
      {
LABEL_83:
        v19 = -2147483643;
      }
      SourceString.Length = 2 * (v21 + v22);
      if ( v19 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &SourceString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v19 >= 0 )
        {
          v19 = ReadPointerDeviceCfgDWORDSetting(KeyHandle, &v52);
          if ( v19 >= 0 && HIDWORD(v52) != DWORD2(v52) )
          {
            HIDWORD(v51) = HIDWORD(v52);
            v19 = 0;
          }
          ZwClose(KeyHandle);
        }
      }
    }
LABEL_20:
    if ( HIDWORD(v51) )
    {
      if ( v19 >= 0 )
        goto LABEL_24;
    }
    else
    {
      if ( (unsigned int)GetDWORDSettingValues(6LL, &v50, 1LL) && HIDWORD(v51) == 1 )
        v12 = 1;
      if ( v12 )
        goto LABEL_24;
    }
    v4 = HIDWORD(v53);
LABEL_24:
    v25 = *((_DWORD *)v9 + 3);
    if ( v25 == -1 )
      v25 = *((_DWORD *)v9 + 2);
    *v5 = v25;
    v26 = *((_DWORD *)v9 + 7);
    if ( v26 == -1 )
      v26 = *((_DWORD *)v9 + 6);
    v5[1] = v26;
    v27 = *((_DWORD *)v9 + 11);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v9 + 10);
    v5[2] = v27;
    v28 = *((_DWORD *)v9 + 15);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v9 + 14);
    v5[3] = v28;
    v29 = *((_DWORD *)v9 + 19);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v9 + 18);
    v5[4] = v29;
    v30 = *((_DWORD *)v9 + 23);
    if ( v30 == -1 )
      v30 = *((_DWORD *)v9 + 22);
    v5[5] = v30;
    v31 = DWORD2(v53);
    if ( v4 != -1 )
      v31 = v4;
    v5[6] = v31;
    v32 = *((_DWORD *)v9 + 31);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v9 + 30);
    v5[7] = v32;
    return 1LL;
  }
  v6 = a1 - 150;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( !v7 )
      return GetFlickMap((struct tagFLICK_MAP *)a2);
    v33 = v7 - 2;
    if ( v33 )
    {
      if ( v33 == 2 )
      {
        if ( !gPredictionMonitor && (int)CreatePredictionSettings(off_1C0354028, a2, a3, a4) >= 0 )
        {
          gPredictionMonitor = 1;
          goto LABEL_46;
        }
        if ( gPredictionMonitor == 1 )
        {
LABEL_46:
          v34 = off_1C0354028;
          GetPredictionSettings(off_1C0354028, (const unsigned __int16 *)a2, a3);
          v35 = *((_DWORD *)v34 + 3);
          v36 = 60;
          if ( v35 == -1 )
          {
            v37 = *((_DWORD *)v34 + 2);
          }
          else
          {
            v37 = 60;
            if ( v35 <= 0x3C )
              v37 = *((_DWORD *)v34 + 3);
          }
          v5[1] = v37;
          glTOUCH_DRIVER_HW_STACK_LATENCY = v37;
          v38 = *((_DWORD *)v34 + 7);
          if ( v38 == -1 )
          {
            v36 = *((_DWORD *)v34 + 6);
          }
          else if ( v38 <= 0x3C )
          {
            v36 = *((_DWORD *)v34 + 7);
          }
          v5[2] = v36;
          glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v36;
          v39 = *((_DWORD *)v34 + 11);
          if ( v39 == -1 )
            v39 = *((_DWORD *)v34 + 10);
          v5[3] = v39;
          gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v39;
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
    v40 = off_1C03541F8;
    if ( !gModeMonitor )
      GetDWORDSettingValues(7LL, off_1C03541F8, 7LL);
    v41 = *((_DWORD *)v40 + 3);
    if ( v41 == -1 )
      v41 = *((_DWORD *)v40 + 2);
    *v5 = v41;
    v42 = *((_DWORD *)v40 + 7);
    if ( v42 == -1 )
      v42 = *((_DWORD *)v40 + 6);
    v5[1] = v42;
    v43 = *((_DWORD *)v40 + 11);
    if ( v43 == -1 )
      v43 = *((_DWORD *)v40 + 10);
    v5[2] = v43;
    v44 = *((_DWORD *)v40 + 15);
    if ( v44 == -1 )
      v44 = *((_DWORD *)v40 + 14);
    v5[3] = v44;
    v45 = *((_DWORD *)v40 + 19);
    if ( v45 == -1 )
      v45 = *((_DWORD *)v40 + 18);
    v5[4] = v45;
    v46 = *((_DWORD *)v40 + 23);
    if ( v46 == -1 )
      v46 = *((_DWORD *)v40 + 22);
    v5[5] = v46;
    v47 = *((_DWORD *)v40 + 27);
    if ( v47 == -1 )
      v47 = *((_DWORD *)v40 + 26);
    v5[6] = v47;
    return 1LL;
  }
}
