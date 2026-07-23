/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E24B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800762DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenKey @ 0x18009D720 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D7C0 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009E0D0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009EFB0 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E36E8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 */

NTSTATUS __cdecl RtlSetImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  ULONG v5; // r14d
  char v6; // si
  const WCHAR *v10; // rdx
  ULONG v11; // r12d
  int inited; // ebx
  int v13; // eax
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  int v19; // edi
  int v20; // edi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  bool v57; // cf
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  unsigned __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r10
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int32 v77; // edi
  __int32 v78; // edi
  __int32 v79; // edi
  __int32 v80; // edi
  int v81; // edi
  int v82; // edi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r10
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // r10d
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  unsigned __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rcx
  unsigned __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  unsigned __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // r11
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // r9
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // r8
  unsigned __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // r11
  __int64 v143; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-89h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-71h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING v149; // [rsp+70h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  __int128 Data; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v152; // [rsp+C0h] [rbp-9h]
  char KeyValueInformation[8]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  KeyHandle = 0LL;
  v152 = 0LL;
  v5 = Flags & 2;
  v6 = Flags & 1;
  v10 = L"MitigationOptions";
  Data = 0LL;
  v11 = Flags & 8;
  if ( (Flags & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx(&DestinationString, v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&ValueName, L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (BufferSize || Buffer) )
        goto LABEL_300;
      inited = RtlInitUnicodeStringEx(&v149, ImagePath);
      if ( inited < 0 )
        goto LABEL_303;
      if ( ImagePath )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(&v149.Length, 131087LL, v5 == 0, &KeyHandle);
      }
      else
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DB70;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = NtOpenKey(&KeyHandle, 0x2000Fu, &ObjectAttributes);
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_301;
      v14 = NtQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x28u,
              &ResultLength);
      inited = v14;
      if ( v14 >= 0 )
      {
        if ( Size > 0x18 )
        {
          inited = -1073741788;
          goto LABEL_301;
        }
        memmove(&Data, &Size_4, Size);
      }
      else if ( v14 != -1073741772 )
      {
        goto LABEL_301;
      }
      if ( Policy <= ImageFontDisablePolicy )
      {
        if ( Policy == ImageFontDisablePolicy )
        {
          if ( v6 )
          {
            v21 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( BufferSize != 8 )
            goto LABEL_300;
          v44 = 0xFFF0FFFFFFFFFFFFuLL;
          v75 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v76 = v75 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v76 = v75 != 0 ? 7LL : 3LL;
            }
            else
            {
              v76 = v75 != 0 ? 5LL : 1LL;
            }
            v43 = v76 << 48;
            goto LABEL_76;
          }
          v57 = v75 != 0;
          v58 = 0x4000000000000LL;
          goto LABEL_154;
        }
        if ( Policy == ImageDepPolicy )
        {
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_299;
          }
          if ( BufferSize != 8 )
            goto LABEL_300;
          v74 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v43 = v74 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v43 = v74 != 0 ? 7LL : 3LL;
            }
            else
            {
              v43 = v74 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v43 = v74 != 0 ? 4 : 0;
          }
          v46 = Data & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_148;
        }
        v15 = Policy - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 2;
                if ( v19 )
                {
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                      goto LABEL_301;
                    if ( v6 )
                    {
                      v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                      *(_QWORD *)&Data = v21 & Data;
LABEL_299:
                      inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, &Data, 0x18u);
                      goto LABEL_301;
                    }
                    if ( BufferSize == 16 )
                    {
                      v22 = *((_QWORD *)Buffer + 1);
                      v23 = v22 & 4;
                      v24 = *(_QWORD *)Buffer & 4LL;
                      if ( (*(_QWORD *)Buffer & 3) != 0 )
                      {
                        if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        {
                          v26 = v24 != 0 ? 6LL : 2LL;
                        }
                        else if ( (*(_BYTE *)Buffer & 8) != 0 )
                        {
                          v26 = v24 != 0 ? 7LL : 3LL;
                        }
                        else
                        {
                          v26 = v24 != 0 ? 5LL : 1LL;
                        }
                        v25 = v26 << 44;
                      }
                      else
                      {
                        v25 = -(__int64)(v24 != 0) & 0x400000000000LL;
                      }
                      *(_QWORD *)&Data = Data & 0xFFFF0FFFFFFFFFFFuLL | v25;
                      v27 = v22 & 3;
                      if ( v27 )
                      {
                        if ( v27 == 2LL )
                        {
                          v28 = (v23 != 0 ? 6LL : 2LL) << 44;
                          v30 = v23 != 0 ? 96LL : 32LL;
                        }
                        else
                        {
                          v28 = (v23 != 0 ? 5LL : 1LL) << 44;
                          v30 = v23 != 0 ? 80LL : 16LL;
                        }
                        v29 = v30 & 0xFFFF0FFFFFFFFFFFuLL;
                      }
                      else
                      {
                        v28 = v23 != 0 ? 0x40uLL : 0;
                        v29 = -(__int64)(v23 != 0) & 0x400000000000LL;
                      }
                      v31 = v29 | v28;
                      v32 = 0xFFFF0FFFFFFFFF0FuLL;
                      goto LABEL_49;
                    }
                    goto LABEL_300;
                  }
                  if ( v6 )
                  {
                    Data &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                    goto LABEL_299;
                  }
                  if ( BufferSize == 16 )
                  {
                    v34 = *((_QWORD *)Buffer + 1);
                    v35 = v34 & 4;
                    v36 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                      {
                        v39 = Data & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                        v38 = *((_QWORD *)&Data + 1);
                        *(_QWORD *)&Data = v39;
                        v31 = v35 != 0 ? 1536LL : 512LL;
                        goto LABEL_66;
                      }
                      if ( (*(_BYTE *)Buffer & 8) != 0 )
                        v40 = v36 != 0 ? 7LL : 3LL;
                      else
                        v40 = v36 != 0 ? 5LL : 1LL;
                      v38 = *((_QWORD *)&Data + 1);
                      *(_QWORD *)&Data = Data & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
                      v41 = v34 & 3;
                      if ( v41 )
                      {
                        if ( v41 != 2LL )
                        {
                          v31 = v35 != 0 ? 1280LL : 256LL;
                          goto LABEL_66;
                        }
                        goto LABEL_56;
                      }
                    }
                    else
                    {
                      v37 = Data & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                      v38 = *((_QWORD *)&Data + 1);
                      *(_QWORD *)&Data = v37;
                      if ( (v34 & 3) == 2 )
                      {
LABEL_56:
                        v31 = v35 != 0 ? 1536LL : 512LL;
LABEL_66:
                        v33 = v38 & 0xFFFFFFFFFFFFF0FFuLL;
                        goto LABEL_50;
                      }
                    }
                    v31 = v35 != 0 ? 0x400 : 0;
                    goto LABEL_66;
                  }
