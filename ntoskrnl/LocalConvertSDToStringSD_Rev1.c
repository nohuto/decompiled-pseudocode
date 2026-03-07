ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForSid; // r13d
  unsigned int v9; // edi
  PSID v10; // r15
  PSID v11; // r12
  PACL v12; // rsi
  __int16 v13; // bx
  int OwnerSecurityDescriptor; // eax
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  void *v17; // rax
  int v18; // edx
  int v19; // r8d
  unsigned __int16 v20; // bx
  char v21; // r14
  BOOLEAN v22; // cl
  PVOID v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rax
  PVOID v26; // rsi
  __int64 v27; // rax
  PVOID v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  wchar_t *v31; // rcx
  size_t v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  size_t v35; // rdx
  wchar_t *v36; // rcx
  wchar_t **v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  size_t v40; // rdx
  wchar_t *v41; // rcx
  ULONG v43; // ebx
  __int64 v44; // [rsp+20h] [rbp-91h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v46; // [rsp+58h] [rbp-59h]
  PVOID v47; // [rsp+60h] [rbp-51h] BYREF
  PVOID v48; // [rsp+68h] [rbp-49h] BYREF
  PVOID v49; // [rsp+70h] [rbp-41h]
  PACL Sacl; // [rsp+78h] [rbp-39h] BYREF
  PVOID P; // [rsp+80h] [rbp-31h]
  PVOID v52; // [rsp+88h] [rbp-29h] BYREF
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  unsigned __int16 v60; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Owner = 0LL;
  v9 = 0;
  Group = 0LL;
  v10 = 0LL;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  LODWORD(v12) = 0;
  v49 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  P = 0LL;
  v46 = 0LL;
  v52 = 0LL;
  Src = 0LL;
  v60 = 0;
  v48 = 0LL;
  v47 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v13 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
    v10 = Owner;
  }
  if ( (v13 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
    v11 = Group;
  }
  if ( (v13 & 4) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_94;
  }
  v15 = v13 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, &OwnerDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v12 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v17 = (void *)SddlpAlloc((unsigned int)Size);
        v49 = v17;
        if ( !v17 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_94;
        }
        SddlFilterSacl(v12, v17, &Size, v15);
        LODWORD(v12) = (_DWORD)v49;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &v60, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    if ( v10 )
    {
      StringForSid = LocalGetStringForSid(v10, v44, 1);
      if ( StringForSid )
        goto LABEL_74;
    }
    if ( v11 )
    {
      StringForSid = LocalGetStringForSid(v11, v44, 1);
      if ( StringForSid )
        goto LABEL_74;
    }
    v20 = v60;
    if ( v60 )
    {
      StringForSid = LocalGetStringForControl(v60, 1LL, &v48);
      if ( StringForSid )
        goto LABEL_74;
      StringForSid = LocalGetStringForControl(v20, 2LL, &v47);
      if ( StringForSid )
        goto LABEL_74;
    }
    v21 = SaclPresent;
    if ( (_BYTE)SaclPresent )
    {
      LOBYTE(v18) = SaclPresent;
      StringForSid = LocalConvertAclToString((_DWORD)v12, v18, 0, (unsigned int)&v52, (__int64)&Size, 0LL, 0LL, 0, 1);
      if ( StringForSid )
        goto LABEL_74;
      v9 = Size;
    }
    v22 = DaclPresent;
    if ( DaclPresent )
    {
      LOBYTE(v18) = DaclPresent;
      LOBYTE(v19) = 1;
      StringForSid = LocalConvertAclToString((_DWORD)Dacl, v18, v19, (unsigned int)&Src, (__int64)&Size, 0LL, 0LL, 0, 1);
      if ( StringForSid )
        goto LABEL_74;
      v9 += Size;
      v22 = DaclPresent;
    }
    v23 = P;
    v24 = -1LL;
    if ( P )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *((_WORD *)P + v25) );
      v9 += 2 * v25 + 4;
    }
    v26 = v46;
    if ( v46 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *((_WORD *)v46 + v27) );
      v9 += 2 * v27 + 4;
    }
    v28 = v48;
    if ( v22 )
    {
      v9 += 4;
      if ( v48 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( *((_WORD *)v48 + v29) );
        v9 += 2 * v29;
      }
    }
    if ( v21 )
    {
      v9 += 4;
      if ( v47 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( *((_WORD *)v47 + v30) );
        v9 += 2 * v30;
      }
    }
    v31 = (wchar_t *)SddlpAlloc(v9 + 2LL);
    *a6 = v31;
    if ( !v31 )
    {
      StringForSid = 8;
      goto LABEL_75;
    }
    v32 = ((unsigned __int64)v9 + 2) >> 1;
    LODWORD(v33) = 0;
    if ( v23 )
    {
      LODWORD(v44) = 58;
      swprintf_s(v31, v32, L"%ws%wc%ws", L"O", v44, v23);
      v33 = -1LL;
      v31 = *a6;
      do
        ++v33;
      while ( v31[v33] );
    }
    if ( v46 )
    {
      LODWORD(v44) = 58;
      swprintf_s(&v31[(unsigned int)v33], v32 - (unsigned int)v33, L"%ws%wc%ws", L"G", v44, v46);
      v31 = *a6;
      v34 = -1LL;
      do
        ++v34;
      while ( (*a6)[(unsigned int)v33 + v34] );
      LODWORD(v33) = v34 + v33;
    }
    if ( DaclPresent )
    {
      v35 = v32 - (unsigned int)v33;
      v36 = &v31[(unsigned int)v33];
      LODWORD(v44) = 58;
      if ( v28 )
        swprintf_s(v36, v35, L"%ws%wc%ws", L"D", v44, v28);
      else
        swprintf_s(v36, v35, L"%ws%wc", L"D", v44);
      v37 = a6;
      v38 = -1LL;
      v31 = *a6;
      do
        ++v38;
      while ( (*a6)[(unsigned int)v33 + v38] );
      v33 = (unsigned int)(v38 + v33);
      if ( Src )
      {
        wcscpy_s(&v31[v33], v32 - (unsigned int)v33, Src);
        v31 = *v37;
        v39 = -1LL;
        do
          ++v39;
        while ( (*v37)[v33 + v39] );
        LODWORD(v33) = v39 + v33;
      }
    }
    else
    {
      v37 = a6;
    }
    if ( (_BYTE)SaclPresent )
    {
      v40 = v32 - (unsigned int)v33;
      v41 = &v31[(unsigned int)v33];
      LODWORD(v44) = 58;
      if ( v47 )
        swprintf_s(v41, v40, L"%ws%wc%ws", L"S", v44, v47);
      else
        swprintf_s(v41, v40, L"%ws%wc", L"S", v44);
      do
        ++v24;
      while ( (*v37)[(unsigned int)v33 + v24] );
      if ( v52 )
        wcscpy_s(&(*v37)[(unsigned int)(v24 + v33)], v32 - (unsigned int)(v24 + v33), (const wchar_t *)v52);
    }
    if ( a7 )
      *a7 = v9 >> 1;
LABEL_74:
    v26 = v46;
LABEL_75:
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v52 )
      ExFreePoolWithTag(v52, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v47 )
      ExFreePoolWithTag(v47, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
    return StringForSid;
  }
LABEL_94:
  v43 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  return v43;
}
