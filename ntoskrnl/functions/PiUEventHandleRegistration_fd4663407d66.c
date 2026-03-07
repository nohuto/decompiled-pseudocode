__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _QWORD *inited; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  _QWORD *v12; // r14
  size_t v13; // r11
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rdx
  char **v18; // rax
  int v20; // ecx
  __int64 v21; // r9
  int v22; // ecx
  char *v23; // rax
  char **v24; // rcx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rcx
  char **v29; // rax
  int Object; // eax
  unsigned int v31; // eax
  char *v32; // rcx
  char **v33; // rax
  __int64 v34; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v35[6]; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v34 = 0LL;
  v35[0] = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_66;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_66:
    inited = 0LL;
    goto LABEL_23;
  }
  inited[6] = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v8 < 0 )
    goto LABEL_50;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_50;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_50;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_50;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_50;
  v12 = (_QWORD *)(a2 + 536);
  if ( v10 == 1 && ((*v12 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_50;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_50;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v13, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_50;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v14 = *(_DWORD *)(a2 + 528);
  if ( !v14 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 3) = *(_OWORD *)v12;
    goto LABEL_17;
  }
  v20 = v14 - 1;
  if ( v20 )
  {
    v25 = v20 - 1;
    if ( !v25 || v25 == 1 )
    {
      if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
      {
        Object = PiDmGetObject(1LL, a2 + 536, inited + 3, v9);
        v8 = Object;
        if ( Object < 0 )
          goto LABEL_51;
      }
      goto LABEL_17;
    }
LABEL_50:
    v8 = -1073741811;
    goto LABEL_51;
  }
  if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v12, &v34, v35) < 0 )
    goto LABEL_50;
  v8 = PiDmGetObject(1LL, *(_QWORD *)(v34 + 8), inited + 3, v21);
  if ( v8 < 0 )
    goto LABEL_51;
  inited[4] = v35[0];
  *((_BYTE *)inited + 40) = 0;
LABEL_17:
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(a5 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(a2 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v16 = 13;
    else
      v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
    v18 = (char **)*((_QWORD *)v17 + 1);
    if ( *v18 == v17 )
    {
      ++PiUEventDevInterfaceClientCount;
      *inited = v17;
      inited[1] = v18;
      *v18 = (char *)inited;
      *((_QWORD *)v17 + 1) = inited;
      goto LABEL_22;
    }
LABEL_64:
    __fastfail(3u);
  }
  v22 = v15 - 1;
  if ( v22 )
  {
    v26 = v22 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v31 = 13;
        else
          v31 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v32 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v31;
        v33 = (char **)*((_QWORD *)v32 + 1);
        if ( *v33 != v32 )
          goto LABEL_64;
        ++PiUEventDevInstancePropertyClientCount;
        *inited = v32;
        inited[1] = v33;
        *v33 = (char *)inited;
        *((_QWORD *)v32 + 1) = inited;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
        v27 = 13;
      else
        v27 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
      v28 = (char *)&PiUEventDevInstanceClientList + 16 * v27;
      v29 = (char **)*((_QWORD *)v28 + 1);
      if ( *v29 != v28 )
        goto LABEL_64;
      ++PiUEventDevInstanceClientCount;
      *inited = v28;
      inited[1] = v29;
      *v29 = (char *)inited;
      *((_QWORD *)v28 + 1) = inited;
    }
  }
  else
  {
    v23 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(inited[3] + 16LL));
    v24 = (char **)*((_QWORD *)v23 + 1);
    if ( *v24 != v23 )
      goto LABEL_64;
    ++PiUEventDevHandleClientCount;
    *inited = v23;
    inited[1] = v24;
    *v24 = (char *)inited;
    *((_QWORD *)v23 + 1) = inited;
  }
LABEL_22:
  ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  if ( v8 < 0 )
  {
LABEL_51:
    PiUEventFreeClientRegistrationContext(inited);
    goto LABEL_66;
  }
LABEL_23:
  *(_QWORD *)(a1 + 32) = inited;
  return (unsigned int)v8;
}