LABEL_300:
                  inited = -1073741811;
                  goto LABEL_301;
                }
                if ( v6 )
                {
                  v21 = 0xFFFFFFF0FFFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( BufferSize != 8 )
                  goto LABEL_300;
                v42 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v45 = v42 != 0 ? 6LL : 2LL;
                  else
                    v45 = v42 != 0 ? 5LL : 1LL;
                  v43 = v45 << 32;
                }
                else
                {
                  v43 = -(__int64)(v42 != 0) & 0x400000000LL;
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                }
                goto LABEL_76;
              }
              if ( v6 )
              {
                *(_QWORD *)&Data = Data & 0xFFFFFFFF0FFFFFFFuLL;
                v152 &= 0xFFFFFFFFF0FFFFFFuLL;
                goto LABEL_299;
              }
              if ( BufferSize != 16 )
                goto LABEL_300;
              v47 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                  v49 = v47 != 0 ? 6LL : 2LL;
                else
                  v49 = v47 != 0 ? 5LL : 1LL;
                v48 = v49 << 28;
              }
              else
              {
                v48 = v47 != 0 ? 0x40000000 : 0;
              }
              *(_QWORD *)&Data = Data & 0xFFFFFFFF0FFFFFFFuLL | v48;
              v50 = *((_QWORD *)Buffer + 1) & 4LL;
              if ( (*((_QWORD *)Buffer + 1) & 3) != 0 )
              {
                if ( (*((_QWORD *)Buffer + 1) & 3LL) == 2 )
                  v52 = v50 != 0 ? 6LL : 2LL;
                else
                  v52 = v50 != 0 ? 5LL : 1LL;
                v51 = v52 << 24;
              }
              else
              {
                v51 = v50 != 0 ? 0x4000000 : 0;
              }
              v53 = v152 & 0xFFFFFFFFF0FFFFFFuLL;
