__int64 ExpSetPendingUILanguage()
{
  unsigned __int64 v0; // rbp
  char v1; // r12
  char v2; // si
  __int64 v3; // rdx
  int v4; // ecx
  __int64 result; // rax
  NTSTATUS Key; // ebx
  int InstallUILanguage; // ebx
  int v8; // eax
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // edx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  ULONG v18; // ebx
  unsigned int v19; // ecx
  void *v20; // rbx
  void *v21; // rcx
  ULONG v22; // ebx
  NTSTATUS v23; // esi
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r15
  void *v27; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rax
  char v30; // [rsp+60h] [rbp+0h] BYREF

  v0 = (unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v0 + 60) = 0;
  *(_DWORD *)(v0 + 84) = 0;
  *(_OWORD *)(v0 + 40) = 0LL;
  *(_OWORD *)(v0 + 104) = 0LL;
  *(_OWORD *)(v0 + 144) = 0LL;
  *(_QWORD *)(v0 + 120) = 0LL;
  *(_QWORD *)(v0 + 24) = 0LL;
  memset((void *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 416), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  v1 = 1;
  *(_BYTE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
  v2 = 0;
  *(_BYTE *)v0 = 0;
  result = OpenGlobalizationUserSettingsKey(v4, v3, (HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 120));
  if ( (int)result < 0 )
    return result;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"Control Panel\\Desktop");
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x78);
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  Key = ZwOpenKey((PHANDLE)(v0 + 136), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56));
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
  if ( Key < 0 )
    goto LABEL_23;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"PreferredUILanguagesPending");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
         (PUNICODE_STRING)(v0 + 104),
         KeyValuePartialInformation,
         (PVOID)(v0 + 160),
         0x100u,
         (PULONG)(v0 + 8)) >= 0 )
  {
    v18 = *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8);
    if ( v18 >= 4 && *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA4) == 7 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"PreferredUILanguages");
      if ( ZwSetValueKey(
             *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
             (PUNICODE_STRING)(v0 + 104),
             0,
             7u,
             (PVOID)(v0 + 172),
             v18) >= 0 )
      {
        v2 = 1;
        *(_BYTE *)v0 = 1;
        v19 = *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8);
        if ( v19 + 12 < 0x100 )
        {
          *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xAA + 2 * ((unsigned __int64)v19 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"PreferredUILanguagesPending");
          ZwDeleteValueKey(
            *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
            (PUNICODE_STRING)(v0 + 104));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 144), (PCWSTR)(v0 + 172));
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"Control Panel\\Desktop\\LanguageConfigurationPending");
          *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
          *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x78);
          *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
          *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 40;
          *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
          if ( ZwOpenKey((PHANDLE)(v0 + 128), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56)) >= 0
            && ZwQueryValueKey(
                 *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
                 (PUNICODE_STRING)(v0 + 144),
                 KeyValuePartialInformation,
                 (PVOID)(v0 + 608),
                 0x210u,
                 (PULONG)(v0 + 8)) >= 0
            && *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x264) == 7 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"Control Panel\\Desktop\\LanguageConfiguration");
            *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
            *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x78);
            *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
            *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 40;
            *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
            if ( ZwCreateKey((PHANDLE)(v0 + 24), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56), 0, 0LL, 0, 0LL) >= 0 )
            {
              if ( ZwSetValueKey(
                     *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                     (PUNICODE_STRING)(v0 + 144),
                     0,
                     7u,
                     (PVOID)(v0 + 620),
                     *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x268)) >= 0 )
                ZwDeleteValueKey(
                  *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80),
                  (PUNICODE_STRING)(v0 + 144));
              ZwClose(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
            }
          }
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x78);
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  ZwOpenKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56));
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v0 + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v0 + 24), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
  {
    v20 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v20 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"MachinePreferredUILanguages");
      ZwDeleteValueKey(v20, (PUNICODE_STRING)(v0 + 104));
    }
    goto LABEL_15;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"PreferredUILanguages");
  if ( ZwQueryValueKey(
         *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
         (PUNICODE_STRING)(v0 + 104),
         KeyValuePartialInformation,
         (PVOID)(v0 + 160),
         0x100u,
         (PULONG)(v0 + 8)) < 0
    || *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) < 4u
    || *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA4) != 7 )
  {
    *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 0;
    InstallUILanguage = NtQueryInstallUILanguage(v0 + 4);
    if ( InstallUILanguage >= 0 )
    {
      v8 = DownLevelLangIDToLanguageName(
             *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4),
             (unsigned __int16 *)(v0 + 172),
             128,
             0);
      *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = v8;
      if ( !v8 )
      {
        InstallUILanguage = -1073741823;
        goto LABEL_57;
      }
      *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 2 * v8;
    }
    if ( InstallUILanguage >= 0 )
      goto LABEL_10;
