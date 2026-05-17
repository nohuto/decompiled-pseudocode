/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180055BD4
 * Callers:
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x180034BD4 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrpResReportResourceAccessInternal @ 0x180042CA4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpIsReparsePoint @ 0x180053670 (LdrpIsReparsePoint.c)
 *     LdrpResGetResourceDirectory @ 0x180056300 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180056708 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006A5E8 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E340 (_wcsicmp.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1624 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  bool v16; // dl
  bool v17; // r12
  __int64 v18; // rbx
  int v19; // esi
  bool v20; // cl
  bool v21; // r12
  int MappingSize; // esi
  unsigned int v23; // ecx
  unsigned __int16 *v24; // r11
  int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  int v31; // ebx
  __int64 v32; // r14
  __int64 result; // rax
  char v34; // al
  bool v35; // zf
  int v36; // eax
  unsigned int *v37; // rcx
  __int16 v38; // cx
  int RCConfig; // eax
  __int64 v40; // r8
  __int64 v41; // rax
  __int16 v42; // cx
  int v43; // eax
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // ebx
  __int64 v48; // rax
  unsigned int v49; // r13d
  int v50; // [rsp+70h] [rbp-3D8h]
  char v51; // [rsp+74h] [rbp-3D4h]
  char v52; // [rsp+75h] [rbp-3D3h]
  char v53; // [rsp+76h] [rbp-3D2h]
  unsigned __int16 v54; // [rsp+78h] [rbp-3D0h] BYREF
  unsigned __int16 v55; // [rsp+7Ch] [rbp-3CCh]
  unsigned __int64 v56; // [rsp+80h] [rbp-3C8h]
  __int64 v57; // [rsp+88h] [rbp-3C0h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v59; // [rsp+98h] [rbp-3B0h]
  unsigned int v60; // [rsp+A0h] [rbp-3A8h]
  __int64 *v61; // [rsp+A8h] [rbp-3A0h]
  int v62; // [rsp+B0h] [rbp-398h]
  _QWORD *v63; // [rsp+B8h] [rbp-390h]
  unsigned int *v64; // [rsp+C0h] [rbp-388h]
  __int64 v65; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-370h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-368h] BYREF
  __int64 *v69; // [rsp+E8h] [rbp-360h]
  __int64 v70; // [rsp+F0h] [rbp-358h] BYREF
  void *v71; // [rsp+F8h] [rbp-350h]
  _QWORD v72[2]; // [rsp+100h] [rbp-348h] BYREF
  __int64 v73; // [rsp+110h] [rbp-338h] BYREF
  __int64 v74; // [rsp+118h] [rbp-330h] BYREF
  _WORD v75[4]; // [rsp+120h] [rbp-328h] BYREF
  _WORD *v76; // [rsp+128h] [rbp-320h]
  int v77; // [rsp+130h] [rbp-318h] BYREF
  const wchar_t *v78; // [rsp+138h] [rbp-310h]
  _WORD v79[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v80[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v61 = (__int64 *)a4;
  v10 = a3;
  v59 = a2;
  v56 = a1;
  v63 = a6;
  v69 = a7;
  v71 = a8;
  v64 = a9;
  v58 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v51 = 0;
  v62 = a3 & 0x40;
  v52 = 0;
  v53 = 0;
  LODWORD(v72[0]) = 4980810;
  v72[1] = L"LdrpResSearchResourceMappedFile Enter";
  v77 = 4849736;
  v78 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v45 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v45 = 2147353476LL;
    LdrpTraceLoadMUIDll(v72, *(unsigned __int8 *)v45);
  }
  else
  {
    v12 = 2147353476LL;
  }
  v55 = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v55 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v35 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v34 = 1, !v35) )
    {
      v34 = 0;
    }
    v51 = v34;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v38 = *((_WORD *)v61 + 8);
      else
        v38 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v61 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v51
         || (~(_BYTE)v10 & 8) == 0
         || (v38 & 0xF3FF) != 0
         || v38 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v56, v59, 0, v10, 1);
        MappingSize = RCConfig;
        v50 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | LdrIsResItemExist(v56, v61, v40, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v32 = 2147353477LL;
            goto LABEL_40;
          }
          v15 = v13 | 0x80000;
        }
        v14 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v15 = v13;
      }
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v50 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = v16;
  v79[0] = 1;
  v80[0] = 0;
  if ( !v16 && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v18 = v56;
    v19 = v59;
  }
  else
  {
    v36 = v15 | 4;
    if ( (v10 & 4) == 0 )
      v36 = v15;
    v15 = v36;
    v19 = v59;
    v18 = v56;
    result = LdrResFallbackLangList(v56, v59, v55, v36, (__int64)v79);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v18, v19, v10, (unsigned int)&v67, (__int64)&v65);
    if ( (int)result < 0 )
      return result;
  }