LABEL_93:
              v152 = v53 | v51;
              goto LABEL_299;
            }
            if ( v6 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_299;
            }
            if ( BufferSize != 8 )
              goto LABEL_300;
            v54 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                v55 = v54 != 0 ? 6LL : 2LL;
              else
                v55 = v54 != 0 ? 5LL : 1LL;
              v43 = v55 << 24;
            }
            else
            {
              v43 = v54 != 0 ? 0x4000000 : 0;
            }
            v46 = Data & 0xFFFFFFFFF0FFFFFFuLL;
            goto LABEL_148;
          }
          if ( v6 )
          {
            v21 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( BufferSize != 8 )
            goto LABEL_300;
          v44 = 0xFFFFFF0FFFFFFFFFuLL;
          v56 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v59 = v56 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v59 = v56 != 0 ? 7LL : 3LL;
            }
            else
            {
              v59 = v56 != 0 ? 5LL : 1LL;
            }
            v43 = v59 << 36;
            goto LABEL_76;
          }
          v57 = v56 != 0;
          v58 = 0x4000000000LL;
LABEL_154:
          v43 = v58 & -(__int64)v57;
LABEL_76:
          v46 = v44 & Data;
          goto LABEL_148;
        }
        if ( v6 )
        {
          *(_QWORD *)&Data = Data & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_299;
        }
        if ( BufferSize != 24 )
          goto LABEL_300;
        v60 = *((_QWORD *)Buffer + 1);
        v61 = *((_QWORD *)Buffer + 2);
        v62 = v60 & 4;
        v63 = v61 & 4;
        v64 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)Buffer & 8) != 0 )
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 768;
          }
          else
          {
            v65 = (((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v65 = ((unsigned __int128)-(__int128)(unsigned __int64)v64 >> 64) & 0x400;
        }
        v66 = v60 & 3;
        v67 = Data & 0xFFFFFFFFFFF0F0FFuLL | v65 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v66 )
        {
          if ( v66 == 2 )
            v69 = v62 != 0 ? 6LL : 2LL;
          else
            v69 = v62 != 0 ? 5LL : 1LL;
          v68 = v69 << 16;
        }
        else
        {
          v68 = v62 != 0 ? 0x40000 : 0;
        }
        v70 = v61 & 3;
        v71 = (v67 | v68) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v70 )
        {
          if ( v70 == 2 )
            v73 = v63 != 0 ? 6LL : 2LL;
          else
            v73 = v63 != 0 ? 5LL : 1LL;
          v72 = v73 << 20;
        }
        else
        {
          v72 = v63 != 0 ? 0x400000 : 0;
        }
LABEL_298:
        *(_QWORD *)&Data = v71 | v72;
        goto LABEL_299;
      }
      v77 = Policy - 10;
      if ( !v77 )
      {
        if ( v6 )
        {
          *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFLL;
          goto LABEL_299;
        }
        if ( BufferSize != 24 )
          goto LABEL_300;
        v131 = *((_QWORD *)Buffer + 1);
        v132 = *((_QWORD *)Buffer + 2);
        v133 = *(_QWORD *)Buffer & 4LL;
        v134 = v131 & 4;
        v135 = v132 & 4;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            v137 = (((unsigned __int128)-(__int128)(unsigned __int64)v133 >> 64) & 4) + 2;
          else
            v137 = (((unsigned __int128)-(__int128)(unsigned __int64)v133 >> 64) & 4) + 1;
          v136 = v137 << 52;
        }
        else
        {
          v136 = -(__int64)(v133 != 0) & 0x40000000000000LL;
        }
        v138 = v131 & 3;
        v139 = Data & 0xF00FFFFFFFFFFFFFuLL | v136 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v138 )
        {
          if ( v138 == 2 )
            v141 = v134 != 0 ? 6LL : 2LL;
          else
            v141 = v134 != 0 ? 5LL : 1LL;
          v140 = v141 << 56;
        }
        else
        {
          v140 = -(__int64)(v134 != 0) & 0x400000000000000LL;
        }
        v71 = (v139 | v140) & 0xFFFFFFFFFFFFFFFLL;
        v142 = v132 & 3;
        if ( v142 )
        {
          if ( v142 == 2 )
            v143 = v135 != 0 ? 6LL : 2LL;
          else
            v143 = v135 != 0 ? 5LL : 1LL;
          v72 = v143 << 60;
        }
        else
        {
          v72 = -(__int64)(v135 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_298;
      }
      v78 = v77 - 1;
      if ( !v78 )
      {
        if ( v6 )
        {
          *((_QWORD *)&Data + 1) &= 0xFFFFF0F00000FFFFuLL;
          if ( !v11 )
            ZwDeleteValueKey(KeyHandle, &ValueName);
          goto LABEL_299;
        }
        if ( BufferSize == 1072 )
        {
          if ( v11 || (inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)Buffer + 48, 0x400u), inited >= 0) )
          {
            v100 = *((_QWORD *)Buffer + 3) & 4LL;
            if ( (*((_QWORD *)Buffer + 3) & 3) != 0 )
            {
              if ( (*((_QWORD *)Buffer + 3) & 3LL) == 2 )
                v102 = v100 != 0 ? 6LL : 2LL;
              else
                v102 = v100 != 0 ? 5LL : 1LL;
              v101 = v102 << 16;
            }
            else
            {
              v101 = v100 != 0 ? 0x40000 : 0;
            }
            v103 = *((_QWORD *)Buffer + 4) & 4LL;
            v104 = *((_QWORD *)Buffer + 4) & 3LL;
            v105 = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFF00FFFFuLL | v101 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v104 )
            {
              if ( v104 == 2 )
                v107 = v103 != 0 ? 6LL : 2LL;
              else
                v107 = v103 != 0 ? 5LL : 1LL;
              v106 = v107 << 20;
            }
            else
            {
              v106 = v103 != 0 ? 0x400000 : 0;
            }
            v108 = (v105 | v106) & 0xFFFFFFFFF0FFFFFFuLL;
            v109 = *((_QWORD *)Buffer + 5) & 4LL;
            v110 = *((_QWORD *)Buffer + 5) & 3LL;
            if ( v110 )
            {
              if ( v110 == 2 )
                v112 = v109 != 0 ? 6LL : 2LL;
              else
                v112 = v109 != 0 ? 5LL : 1LL;
              v111 = v112 << 24;
            }
            else
            {
              v111 = v109 != 0 ? 0x4000000 : 0;
            }
            v113 = v108 | v111;
            v114 = *(_QWORD *)Buffer & 4LL;
            v115 = *(_QWORD *)Buffer & 3LL;
            v116 = v113 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v115 )
            {
              if ( v115 == 2 )
                v118 = v114 != 0 ? 6LL : 2LL;
              else
                v118 = v114 != 0 ? 5LL : 1LL;
              v117 = v118 << 28;
            }
            else
            {
              v117 = v114 != 0 ? 0x40000000 : 0;
            }
            v119 = v116 | v117;
            v120 = *((_QWORD *)Buffer + 1) & 4LL;
            v121 = *((_QWORD *)Buffer + 1) & 3LL;
            v122 = v119 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v121 )
            {
              if ( v121 == 2 )
                v124 = v120 != 0 ? 6LL : 2LL;
              else
                v124 = v120 != 0 ? 5LL : 1LL;
              v123 = v124 << 32;
            }
            else
            {
              v123 = -(__int64)(v120 != 0) & 0x400000000LL;
            }
            v125 = v122 | v123;
            v126 = *((_QWORD *)Buffer + 2) & 4LL;
            v127 = *((_QWORD *)Buffer + 2) & 3LL;
            v128 = v125 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v127 )
            {
              if ( v127 == 2 )
                v130 = v126 != 0 ? 6LL : 2LL;
              else
                v130 = v126 != 0 ? 5LL : 1LL;
              v129 = v130 << 40;
            }
            else
            {
              v129 = -(__int64)(v126 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&Data + 1) = v128 | v129;
            goto LABEL_299;
          }