LABEL_57:
    DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
    v21 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v21 )
      ZwDeleteValueKey(v21, (PUNICODE_STRING)(v0 + 104));
    goto LABEL_14;
  }
LABEL_10:
  if ( *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    goto LABEL_12;
  RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"Control Panel\\Desktop\\MuiCached");
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 0x78);
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  Key = ZwCreateKey((PHANDLE)(v0 + 16), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56), 0, 0LL, 1u, 0LL);
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
  if ( Key >= 0 )
  {
LABEL_12:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), L"MachinePreferredUILanguages");
    if ( ZwSetValueKey(
           *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           (PUNICODE_STRING)(v0 + 104),
           0,
           7u,
           (PVOID)(v0 + 172),
           *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8)) < 0 )
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
LABEL_14:
    ZwClose(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
LABEL_15:
    RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"MachineLanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 0x10);
    *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 40;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56)) >= 0 )
    {
      v22 = 0;
      do
      {
        memset((void *)(v0 + 160), 0, 0x100uLL);
        v23 = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                v22,
                KeyValueBasicInformation,
                (PVOID)(v0 + 160),
                0xFEu,
                (PULONG)(v0 + 8));
        if ( v23 >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), (PCWSTR)(v0 + 172));
          if ( ZwDeleteValueKey(
                 *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
                 (PUNICODE_STRING)(v0 + 104)) < 0 )
          {
            DbgPrint(
              "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
              (const wchar_t *)(v0 + 172));
            ++v22;
          }
        }
      }
      while ( v23 >= 0 );
    }
    RtlInitUnicodeString(
      (PUNICODE_STRING)(v0 + 40),
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
    *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
    *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 40;
    *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
    if ( ZwOpenKey((PHANDLE)(v0 + 24), 0x80000000, (POBJECT_ATTRIBUTES)(v0 + 56)) < 0 )
    {
      Key = 0;
      *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    }
    else
    {
      v9 = 0;
      do
      {
        v10 = v9;
        memset((void *)(v0 + 608), 0, 0x210uLL);
        v11 = v9++;
        Key = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                v11,
                KeyValueFullInformation,
                (PVOID)(v0 + 608),
                0x20Eu,
                (PULONG)(v0 + 8));
        *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
        if ( Key >= 0 )
        {
          v24 = *(unsigned int *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x270);
          if ( (unsigned __int64)(v24 + 24) <= 0x210
            && (v25 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x268),
                v26 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x26C),
                (unsigned int)(v25 + v26) <= 0x210)
            && *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x264) == 7
            && *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x270) < 0xAAu )
          {
            memset((void *)(v0 + 416), 0, 0xAAuLL);
            memmove((void *)(v0 + 416), (const void *)(v0 + 628), (unsigned int)v24);
            RtlInitUnicodeString((PUNICODE_STRING)(v0 + 104), (PCWSTR)(v0 + 416));
            v27 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
            if ( !v27 )
            {
              RtlInitUnicodeString((PUNICODE_STRING)(v0 + 40), L"MachineLanguageConfiguration");
              *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
              *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 0x10);
              *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 1600;
              *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 40;
              *(_OWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
              Key = ZwCreateKey((PHANDLE)(v0 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v0 + 56), 0, 0LL, 1u, 0LL);
              *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
              if ( Key < 0 )
                goto LABEL_21;
              *(_BYTE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
              v27 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              v26 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x26C);
              v25 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x268);
            }
            Key = ZwSetValueKey(v27, (PUNICODE_STRING)(v0 + 104), 0, 7u, (PVOID)((unsigned int)v25 + v0 + 608), v26);
            *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
            if ( Key < 0 )
            {
              DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v0 + 416));
              Key = 0;
              *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
            }
          }
          else
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v10);
          }
        }
      }
      while ( Key >= 0 );
      ZwClose(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
LABEL_21:
      v1 = *(_BYTE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    }
    v2 = *(_BYTE *)v0;
  }
LABEL_23:
  v12 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
  if ( v12 )
    ZwClose(v12);
  v13 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
  if ( v13 )
  {
    if ( ZwEnumerateValueKey(v13, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 8)) == -2147483622 )
      ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80));
    ZwClose(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80));
  }
  if ( *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
  {
    v14 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    if ( !v14 || v1 && ZwEnumerateValueKey(v14, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v0 + 8)) == -2147483622 )
    {
      v15 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( v15 )
        ZwDeleteKey(v15);
      if ( ZwEnumerateValueKey(
             *(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
             0,
             KeyValueBasicInformation,
             0LL,
             0,
             (PULONG)(v0 + 8)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
    }
    ZwClose(*(HANDLE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
  }
  v16 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( v16 )
    ZwClose(v16);
  v17 = *(void **)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
  if ( v17 )
    ZwClose(v17);
  if ( v2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1530] = 0;
  }
  return (unsigned int)Key;
}
