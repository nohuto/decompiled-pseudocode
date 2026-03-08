/*
 * XREFs of AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14066D780 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlGetAce @ 0x140245EE0 (RtlGetAce.c)
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1402C0D20 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     StringCchPrintfW @ 0x1402FAA78 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AdtpFormatPrefix @ 0x14066EAE4 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x14066EC40 (StringCchPrintfExW.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1406DB760 (RtlAddAce.c)
 *     RtlIntegerToUnicodeString @ 0x1407805C0 (RtlIntegerToUnicodeString.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140A57DA0 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildAccessesString @ 0x140A58C90 (AdtpBuildAccessesString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        _BYTE *a12)
{
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // esi
  NTSTATUS DaclSecurityDescriptor; // ebx
  int v19; // edx
  int v20; // edi
  ULONG v21; // ebx
  unsigned __int16 v22; // bx
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // ebx
  UNICODE_STRING *p_Source; // rdx
  const UNICODE_STRING *v28; // rdx
  ULONG v29; // esi
  PACL v30; // r14
  unsigned __int16 *v31; // r15
  ULONG v32; // ebx
  ACL *Pool2; // rax
  ACL *v34; // rsi
  int v35; // eax
  PACL v36; // r12
  UNICODE_STRING *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rcx
  unsigned int v40; // ecx
  __int16 v41; // bx
  UNICODE_STRING *v42; // rdx
  unsigned int v43; // ebx
  const UNICODE_STRING *v44; // rdx
  NTSTATUS appended; // eax
  size_t Length; // r14
  __int64 v47; // r15
  __int16 v48; // si
  char *v49; // rdi
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  __int16 v52; // si
  __int64 v54; // [rsp+30h] [rbp-D0h]
  BOOLEAN DaclPresent[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v57; // [rsp+68h] [rbp-98h]
  PVOID Ace[2]; // [rsp+70h] [rbp-90h] BYREF
  PACL Dacl; // [rsp+80h] [rbp-80h] BYREF
  BOOLEAN DaclDefaulted[8]; // [rsp+88h] [rbp-78h] BYREF
  size_t pcchRemaining; // [rsp+90h] [rbp-70h] BYREF
  int v62; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v63; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v64; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v65; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v67; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v68; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v69; // [rsp+100h] [rbp+0h] BYREF
  void *Src[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  wchar_t pszFormat[8]; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING v74; // [rsp+140h] [rbp+40h] BYREF
  int v75; // [rsp+150h] [rbp+50h]
  wchar_t pszDest[8]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+180h] [rbp+80h]
  char v79; // [rsp+188h] [rbp+88h] BYREF
  char v80; // [rsp+1A0h] [rbp+A0h] BYREF
  char v81; // [rsp+1C0h] [rbp+C0h] BYREF
  char v82; // [rsp+1E0h] [rbp+E0h] BYREF
  char v83; // [rsp+200h] [rbp+100h] BYREF
  char v84; // [rsp+220h] [rbp+120h] BYREF
  char v85; // [rsp+240h] [rbp+140h] BYREF
  char v86; // [rsp+260h] [rbp+160h] BYREF

  v72 = a8;
  v71 = a12;
  v15 = 0;
  pcchRemaining = a4;
  v16 = 1;
  DaclPresent[0] = 0;
  *(_DWORD *)(&v63.MaximumLength + 1) = 0;
  v17 = 0;
  *(_DWORD *)(&v67.MaximumLength + 1) = 0;
  *(_DWORD *)(&v68.MaximumLength + 1) = 0;
  *(_DWORD *)(&v69.MaximumLength + 1) = 0;
  HIDWORD(Ace[0]) = 0;
  *(_DWORD *)(&v65.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  *(_DWORD *)(&v74.MaximumLength + 1) = 0;
  Dacl = 0LL;
  *(_QWORD *)pszFormat = 0LL;
  *(_OWORD *)Src = 0LL;
  Destination = 0LL;
  v64 = 0LL;
  while ( (v16 & a5) == 0 )
  {
    ++v15;
    v16 *= 2;
    if ( v15 >= 0x20 )
      goto LABEL_6;
  }
  v17 = v15;
LABEL_6:
  *(_DWORD *)&v74.Length = 1310720;
  v74.Buffer = (wchar_t *)&v79;
  *(_DWORD *)&v63.Length = 1966080;
  v63.Buffer = (wchar_t *)&v80;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v63, 0x709u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  *(_DWORD *)&v67.Length = 1966080;
  v67.Buffer = (wchar_t *)&v81;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v67, 0x70Au);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  *(_DWORD *)&v68.Length = 1966080;
  v68.Buffer = (wchar_t *)&v82;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v68, 0x713u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  *(_DWORD *)&v69.Length = 1966080;
  v69.Buffer = (wchar_t *)&v83;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v69, 0x714u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  LODWORD(Ace[0]) = 1966080;
  Ace[1] = &v84;
  DaclSecurityDescriptor = AdtpFormatPrefix((PUNICODE_STRING)Ace, 0x712u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  *(_DWORD *)&v65.Length = 1966080;
  v65.Buffer = (wchar_t *)&v85;
  DaclSecurityDescriptor = AdtpFormatPrefix(&v65, 0x716u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  *(_DWORD *)&Source.Length = 1966080;
  Source.Buffer = (wchar_t *)&v86;
  DaclSecurityDescriptor = AdtpFormatPrefix(&Source, 0x718u);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  DaclSecurityDescriptor = AdtpBuildAccessesString(
                             a1,
                             a2,
                             a5,
                             2,
                             (PUNICODE_STRING)Src,
                             0LL,
                             0LL,
                             0LL,
                             (__int64)DaclPresent);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  v57 = (unsigned __int16)Src[0];
  v62 = LOWORD(Src[0]) >> 1;
  v19 = *(_DWORD *)(a7 + 4LL * v17);
  v20 = v19 & 0xFF0000;
  if ( (v19 & 0xFF0000u) > 0x200000 )
  {
    switch ( v20 )
    {
      case 3145728:
        v21 = 1803;
        break;
      case 4194304:
        v21 = 1804;
        break;
      case 5242880:
        v21 = 1806;
        break;
      case 6291456:
        v21 = 1807;
        break;
      case 7340032:
        v21 = 1808;
        break;
      case 8388608:
        v21 = 1805;
        break;
      case 9437184:
        v21 = 1841;
        break;
      case 10485760:
        v21 = 1856;
        break;
      default:
        goto LABEL_107;
    }
LABEL_102:
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 78LL, 1799447891LL);
    if ( !Destination.Buffer )
      goto LABEL_103;
    *(_DWORD *)&Destination.Length = 5111808;
    RtlAppendUnicodeToString(&Destination, L"%%");
    DaclSecurityDescriptor = RtlIntegerToUnicodeString(v21, 0xAu, &v74);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_119;
    v28 = &v74;
    goto LABEL_106;
  }
  if ( v20 == 0x200000 )
  {
LABEL_79:
    *(_QWORD *)pszFormat = (unsigned __int16)v19;
    v74.Buffer = (wchar_t *)(unsigned __int16)v19;
    wcscpy(&v74.Length, L"\x01");
    *(_DWORD *)(&v74.MaximumLength + 1) = 1;
    v75 = 0;
    DaclSecurityDescriptor = AdtpBuildPrivilegeAuditString(&v74, &v64, 0LL, 0LL);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_119;
    v43 = (v64.Length >> 1) + 27;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2LL * v43, 1799447891LL);
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v43;
      if ( v20 == 0x200000 )
        v44 = &v63;
      else
        v44 = (const UNICODE_STRING *)Ace;
      RtlAppendUnicodeStringToString(&Destination, v44);
      RtlAppendUnicodeStringToString(&Destination, &v64);
      if ( v64.Buffer )
      {
        ExFreePoolWithTag(v64.Buffer, 0);
        v64.Buffer = 0LL;
      }
      goto LABEL_107;
    }
LABEL_103:
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_119;
  }
  if ( !v20 )
  {
    v21 = 1809;
    goto LABEL_102;
  }
  if ( v20 != 0x10000 && v20 != 0x20000 && v20 != 196608 && v20 != 0x40000 )
  {
    if ( v20 != 327680 && v20 != 393216 )
    {
      if ( v20 != 458752 )
      {
        if ( v20 != 0x100000 )
          goto LABEL_107;
        goto LABEL_79;
      }
      v21 = 1830;
      goto LABEL_102;
    }
    v22 = 2;
    wcscpy(pszFormat, L"# %d");
    Ace[0] = (PVOID)131074;
    Ace[1] = (PVOID)L"-";
    if ( v20 == 393216 )
    {
      v25 = *(_DWORD *)(pcchRemaining + 8);
      if ( !v25 )
        goto LABEL_36;
      if ( (unsigned __int16)v19 < v25 )
      {
        v24 = *(_QWORD *)(pcchRemaining + 16);
        goto LABEL_35;
      }
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 8);
      if ( !v23 )
        goto LABEL_36;
      if ( (unsigned __int16)v19 < v23 )
      {
        v24 = *(_QWORD *)(a3 + 16);
LABEL_35:
        *(_OWORD *)Ace = *(_OWORD *)(v24 + 16LL * (unsigned __int16)v19);
        v22 = (unsigned __int16)Ace[0];
LABEL_36:
        if ( v22 <= 2u )
        {
          LODWORD(v54) = (unsigned __int16)v19;
          pcchRemaining = 0LL;
          if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v54) >= 0 )
          {
            WORD1(Ace[0]) = 40;
            v22 = 2 * (20 - pcchRemaining);
            LOWORD(Ace[0]) = v22;
            Ace[1] = pszDest;
          }
        }
        v26 = v22 + 54;
        Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, v26, 1799447891LL);
        if ( !Destination.Buffer )
          goto LABEL_103;
        Destination.Length = 0;
        Destination.MaximumLength = 2 * v26;
        if ( v20 == 327680 )
          p_Source = &v65;
        else
          p_Source = &Source;
        RtlAppendUnicodeStringToString(&Destination, p_Source);
        v28 = (const UNICODE_STRING *)Ace;
LABEL_106:
        RtlAppendUnicodeStringToString(&Destination, v28);
        goto LABEL_107;
      }
    }
    DaclSecurityDescriptor = -1073741811;
    goto LABEL_119;
  }
  Dacl = 0LL;
  v78 = 0LL;
  DaclPresent[0] = 0;
  v29 = (unsigned __int16)v19;
  Ace[0] = 0LL;
  *(_OWORD *)pszDest = 0LL;
  if ( ((v20 - 0x10000) & 0xFFFEFFFF) != 0 )
    a3 = pcchRemaining;
  v77 = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)a3, DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  if ( !DaclPresent[0] )
    goto LABEL_119;
  v30 = Dacl;
  DaclSecurityDescriptor = RtlGetAce(Dacl, v29, Ace);
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_119;
  v31 = (unsigned __int16 *)Ace[0];
  v32 = *((unsigned __int16 *)Ace[0] + 1) + 8;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v32, 1799447891LL);
  v34 = Pool2;
  if ( !Pool2 )
    goto LABEL_103;
  DaclSecurityDescriptor = RtlCreateAcl(Pool2, v32, v30->AclRevision);
  if ( DaclSecurityDescriptor < 0
    || (DaclSecurityDescriptor = RtlAddAce(v34, v30->AclRevision, 0, v31, v31[1]), DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlCreateSecurityDescriptor(pszDest, 1u), DaclSecurityDescriptor < 0)
    || (DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(pszDest, 1u, v34, 0), DaclSecurityDescriptor < 0) )
  {
LABEL_118:
    ExFreePoolWithTag(v34, 0);
    goto LABEL_119;
  }
  v35 = SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)pszDest, 1LL, 4LL, pszFormat, &Dacl);
  v36 = *(PACL *)pszFormat;
  DaclSecurityDescriptor = v35;
  Dacl = *(PACL *)pszFormat;
  if ( v35 < 0 )
  {
    if ( v35 == -1073741801 )
      goto LABEL_115;
    v37 = &v74;
    if ( StringCchPrintfW(&v74.Length, 0x10uLL, L"<0x%08X>", (unsigned int)v35) < 0 )
      v37 = (UNICODE_STRING *)L"-";
  }
  else
  {
    v37 = *(UNICODE_STRING **)pszFormat;
  }
  v38 = -1LL;
  v39 = -1LL;
  do
    ++v39;
  while ( *(&v37->Length + v39) );
  v40 = v39 + 1;
  if ( 2 * (unsigned __int64)v40 > 0xFFFF )
  {
    DaclSecurityDescriptor = RtlStringCbPrintfW(&v74.Length, 0x10uLL, L"%%%%%u", 1828LL);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_115;
    v37 = &v74;
    do
      ++v38;
    while ( *(&v74.Length + v38) );
    v40 = v38 + 1;
  }
  v41 = v40 + 27;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, 2LL * (v40 + 27), 1799447891LL);
  if ( !Destination.Buffer )
  {
    DaclSecurityDescriptor = -1073741801;
    goto LABEL_115;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v41;
  switch ( v20 )
  {
    case 65536:
      v42 = &v63;
      break;
    case 131072:
      v42 = &v67;
      break;
    case 196608:
      v42 = &v68;
      break;
    default:
      v42 = &v69;
      break;
  }
  RtlAppendUnicodeStringToString(&Destination, v42);
  RtlAppendUnicodeToString(&Destination, &v37->Length);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    Dacl = 0LL;
  }
  ExFreePoolWithTag(v34, 0);
LABEL_107:
  appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
  Length = Destination.Length;
  DaclSecurityDescriptor = appended;
  v47 = v62 + (Destination.Length >> 1);
  v48 = v62 + (Destination.Length >> 1) + 1;
  v49 = (char *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v47 + 1), 1799447891LL);
  if ( v49 )
  {
    *v71 = 1;
    v50 = v57;
    if ( v57 )
    {
      memmove(v49, Src[1], v57);
      v50 = v57;
    }
    if ( (_WORD)Length )
      memmove(&v49[v50], Destination.Buffer, Length);
    v51 = v72;
    v52 = 2 * v48;
    *(_WORD *)&v49[2 * v47] = 0;
    *(_WORD *)(v51 + 2) = v52;
    *(_WORD *)v51 = v52 - 2;
    *(_QWORD *)(v51 + 8) = v49;
  }
  else
  {
    DaclSecurityDescriptor = -1073741801;
  }
  v36 = Dacl;
  v34 = 0LL;
LABEL_115:
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  if ( v34 )
    goto LABEL_118;
LABEL_119:
  if ( v64.Buffer )
    ExFreePoolWithTag(v64.Buffer, 0);
  if ( Src[1] )
    ExFreePoolWithTag(Src[1], 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)DaclSecurityDescriptor;
}
