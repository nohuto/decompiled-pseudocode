__int64 __fastcall MiResolveImageReferences(__int64 a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4, int a5)
{
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  unsigned int *v7; // r12
  char v8; // di
  UNICODE_STRING *v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  UNICODE_STRING *v12; // r14
  int ImportDll; // ebx
  const char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _LIST_ENTRY *CurrentApiSetSchema; // rax
  _QWORD *v18; // rsi
  PVOID *v19; // rbx
  __int64 v20; // r15
  unsigned int v21; // ecx
  __int64 v22; // rax
  _QWORD *v23; // rdi
  int v24; // esi
  _QWORD *v25; // rbx
  __int64 v27; // rax
  unsigned int v28; // edi
  UNICODE_STRING *p_String2; // rdi
  unsigned int v30; // esi
  __int64 v31; // rax
  ULONG_PTR v32; // rcx
  char v33; // [rsp+38h] [rbp-91h]
  char v34; // [rsp+39h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-8Dh]
  __int64 v36; // [rsp+40h] [rbp-89h]
  UNICODE_STRING *p_String1; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-71h] BYREF
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-51h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-41h] BYREF
  __int64 v43; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING String2; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v48; // [rsp+130h] [rbp+67h]

  v48 = a2;
  v45[0] = 3932218LL;
  *(_QWORD *)&String2.Length = 1441812LL;
  *(_QWORD *)&String1.Length = 0LL;
  v41[0] = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v45[1] = L"\\SystemRoot\\System32\\drivers\\";
  *(_QWORD *)(a1 + 136) = -2LL;
  String2.Buffer = L"ksrext.sys";
  v43 = 0LL;
  LOBYTE(a2) = 1;
  v34 = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  StringIn = 0LL;
  v6 = (unsigned int *)RtlImageDirectoryEntryToData(v5, a2, 1, (int)&v38);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v33 = 0;
  p_String1 = 0LL;
  v8 = 0;
  v36 = 0LL;
  v9 = 0LL;
  v35 = 0;
  v10 = 0;
  String1.Buffer = 0LL;
  v11 = MiPrepareImportList(v6, (__int64 *)&p_String1);
  v12 = p_String1;
  ImportDll = v11;
  if ( v11 < 0 )
  {
LABEL_59:
    v27 = 0LL;
    goto LABEL_60;
  }
  while ( 1 )
  {
    if ( !v7[3] || !*v7 )
    {
      v25 = MiCompressImportList(v12, 1);
      if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
        MiSessionLookupImage(v5)[11] = v25;
      else
        *(_QWORD *)(a1 + 136) = v25;
      return 0LL;
    }
    v14 = (const char *)(v5 + v7[3]);
    v9 = 0LL;
    RtlInitAnsiString(&DestinationString, v14);
    ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( ImportDll < 0 )
      goto LABEL_87;
    if ( !UnicodeString.Buffer )
      goto LABEL_86;
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema(v16, v15);
    ImportDll = ApiSetResolveToHost((__int64)CurrentApiSetSchema, &UnicodeString.Length, v48, &v34, (__int64)&StringIn);
    if ( ImportDll < 0 )
      goto LABEL_87;
    if ( v34 )
    {
      RtlFreeUnicodeString(&UnicodeString);
      if ( !StringIn.Length )
        goto LABEL_6;
      v38 = 0x80000000;
      v18 = v45;
      ImportDll = RtlDuplicateUnicodeString(0, &StringIn, &UnicodeString);
      v27 = 0LL;
      if ( ImportDll < 0 )
        goto LABEL_90;
    }
    else
    {
      v18 = a3;
      v38 = 0;
    }
    if ( !a4
      || !strnicmp(v14, "ntoskrnl", 8uLL)
      || !strnicmp(v14, "hal", 3uLL)
      || !RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
    {
      String1 = UnicodeString;
    }
    else
    {
      String1.MaximumLength = a4->Length + UnicodeString.Length;
      String1.Buffer = (wchar_t *)MiAllocatePool(256, String1.MaximumLength, 0x54446D4Du);
      if ( !String1.Buffer )
        goto LABEL_86;
      String1.Length = 0;
      RtlAppendUnicodeStringToString(&String1, a4);
      RtlAppendUnicodeStringToString(&String1, &UnicodeString);
      v33 = 1;
    }
    v19 = (PVOID *)PsLoadedModuleList;
    p_String1 = &String1;
    while ( 1 )
    {
      if ( v19 == &PsLoadedModuleList )
        goto LABEL_40;
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v19 + 11), 1u) )
        break;
      v19 = (PVOID *)*v19;
    }
    v20 = (__int64)v19[6];
    if ( !v20 )
      break;
    if ( (*((_DWORD *)v19 + 49) & 0x20) != 0 )
    {
      ImportDll = -1073740608;
LABEL_84:
      v9 = p_String1;
      goto LABEL_87;
    }
    if ( ((_DWORD)v19[13] & 0x1000) == 0 )
    {
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v19[6]) == 1 )
      {
        v20 &= -(__int64)((unsigned int)MiSessionReferenceImage(v20) != 0);
        if ( !v20 )
          break;
      }
      else if ( v19[17] != (PVOID)1 )
      {
        ++*((_WORD *)v19 + 54);
      }
    }
