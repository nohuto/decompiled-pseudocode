/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1406EFC20
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1403487A0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402526B0 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x1403D61F0 (swprintf_s.c)
 *     wcscpy_s @ 0x1403D7B70 (wcscpy_s.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1406111D0 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14065D3B0 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlNtStatusToDosError @ 0x14066C040 (RtlNtStatusToDosError.c)
 *     LocalConvertAclToString @ 0x1406EC584 (LocalConvertAclToString.c)
 *     SddlpAlloc @ 0x1406ED338 (SddlpAlloc.c)
 *     LocalGetStringForControl @ 0x1406EFF90 (LocalGetStringForControl.c)
 *     RtlGetControlSecurityDescriptor @ 0x1406F00C0 (RtlGetControlSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140738C50 (RtlGetGroupSecurityDescriptor.c)
 *     LocalGetStringForSid @ 0x140926130 (LocalGetStringForSid.c)
 *     SddlFilterSacl @ 0x140926858 (SddlFilterSacl.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

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
  int OwnerSecurityDescriptor; // eax
  unsigned int v10; // esi
  PSID v11; // r15
  PSID v12; // r12
  void *v13; // rdi
  __int16 v14; // bx
  unsigned int v15; // ebx
  int SaclSecurityDescriptor; // eax
  WORD v17; // bx
  char v18; // r14
  BOOLEAN v19; // cl
  PVOID v20; // rbx
  __int64 v21; // r15
  PVOID v22; // rdi
  PVOID v23; // r12
  __int64 v24; // rax
  wchar_t *v25; // rcx
  size_t v26; // r14
  __int64 v27; // rdi
  size_t v28; // rdx
  wchar_t *v29; // rcx
  wchar_t **v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  PVOID v34; // rax
  ULONG v35; // ebx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  size_t v41; // rdx
  wchar_t *v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // [rsp+20h] [rbp-91h]
  size_t Size; // [rsp+50h] [rbp-61h] BYREF
  PVOID v46; // [rsp+58h] [rbp-59h]
  PVOID v47; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  PVOID v49; // [rsp+70h] [rbp-41h]
  PACL Sacl; // [rsp+78h] [rbp-39h] BYREF
  PVOID v51; // [rsp+80h] [rbp-31h]
  PVOID v52; // [rsp+88h] [rbp-29h] BYREF
  wchar_t *Src; // [rsp+90h] [rbp-21h] BYREF
  PSID Owner; // [rsp+98h] [rbp-19h] BYREF
  PSID Group; // [rsp+A0h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp-9h] BYREF
  ULONG DaclDefaulted; // [rsp+100h] [rbp+4Fh] BYREF
  __int64 SaclPresent; // [rsp+108h] [rbp+57h] BYREF
  BOOLEAN DaclPresent; // [rsp+110h] [rbp+5Fh] BYREF
  WORD Control; // [rsp+118h] [rbp+67h] BYREF

  SaclPresent = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Owner = 0LL;
  OwnerSecurityDescriptor = 0;
  Group = 0LL;
  v10 = 0;
  Dacl = 0LL;
  v11 = 0LL;
  Sacl = 0LL;
  v12 = 0LL;
  v49 = 0LL;
  v13 = 0LL;
  LOBYTE(SaclPresent) = 0;
  DaclPresent = 0;
  v51 = 0LL;
  v46 = 0LL;
  v52 = 0LL;
  Src = 0LL;
  Control = 0;
  P = 0LL;
  v47 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v14 = a5;
  if ( (a5 & 1) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(a4, &Owner, (PBOOLEAN)&DaclDefaulted);
    if ( OwnerSecurityDescriptor < 0 )
      goto LABEL_68;
    v11 = Owner;
  }
  if ( (v14 & 2) != 0 )
  {
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(a4, &Group, (PBOOLEAN)&DaclDefaulted);
    v12 = Group;
  }
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  if ( (v14 & 4) != 0 )
    OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(a4, &DaclPresent, &Dacl, (PBOOLEAN)&DaclDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
    goto LABEL_68;
  v15 = v14 & 0x1F8;
  if ( v15 )
  {
    SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(a4, (PBOOLEAN)&SaclPresent, &Sacl, (PBOOLEAN)&DaclDefaulted);
    if ( SaclSecurityDescriptor < 0 )
      return RtlNtStatusToDosError(SaclSecurityDescriptor);
    v13 = Sacl;
    if ( (_BYTE)SaclPresent )
    {
      if ( Sacl )
      {
        SddlFilterSacl(Sacl, 0LL, &Size, v15);
        v34 = SddlpAlloc((unsigned int)Size);
        v49 = v34;
        if ( !v34 )
        {
          OwnerSecurityDescriptor = -1073741801;
          goto LABEL_68;
        }
        SddlFilterSacl(v13, v34, &Size, v15);
        v13 = v49;
      }
    }
  }
  OwnerSecurityDescriptor = RtlGetControlSecurityDescriptor(a4, &Control, &DaclDefaulted);
  if ( OwnerSecurityDescriptor < 0 )
  {
LABEL_68:
    v35 = RtlNtStatusToDosError(OwnerSecurityDescriptor);
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
    return v35;
  }
  if ( v11 )
  {
    StringForSid = LocalGetStringForSid(v11, v44, 1);
    if ( StringForSid )
      goto LABEL_46;
  }
  if ( v12 )
  {
    v36 = LocalGetStringForSid(v12, v44, 1);
    v12 = 0LL;
    StringForSid = v36;
    if ( v36 )
      goto LABEL_46;
  }
  v17 = Control;
  if ( Control )
  {
    StringForSid = LocalGetStringForControl(Control, 1LL, &P);
    if ( StringForSid )
      goto LABEL_46;
    StringForSid = LocalGetStringForControl(v17, 2LL, &v47);
    if ( StringForSid )
      goto LABEL_46;
  }
  v18 = SaclPresent;
  if ( (_BYTE)SaclPresent )
  {
    StringForSid = LocalConvertAclToString(
                     (__int64)v13,
                     SaclPresent,
                     0,
                     (__int64 *)&v52,
                     (unsigned int *)&Size,
                     (__int64)v12,
                     (__int64)v12,
                     (int)v12,
                     1);
    if ( StringForSid )
      goto LABEL_46;
    v10 = Size;
  }
  v19 = DaclPresent;
  if ( DaclPresent )
  {
    StringForSid = LocalConvertAclToString(
                     (__int64)Dacl,
                     DaclPresent,
                     1,
                     (__int64 *)&Src,
                     (unsigned int *)&Size,
                     (__int64)v12,
                     (__int64)v12,
                     (int)v12,
                     1);
    if ( StringForSid )
      goto LABEL_46;
    v10 += Size;
    v19 = DaclPresent;
  }
  v20 = v51;
  v21 = -1LL;
  if ( v51 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_WORD *)v51 + v37) != (_WORD)v12 );
    v10 += 2 * v37 + 4;
  }
  v22 = v46;
  if ( v46 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_WORD *)v46 + v38) != (_WORD)v12 );
    v10 += 2 * v38 + 4;
  }
  v23 = P;
  if ( v19 )
  {
    v10 += 4;
    if ( P )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *((_WORD *)P + v24) );
      v10 += 2 * v24;
    }
  }
  if ( v18 )
  {
    v10 += 4;
    if ( v47 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( *((_WORD *)v47 + v39) );
      v10 += 2 * v39;
    }
  }
  v25 = (wchar_t *)SddlpAlloc(v10 + 2LL);
  *a6 = v25;
  if ( !v25 )
  {
    StringForSid = 8;
    goto LABEL_47;
  }
  v26 = ((unsigned __int64)v10 + 2) >> 1;
  LODWORD(v27) = 0;
  if ( v20 )
  {
    LODWORD(v44) = 58;
    swprintf_s(v25, v26, L"%ws%wc%ws", L"O", v44, v20);
    v27 = -1LL;
    v25 = *a6;
    do
      ++v27;
    while ( v25[v27] );
  }
  if ( v46 )
  {
    LODWORD(v44) = 58;
    swprintf_s(&v25[(unsigned int)v27], v26 - (unsigned int)v27, L"%ws%wc%ws", L"G", v44, v46);
    v25 = *a6;
    v40 = -1LL;
    do
      ++v40;
    while ( (*a6)[(unsigned int)v27 + v40] );
    LODWORD(v27) = v40 + v27;
  }
  if ( DaclPresent )
  {
    v28 = v26 - (unsigned int)v27;
    v29 = &v25[(unsigned int)v27];
    LODWORD(v44) = 58;
    if ( v23 )
      swprintf_s(v29, v28, L"%ws%wc%ws", L"D", v44, v23);
    else
      swprintf_s(v29, v28, L"%ws%wc", L"D", v44);
    v30 = a6;
    v31 = -1LL;
    v25 = *a6;
    do
      ++v31;
    while ( (*a6)[(unsigned int)v27 + v31] );
    v27 = (unsigned int)(v31 + v27);
    if ( Src )
    {
      wcscpy_s(&v25[v27], v26 - (unsigned int)v27, Src);
      v25 = *v30;
      v32 = -1LL;
      do
        ++v32;
      while ( (*v30)[v27 + v32] );
      LODWORD(v27) = v32 + v27;
    }
  }
  else
  {
    v30 = a6;
  }
  if ( (_BYTE)SaclPresent )
  {
    v41 = v26 - (unsigned int)v27;
    v42 = &v25[(unsigned int)v27];
    LODWORD(v44) = 58;
    if ( v47 )
      swprintf_s(v42, v41, L"%ws%wc%ws", L"S", v44, v47);
    else
      swprintf_s(v42, v41, L"%ws%wc", L"S", v44);
    do
      ++v21;
    while ( (*v30)[(unsigned int)v27 + v21] );
    v43 = (unsigned int)(v21 + v27);
    if ( v52 )
      wcscpy_s(&(*v30)[v43], v26 - (unsigned int)v43, (const wchar_t *)v52);
  }
  if ( a7 )
    *a7 = v10 >> 1;
LABEL_46:
  v22 = v46;
LABEL_47:
  if ( v51 )
    ExFreePoolWithTag(v51, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v52 )
    ExFreePoolWithTag(v52, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  return StringForSid;
}
