/*
 * XREFs of LdrResSearchResource @ 0x1800554B0
 * Callers:
 *     RtlLoadString @ 0x180053B40 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180055420 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800E3FE0 (LdrResFindResource.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180074110 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1624 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E45FC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800E4D2C (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E4D88 (LdrpResValidateFilePath.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 Handle,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // ebx
  __int64 result; // rax
  bool v20; // zf
  int v21; // eax
  __int64 *v22; // rcx
  int v23; // eax
  HANDLE v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r13
  int v27; // r14d
  int v28; // [rsp+50h] [rbp-128h]
  __int64 v29; // [rsp+58h] [rbp-120h] BYREF
  wchar_t *v30; // [rsp+60h] [rbp-118h]
  int v31; // [rsp+68h] [rbp-110h]
  int v32; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v33; // [rsp+70h] [rbp-108h]
  __int64 v34; // [rsp+78h] [rbp-100h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  int v36; // [rsp+88h] [rbp-F0h]
  __int64 v37; // [rsp+90h] [rbp-E8h]
  __int64 v38; // [rsp+98h] [rbp-E0h] BYREF
  void *Src; // [rsp+A0h] [rbp-D8h]
  int v40; // [rsp+A8h] [rbp-D0h] BYREF
  const wchar_t *v41; // [rsp+B0h] [rbp-C8h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-C0h] BYREF
  int v43; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v44; // [rsp+D0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE v46[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v47[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v31 = a3;
  Src = a2;
  v37 = a5;
  v33 = a6;
  v35 = a7;
  v34 = a8;
  v30 = 0LL;
  v40 = 3538996;
  v41 = L"LdrResSearchResource Enter";
  v43 = 3407922;
  v44 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v15);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !Handle || !a2 || v35 && !v34 )
    goto LABEL_102;
  v16 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v16 = a4;
  v17 = v16 | 0x1000;
  if ( (v16 & 0x2000) != 0 )
    v17 = v16;
  if ( (v17 & 0xFFF00000) != 0 )
    goto LABEL_19;
  if ( (unsigned int)v9 < 3 && (v17 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v18 = -1073741583;
    goto LABEL_103;
  }
  if ( (v17 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_30;
  }
  if ( (v17 & 0x41) == 0 )
    return 3221225714LL;
LABEL_30:
  if ( (v17 & 0x100) != 0 )
  {
    v20 = (v17 & 0xE00) == 0;
    goto LABEL_32;
  }
  v21 = v17 & 0xC00;
  if ( (v17 & 0x200) != 0 )
  {
    v20 = v21 == 0;
LABEL_32:
    if ( !v20 )
      goto LABEL_19;
    goto LABEL_37;
  }
  if ( v21 == 3072 )
  {
LABEL_19:
    v18 = -1073741582;
LABEL_103:
    v28 = v18;
    goto LABEL_104;
  }
LABEL_37:
  v36 = v17 & 0x8000;
  if ( (v17 & 0x8000) != 0 && (~(_WORD)v17 & 0x810) != 0 || (v17 & 0x3000) == 0x3000 || (v17 & 0x18) == 0x18 )
    goto LABEL_19;
  v29 = 0LL;
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 0x400) == 0 || (v22 = (__int64 *)v33) == 0LL || !*(_QWORD *)v33 )
    {
      v18 = -1073741811;
      v28 = -1073741811;
      goto LABEL_104;
    }
    v29 = *(_QWORD *)v33;
  }
  else
  {
    v22 = (__int64 *)v33;
  }
  if ( (v17 & 0x80000) != 0 )
  {
    if ( (v17 & 0x300) == 0 || !v22 || !*v22 )
    {
      v18 = -1073741811;
      v28 = -1073741811;
      goto LABEL_104;
    }
    v29 = *v22;
  }
  memmove(v47, Src, 8 * v9);
  if ( (unsigned int)v9 <= 3 )
  {
    if ( (_DWORD)v9 != 3 )
      goto LABEL_69;
  }
  else
  {
    v31 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      UnicodeString = 0LL;
      if ( (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&UnicodeString, 2, 1) >= 0 )
      {
        if ( UnicodeString.Buffer )
          RtlFreeAnsiString(&UnicodeString);
        goto LABEL_69;
      }
    }
LABEL_102:
    v18 = -1073741811;
    goto LABEL_103;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v32) )
      return 3221225485LL;
  }
  else
  {
    v32 = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)v32;
LABEL_69:
  if ( (v17 & 0x300) == 0 )
  {
    if ( (v17 & 0x400) == 0 && ((v17 & 0x800) == 0 || (~v17 & 0x8000) == 0) )
    {
LABEL_93:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle(Handle);
        if ( (int)result < 0 )
          return result;
        v25 = LdrpResSearchResourceHandle((HANDLE)Handle, v37, v33, v35, v34);
      }
      else
      {
        v26 = v33;
        v27 = v31;
        v18 = LdrpResSearchResourceMappedFile((_DWORD)v30, v29, v17, (unsigned int)v47, v31, v37, v33, v35, v34);
        v28 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_104;
        if ( ((v47[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_104;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)v30, 62190, &v38, 0LL, 0x1000000) < 0 )
          goto LABEL_104;
        v29 = 0LL;
        if ( (int)LdrpResGetMappingSize(v38, &v29, v17, 0LL) < 0 )
          goto LABEL_104;
        v25 = LdrpResSearchResourceMappedFile(v38, v29, v17 | 0x1000000, (unsigned int)v47, v27, v37, v26, v35, v34);
      }
      v18 = v25;
      v28 = v25;
LABEL_104:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = v28;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          v18 = v28;
        }
        LdrpTraceLoadMUIDll(&v43, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v17 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(Handle);
    }
    else
    {
      if ( (v17 & 0x1000) == 0 )
        goto LABEL_84;
      result = LdrpResValidateFileHandle(Handle);
    }
    if ( (int)result < 0 )
      return result;
LABEL_84:
    v23 = LdrpResMapFile((wchar_t *)Handle);
    v18 = v23;
    v28 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741302 )
        goto LABEL_104;
    }
    else
    {
      if ( (v17 & 0x400) != 0 )
        v24 = (HANDLE)Handle;
      else
        v24 = 0LL;
      result = LdrAddLoadAsDataTable(v30, v24, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_93;
  }
  v30 = (wchar_t *)Handle;
  if ( (v17 & 0x200) == 0 )
    goto LABEL_76;
  if ( (Handle & 1) == 0 )
    v30 = (wchar_t *)(Handle | 1);
  if ( (v17 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, Handle & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v46, 48LL, 0LL), (int)result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize(v30, &v29, v17, 0LL);
    if ( (int)result >= 0 || (v17 & 0x1000) == 0 )
      goto LABEL_93;
  }
  return result;
}