LABEL_12:
  v20 = 0;
  if ( (v15 & 0x20000) == 0 )
    v20 = v17;
  v21 = v20;
  LOBYTE(v55) = v20;
  MappingSize = 0;
  v50 = 0;
  v57 = 0LL;
  v54 = 0;
  v23 = 0;
  while ( 1 )
  {
    v60 = v23;
    if ( v23 >= v79[0] )
    {
LABEL_92:
      v31 = a5;
LABEL_34:
      if ( v21 && (v10 & 0x200000) == 0 )
        LdrpResReportResourceAccessInternal(v58, v57, v61, v31);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v17 = v55;
      if ( (_BYTE)v55 )
      {
        if ( v53 || v52 || (int)LdrpIsReparsePoint(v56) < 0 )
        {
          if ( (v15 & 0x40000) != 0 )
            v17 = 0;
          else
            v15 |= 0x20000u;
        }
        else
        {
          v15 |= 0x400000u;
          v53 = 1;
        }
      }
      v18 = v56;
      if ( !v17 )
        goto LABEL_38;
      goto LABEL_12;
    }
    if ( !v21 )
      break;
    v58 = 0LL;
    v57 = 0LL;
    v41 = v23;
    v42 = v80[4 * v23];
    if ( !v42 )
    {
      if ( *(_DWORD *)&v80[4 * v41 + 2] == 2 )
        goto LABEL_125;
LABEL_84:
      MappingSize = -1073741811;
LABEL_85:
      v50 = MappingSize;
      goto LABEL_125;
    }
    if ( *(_DWORD *)&v80[4 * v41 + 2] == 10 )
      goto LABEL_84;
    v54 = v42;
    v43 = LdrLoadAlternateResourceModuleEx(v18, v42, (__int64 *)&v58, &v57, v15 | 0x1000u);
    MappingSize = v43;
    v50 = v43;
    if ( v43 >= 0 )
    {
      v52 = 1;
      if ( !v57 )
      {
        LOBYTE(v44) = 1;
        MappingSize = LdrpResGetMappingSize(v58, &v57, 512LL, v44);
        v50 = MappingSize;
      }
      if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
        goto LABEL_92;
      MappingSize = LdrpResGetResourceDirectory(v58, v57, v10, (unsigned int)&v68, (__int64)&v66);
      v50 = MappingSize;
      if ( MappingSize < 0 )
        goto LABEL_125;
      break;
    }
    if ( v43 == -1073741772 || v43 == -1073741766 )
    {
      MappingSize = -1073020927;
      goto LABEL_85;
    }
LABEL_125:
    v23 = v60 + 1;
    v18 = v56;
  }
  v70 = 0LL;
  v24 = &v54;
  if ( v21 )
    v24 = 0LL;
  v25 = v10 | 0x20;
  if ( !v21 )
    v25 = v10;
  v26 = &v70;
  if ( v69 )
    v26 = v69;
  v27 = v65;
  if ( v21 )
    v27 = v66;
  v28 = v67;
  if ( v21 )
    v28 = v68;
  v29 = v59;
  if ( v21 )
    v29 = v57;
  v30 = v18;
  if ( v21 )
    v30 = v58;
  v31 = a5;
  MappingSize = LdrpResSearchResourceInsideDirectory(
                  v30,
                  0,
                  v29,
                  v28,
                  v27,
                  0LL,
                  (__int64)v61,
                  a5,
                  (__int64)v79,
                  (__int64)v63,
                  (__int64)v26,
                  v25,
                  (__int64)v24);
  v50 = MappingSize;
  if ( v62 && (~v15 & 0x40000) != 0 )
  {
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v21 )
        goto LABEL_34;
      v47 = v57;
      v72[0] = v58;
      if ( (int)LdrResGetRCConfig(v56, v59, (unsigned int)&v74, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v72[0], v47, (unsigned int)&v73, 4096, 0) >= 0 )
      {
        v48 = *(_QWORD *)(v74 + 28) - *(_QWORD *)(v73 + 28);
        if ( !v48 )
          v48 = *(_QWORD *)(v74 + 36) - *(_QWORD *)(v73 + 36);
        if ( !v48 )
          goto LABEL_92;
      }
      goto LABEL_125;
    }
    if ( v63 && v21 )
    {
      if ( v69 )
        v46 = *v69;
      else
        LODWORD(v46) = v70;
      MappingSize = LdrpFindMessageInAlternateModule(v58, *v63, v46, *((_DWORD *)v61 + 6), 1);
      v50 = MappingSize;
      if ( MappingSize < 0 )
      {
        *v63 = 0LL;
        if ( MappingSize == -1073741701 )
          goto LABEL_38;
      }
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_33;
  v37 = v64;
  if ( !v64 )
    goto LABEL_34;
  if ( v54 )
  {
    v76 = Src;
    v75[1] = 172;
    MappingSize = RtlLcidToLocaleName(v54, (__int64)v75, 2, 0);
    v50 = MappingSize;
    if ( MappingSize >= 0 )
    {
      v49 = v75[0] >> 1;
      v37 = v64;
      goto LABEL_130;
    }
LABEL_38:
    v12 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v49 = 0;
LABEL_130:
  if ( v49 < *v37 && v71 )
  {
    memmove(v71, Src, 2LL * v49);
    *v64 = v49 + 1;
    *((_WORD *)v71 + v49) = 0;
    v31 = a5;
    goto LABEL_34;
  }
  *v37 = v49 + 1;
  MappingSize = -1073741789;
  v50 = -1073741789;
  v12 = 2147353476LL;
  v32 = 2147353477LL;
LABEL_40:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v32 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v50;
  }
  if ( (*(_BYTE *)v32 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v50;
    }
    LdrpTraceLoadMUIDll(&v77, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
