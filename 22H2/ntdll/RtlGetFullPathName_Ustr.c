/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x18001B430
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_UEx @ 0x18001D800 (RtlGetFullPathName_UEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x18001D890 (RtlGetFullPathName_UstrEx.c)
 *     RtlSetCurrentDirectory_U @ 0x18005E530 (RtlSetCurrentDirectory_U.c)
 *     LdrpGetFullPath @ 0x18006096C (LdrpGetFullPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001BE90 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpCheckRelativeDrive @ 0x18004A4B8 (RtlpCheckRelativeDrive.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004B140 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E870 (RtlpReferenceCurrentDirectory.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006A0E0 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006A2F8 (RtlUnicodeStringCopy.c)
 *     RtlpComputeBackupIndex @ 0x180081C8C (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x18008ABCC (RtlpCheckDeviceName.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800CC558 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        _WORD *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  _WORD *v6; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  _WORD *v10; // rdx
  unsigned int i; // ecx
  __int16 v12; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  volatile signed __int32 *v17; // r13
  unsigned int j; // ebx
  unsigned int v19; // r11d
  unsigned int Length; // r15d
  unsigned int v21; // edx
  unsigned int k; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  __int16 v27; // ax
  __int64 v28; // r8
  unsigned int v29; // ebx
  _WORD *v30; // rcx
  unsigned __int16 v31; // r9
  unsigned int m; // ecx
  unsigned int v33; // edx
  __int64 v34; // rcx
  __int16 v35; // r9
  __int64 v36; // rax
  __int16 v37; // cx
  __int16 v38; // cx
  __int16 v39; // cx
  __int64 v40; // rax
  _CURDIR *v41; // rcx
  __int64 v42; // rax
  _CURDIR *p_CurrentDirectory; // r10
  unsigned __int16 v44; // ax
  _UNICODE_STRING *v45; // r10
  WCHAR v46; // bx
  __int16 v47; // r9
  __int64 v48; // rax
  _CURDIR *v49; // rsi
  int v50; // eax
  __int16 v51; // ax
  int v52; // edx
  __int16 v53; // r8
  int v54; // eax
  __int16 v55; // cx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 result; // rax
  unsigned int v59; // edi
  __int64 v60; // rsi
  char v61; // [rsp+20h] [rbp-D8h]
  bool v62; // [rsp+21h] [rbp-D7h]
  unsigned int v63; // [rsp+28h] [rbp-D0h]
  unsigned int v64; // [rsp+2Ch] [rbp-CCh]
  __int64 v65; // [rsp+38h] [rbp-C0h] BYREF
  _WORD *v66; // [rsp+40h] [rbp-B8h]
  unsigned int v67; // [rsp+48h] [rbp-B0h]
  int v68; // [rsp+4Ch] [rbp-ACh]
  volatile signed __int32 *v69; // [rsp+50h] [rbp-A8h]
  __int64 v70; // [rsp+58h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+60h] [rbp-98h] BYREF
  __int16 v72; // [rsp+70h] [rbp-88h]
  _CURDIR *v73; // [rsp+78h] [rbp-80h]
  unsigned __int16 v74; // [rsp+80h] [rbp-78h]
  unsigned __int16 v75; // [rsp+84h] [rbp-74h]
  int v76; // [rsp+88h] [rbp-70h]
  unsigned int v77; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v78; // [rsp+90h] [rbp-68h]
  int v79; // [rsp+94h] [rbp-64h]
  _QWORD *v80; // [rsp+98h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+B0h] [rbp-48h] BYREF
  _BYTE v83[6]; // [rsp+B2h] [rbp-46h]

  v80 = a4;
  v6 = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  *(_QWORD *)a6 = 0LL;
  v77 = *a1;
  v9 = v77 >> 1;
  if ( !(v77 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  for ( i = v77 >> 1; i && v10[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v12 = v10[v9 - 1];
  v62 = v12 != 92 && v12 != 47;
  v67 = v8 >> 1;
  v78 = v8 >> 1;
  memset(a3, 0, v8);
  v65 = 0LL;
  *(_DWORD *)((char *)&v65 + 2) = (unsigned __int16)(2 * (v8 >> 1));
  v66 = v6;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v59 = HIWORD(IsDosDeviceName_Ustr);
    v60 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v59 || (int)RtlpCheckDeviceName(a1, v59, a5) >= 0 && !*a5 )
    {
      if ( (int)v60 + 8 >= (unsigned int)(unsigned __int16)(2 * (v8 >> 1)) )
      {
        result = 0LL;
        if ( (unsigned int)(v60 + 10) <= 0xFFFF )
          return (unsigned int)(v60 + 10);
      }
      else
      {
        RtlUnicodeStringCopy(&v65, L"\b\n");
        RtlUnicodeStringCbCatStringN(&v65, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v59 >> 1), v60);
        return (unsigned int)(v60 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v14 = RtlDetermineDosPathNameType_Ustr(a1);
  *(_DWORD *)a6 = v14;
  DosPath = 0LL;
  v17 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v61 = 0;
  j = 0;
  if ( v14 != 2 )
  {
    switch ( v14 )
    {
      case 1:
        v52 = 0;
        v76 = 0;
        for ( j = 2; j < v9; ++j )
        {
          v53 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v53 == 92 || v53 == 47 )
          {
            v76 = ++v52;
            if ( v52 == 2 )
              break;
          }
        }
        v64 = j;
        v68 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_95;
      case 3:
        v42 = RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL, v16);
        v17 = (volatile signed __int32 *)v42;
        v69 = (volatile signed __int32 *)v42;
        v70 = v42;
        v61 = 1;
        if ( v42 )
        {
          p_CurrentDirectory = (_CURDIR *)(v42 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v17 = 0LL;
          v69 = 0LL;
        }
        v73 = p_CurrentDirectory;
        v74 = NLS_UPCASE(*p_CurrentDirectory->DosPath.Buffer);
        v44 = NLS_UPCASE(**((_WORD **)a1 + 1));
        v46 = v44;
        v75 = v44;
        if ( v47 == v44 )
        {
          DosPath = *v45;
          RtlUnicodeStringCopy(&v65, &DosPath);
          v6 = v66;
        }
        else
        {
          RtlpCheckRelativeDrive(v44);
          SourceString = 61;
          *(_WORD *)v83 = v46;
          *(_DWORD *)&v83[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &v65);
          v79 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              if ( (unsigned int)(unsigned __int16)v65 + 2 > 0xFFFF )
              {
                Length = 0;
                v63 = 0;
                v6 = v66;
                v29 = v67;
                goto LABEL_147;
              }
              DosPath.Length = v65 + 2;
              v6 = v66;
            }
            else
            {
              LOWORD(v65) = 0;
              SourceString = v46;
              *(_DWORD *)v83 = 6029370;
              *(_WORD *)&v83[4] = 0;
              RtlUnicodeStringCopyString(&v65, &SourceString);
              DosPath.Length = 8;
              v6 = v66;
            }
          }
          else
          {
            v55 = v65;
            v56 = (unsigned __int64)(unsigned __int16)v65 >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v67 )
            {
              v6 = v66;
            }
            else
            {
              v6 = v66;
              v66[(unsigned int)v56] = 92;
              LOWORD(v65) = v55 + 2;
            }
            DosPath.Length = v65;
          }
        }
        v19 = 3;
        v68 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v15) = 1;
        v48 = RtlpReferenceCurrentDirectory(v15, 0x180000000uLL, v16);
        v69 = (volatile signed __int32 *)v48;
        v70 = v48;
        v61 = 1;
        if ( v48 )
        {
          v49 = (_CURDIR *)(v48 + 24);
        }
        else
        {
          v49 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v69 = 0LL;
          j = 0;
        }
        v73 = v49;
        v50 = RtlpComputeBackupIndex(v49);
        v64 = v50;
        v68 = v50;
        DosPath = v49->DosPath;
        if ( v50 == 3 )
          v51 = 4;
        else
          v51 = 2 * v50;
        DosPath.Length = v51;
        goto LABEL_95;
      case 5:
        v40 = RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL, v16);
        v69 = (volatile signed __int32 *)v40;
        v70 = v40;
        v61 = 1;
        if ( v40 )
        {
          v41 = (_CURDIR *)(v40 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v40 + 40);
        }
        else
        {
          v41 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v69 = 0LL;
          j = 0;
        }
        v73 = v41;
        DosPath = v41->DosPath;
        v64 = RtlpComputeBackupIndex(v41);
        v68 = v64;
LABEL_95:
        RtlUnicodeStringCopy(&v65, &DosPath);
        v6 = v66;
        v19 = v64;
        goto LABEL_19;
      case 6:
      case 7:
        v68 = 4;
        j = 4;
        if ( v9 < 4 )
          j = v9;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&v65, &DosPath);
        v6 = v66;
        if ( (unsigned __int16)v65 >= 6u )
          v66[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v19 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v62 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v63 = 0;
        v29 = v67;
        goto LABEL_147;
    }
  }
  v19 = 3;
  v68 = 3;
LABEL_19:
  Length = DosPath.Length;
  v21 = v77 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v21 + 2 <= v8 )
    goto LABEL_20;
  if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v33 = v21 + 2;
    if ( v33 > 0xFFFF )
      v33 = 0;
    Length = v33;
    v63 = v33;
    v29 = v67;
    v17 = v69;
    goto LABEL_147;
  }
  if ( v9 != 1 )
  {
    Length = 0;
    if ( v21 <= 0xFFFF )
      Length = v77 + DosPath.Length - 2 * j;
    v29 = v67;
    goto LABEL_51;
  }
  if ( DosPath.Length == 8 )
  {
    if ( v8 <= 8 )
    {
      Length = 10;
      v29 = v67;
LABEL_51:
      v63 = Length;
LABEL_52:
      v17 = v69;
      goto LABEL_147;
    }
  }
  else
  {
    if ( v8 < DosPath.Length )
    {
      v63 = DosPath.Length;
      v29 = v67;
      goto LABEL_52;
    }
    v57 = (unsigned __int64)(unsigned __int16)v65 >> 1;
    if ( (_DWORD)v57 && v6[(unsigned int)(v57 - 1)] == 92 )
      LOWORD(v65) = v65 - 2;
  }
LABEL_20:
  for ( k = 0; k < (unsigned __int16)v65 >> 1; ++k )
  {
    if ( v6[k] == 47 )
      v6[k] = 92;
  }
  v23 = (unsigned __int16)v65 >> 1;
  while ( j < v9 )
  {
    v24 = *((_QWORD *)a1 + 1);
    v25 = *(unsigned __int16 *)(v24 + 2LL * j);
    if ( v25 == 92 )
      goto LABEL_36;
    v26 = v25 - 46;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v23 || v6[(unsigned int)(v23 - 1)] != 92 )
      {
        v6[v23] = 92;
        v23 = (unsigned int)(v23 + 1);
      }
      goto LABEL_35;
    }
    v34 = j + 1;
    if ( (_DWORD)v34 != v9 )
    {
      v35 = *(_WORD *)(v24 + 2 * v34);
      if ( v35 == 92 || v35 == 47 )
      {
        ++j;
      }
      else if ( v35 == 46
             && ((v36 = j + 2, (_DWORD)v36 == v9) || (v37 = *(_WORD *)(v24 + 2 * v36), v37 == 92) || v37 == 47) )
      {
        while ( (unsigned int)v23 >= v19 )
        {
          v72 = v6[v23];
          v38 = v72;
          v6[v23] = 0;
          if ( v38 == 92 )
          {
            while ( (unsigned int)v23 >= v19 )
            {
              v72 = v6[v23];
              v39 = v72;
              v6[v23] = 0;
              if ( v39 == 92 )
              {
                if ( (unsigned int)v23 < v19 )
                  goto LABEL_84;
                goto LABEL_80;
              }
              v23 = (unsigned int)(v23 - 1);
            }
            break;
          }
          v23 = (unsigned int)(v23 - 1);
        }
LABEL_84:
        v23 = (unsigned int)(v23 + 1);
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v9 )
        {
          v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v27 == 92 || v27 == 47 )
          {
            if ( j < v9 && (unsigned int)v23 >= 2 )
            {
              v28 = (unsigned int)(v23 - 1);
              if ( v6[v28] == 46 && v6[(unsigned int)(v23 - 2)] != 46 )
                v23 = (unsigned int)v28;
            }
            break;
          }
          v6[v23] = v27;
          v23 = (unsigned int)(v23 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v62 && (unsigned int)v23 > v19 && v6[(unsigned int)(v23 - 1)] == 92 )
    LODWORD(v23) = v23 - 1;
  v29 = v67;
  if ( (unsigned int)v23 < v67 )
    v6[(unsigned int)v23] = 0;
  while ( (_DWORD)v23 )
  {
    v23 = (unsigned int)(v23 - 1);
    v30 = &v6[v23];
    if ( *v30 != 32 && *v30 != 46 )
    {
      LODWORD(v23) = v23 + 1;
      break;
    }
    *v30 = 0;
  }
  v31 = 2 * v23;
  LOWORD(v65) = 2 * v23;
  if ( !v80 )
  {
LABEL_50:
    Length = v31;
    goto LABEL_51;
  }
  for ( m = v23; m && v6[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v23 || m < v19 )
  {
    *v80 = 0LL;
    goto LABEL_50;
  }
  *v80 = &v6[m];
  Length = v31;
  v63 = v31;
  v17 = v69;
LABEL_147:
  if ( v61 )
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v70 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v70);
      }
      Length = v63;
      v6 = v66;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( Length >= 2 * (unsigned __int64)v29 && v29 )
    *v6 = 0;
  return Length;
}