LABEL_301:
          if ( KeyHandle )
            NtClose(KeyHandle);
          goto LABEL_303;
        }
        goto LABEL_300;
      }
      v79 = v78 - 1;
      if ( v79 )
      {
        v80 = v79 - 1;
        if ( v80 )
        {
          v81 = v80 - 1;
          if ( v81 )
          {
            v82 = v81 - 1;
            if ( !v82 )
            {
              if ( v6 )
              {
                *((_QWORD *)&Data + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                v152 &= 0xFFFFFFFFFFFFFF00uLL;
                goto LABEL_299;
              }
              if ( BufferSize == 24 )
              {
                v85 = *((_QWORD *)Buffer + 1);
                v86 = v85 & 4;
                v87 = *(_QWORD *)Buffer & 4LL;
                v88 = *((_QWORD *)Buffer + 2) & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                  {
                    v90 = v87 != 0 ? 6LL : 2LL;
                  }
                  else if ( (*(_BYTE *)Buffer & 8) != 0 )
                  {
                    v90 = v87 != 0 ? 7LL : 3LL;
                  }
                  else
                  {
                    v90 = v87 != 0 ? 5LL : 1LL;
                  }
                  v89 = v90 << 60;
                }
                else
                {
                  v89 = -(__int64)(v87 != 0) & 0x4000000000000000LL;
                }
                *((_QWORD *)&Data + 1) = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFFFFFFFLL | v89;
                v91 = v85 & 3;
                if ( v91 )
                {
                  if ( v91 == 2LL )
                    v92 = v86 != 0 ? 6LL : 2LL;
                  else
                    v92 = v86 != 0 ? 5LL : 1LL;
                }
                else
                {
                  v92 = v86 != 0 ? 4 : 0;
                }
                v93 = *((_QWORD *)Buffer + 2) & 3LL;
                v94 = v152 & 0xFFFFFFFFFFFFFF00uLL | v92 & 0xFFFFFFFFFFFFFF0FuLL;
                if ( v93 )
                {
                  if ( v93 == 2 )
                  {
                    v95 = v88 != 0 ? 96LL : 32LL;
                  }
                  else if ( (*((_BYTE *)Buffer + 16) & 8) != 0 )
                  {
                    v95 = v88 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v95 = v88 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v95 = v88 != 0 ? 0x40 : 0;
                }
                v152 = v94 | v95;
                goto LABEL_299;
              }
              goto LABEL_300;
            }
            if ( v82 != 1 )
              goto LABEL_301;
            if ( v6 )
            {
              v152 &= 0xFFFFFFFFFF0FFFFFuLL;
              goto LABEL_299;
            }
            if ( BufferSize != 8 )
              goto LABEL_300;
            v83 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                v84 = v83 != 0 ? 6LL : 2LL;
              else
                v84 = v83 != 0 ? 5LL : 1LL;
              v51 = v84 << 20;
            }
            else
            {
              v51 = v83 != 0 ? 0x400000 : 0;
            }
            v53 = v152 & 0xFFFFFFFFFF0FFFFFuLL;
            goto LABEL_93;
          }
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_299;
          }
          if ( BufferSize != 8 )
            goto LABEL_300;
          v96 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              v43 = v96 != 0 ? 24576LL : 0x2000LL;
            else
              v43 = v96 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v43 = v96 != 0 ? 0x4000 : 0;
          }
          v46 = Data & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_299;
          }
          if ( BufferSize != 8 )
            goto LABEL_300;
          v97 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v43 = v97 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v43 = v97 != 0 ? 112LL : 48LL;
            }
            else
            {
              v43 = v97 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v43 = v97 != 0 ? 0x40 : 0;
          }
          v46 = Data & 0xFFFFFFFFFFFFFF0FuLL;
        }
LABEL_148:
        *(_QWORD *)&Data = v46 | v43;
        goto LABEL_299;
      }
      if ( v6 )
      {
        *((_QWORD *)&Data + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_299;
      }
      if ( BufferSize != 8 )
        goto LABEL_300;
      v98 = *(_QWORD *)Buffer & 4LL;
      if ( (*(_QWORD *)Buffer & 3) != 0 )
      {
        if ( (*(_QWORD *)Buffer & 3LL) != 2 )
        {
          v32 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)Buffer & 8) != 0 )
            v99 = v98 != 0 ? 7LL : 3LL;
          else
            v99 = v98 != 0 ? 5LL : 1LL;
          v31 = v99 << 36;
          goto LABEL_49;
        }
        v31 = (v98 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v31 = -(__int64)(v98 != 0) & 0x4000000000LL;
      }
      v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
      v33 = v32 & *((_QWORD *)&Data + 1);
LABEL_50:
      *((_QWORD *)&Data + 1) = v33 | v31;
      goto LABEL_299;
    }
  }
LABEL_303:
  if ( inited == -1073741772 && v5 )
    return 0;
  return inited;
}