LABEL_26:
    if ( ((_DWORD)v19[13] & 0x1000) == 0 && v19[17] != (PVOID)1 )
    {
      v21 = v35;
      *((_QWORD *)&v12->Buffer + v35) = v19;
      v35 = v21 + 1;
    }
    v22 = *v7;
    if ( (_DWORD)v22 )
    {
      v23 = (_QWORD *)(v22 + v5);
      v24 = v5 + v7[4];
      while ( *v23 )
      {
        ImportDll = MiSnapThunk(v20, v5, (_DWORD)v23, v24, 0LL);
        if ( ImportDll < 0 )
        {
          v27 = MiSnapUnresolvedImport(v5, v23, v20);
          goto LABEL_89;
        }
        ++v23;
        v24 += 8;
      }
    }
    RtlFreeUnicodeString(&UnicodeString);
    if ( v33 )
    {
      ExFreePoolWithTag(String1.Buffer, 0);
      v33 = 0;
    }
LABEL_6:
    v7 += 5;
  }
LABEL_40:
  if ( a5 )
  {
    ImportDll = -1073740945;
    goto LABEL_84;
  }
  if ( !(unsigned int)MiFormFullImageName(v18, &UnicodeString, &StringIn) )
    goto LABEL_85;
  v28 = v38;
  ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v38, (unsigned int)v41, (__int64)&v43);
  if ( ImportDll == -1073741800 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    {
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v28 | 1, (unsigned int)v41, (__int64)&v43);
      goto LABEL_43;
    }
LABEL_44:
    ExFreePoolWithTag(StringIn.Buffer, 0);
    v27 = 0LL;
    if ( ImportDll < 0 )
    {
LABEL_89:
      v9 = p_String1;
LABEL_90:
      v8 = v33;
      v10 = v35;
      goto LABEL_60;
    }
    v19 = (PVOID *)v41[0];
    v20 = *(_QWORD *)(v41[0] + 48LL);
    goto LABEL_26;
  }
LABEL_43:
  if ( ImportDll != -1073741772 )
    goto LABEL_44;
  ExFreePoolWithTag(StringIn.Buffer, 0);
  if ( v18 != v45 )
  {
    if ( !(unsigned int)MiFormFullImageName(v45, &UnicodeString, &StringIn) )
    {
      v9 = p_String1;
      ImportDll = -1073741670;
      v8 = v33;
      v10 = v35;
      goto LABEL_59;
    }
    goto LABEL_78;
  }
  if ( !v34 )
  {
    ImportDll = -1073741772;
    goto LABEL_84;
  }
  if ( (unsigned int)MiFormFullImageName(a3, &UnicodeString, &StringIn) )
  {
LABEL_78:
    ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v28, (unsigned int)v41, (__int64)&v43);
    if ( v34 && ImportDll == -1073741800 && (unsigned int)MiGetSystemRegionType(v5) == 1 )
      ImportDll = MiLoadImportDll((unsigned int)&StringIn, (_DWORD)a4, v28 | 1, (unsigned int)v41, (__int64)&v43);
    goto LABEL_44;
  }
LABEL_85:
  v9 = p_String1;
LABEL_86:
  ImportDll = -1073741670;
LABEL_87:
  v8 = v33;
  v10 = v35;
  v27 = v36;
LABEL_60:
  MiLogFailedDriverLoad(v48, v9, v27, (unsigned int)ImportDll);
  if ( v8 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v12 )
  {
    if ( v10 != *(_QWORD *)&v12->Length )
      *(_QWORD *)&v12->Length = v10;
    p_String2 = v12;
    String2 = 0LL;
    if ( v12 != (UNICODE_STRING *)1 && v12 != (UNICODE_STRING *)-2LL )
    {
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        *(_QWORD *)&String2.Length = 1LL;
        p_String2 = &String2;
        String2.Buffer = (wchar_t *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL);
      }
      v30 = 0;
      if ( *(_QWORD *)&p_String2->Length )
      {
        v31 = 0LL;
        do
        {
          v32 = *((_QWORD *)&p_String2->Buffer + v31);
          if ( !v32 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v32) )
            break;
          v31 = ++v30;
        }
        while ( (unsigned __int64)v30 < *(_QWORD *)&p_String2->Length );
      }
    }
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)ImportDll;
}
