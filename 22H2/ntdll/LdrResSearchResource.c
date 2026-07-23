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

NTSTATUS __fastcall LdrResSearchResource(
        unsigned __int64 DosFileName,
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
  int v18; // ebx
  NTSTATUS result; // eax
  bool v20; // zf
  int v21; // eax
  SIZE_T *v22; // rcx
  int v23; // eax
  WCHAR *v24; // r9
  WCHAR *v25; // rdx
  int v26; // eax
  __int64 v27; // r13
  int v28; // r14d
  int v29; // [rsp+50h] [rbp-128h]
  SIZE_T Size; // [rsp+58h] [rbp-120h] BYREF
  PVOID Module; // [rsp+60h] [rbp-118h] BYREF
  int v32; // [rsp+68h] [rbp-110h]
  DWORD Lcid; // [rsp+6Ch] [rbp-10Ch] BYREF
  __int64 v34; // [rsp+70h] [rbp-108h]
  __int64 v35; // [rsp+78h] [rbp-100h]
  __int64 v36; // [rsp+80h] [rbp-F8h]
  int v37; // [rsp+88h] [rbp-F0h]
  __int64 v38; // [rsp+90h] [rbp-E8h]
  PVOID ResourceDllBase; // [rsp+98h] [rbp-E0h] BYREF
  void *Src; // [rsp+A0h] [rbp-D8h]
  int v41; // [rsp+A8h] [rbp-D0h] BYREF
  const wchar_t *v42; // [rsp+B0h] [rbp-C8h]
  _UNICODE_STRING LocaleName; // [rsp+B8h] [rbp-C0h] BYREF
  int v44; // [rsp+C8h] [rbp-B0h] BYREF
  const wchar_t *v45; // [rsp+D0h] [rbp-A8h]
  _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-A0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v48[2]; // [rsp+118h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+128h] [rbp-50h]

  v9 = a3;
  v32 = a3;
  Src = a2;
  v38 = a5;
  v34 = a6;
  v36 = a7;
  v35 = a8;
  Module = 0LL;
  v41 = 3538996;
  v42 = L"LdrResSearchResource Enter";
  v44 = 3407922;
  v45 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v15);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !DosFileName || !a2 || v36 && !v35 )
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
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_30;
  }
  if ( (v17 & 0x41) == 0 )
    return -1073741582;
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
    v29 = v18;
    goto LABEL_104;
  }
LABEL_37:
  v37 = v17 & 0x8000;
  if ( (v17 & 0x8000) != 0 && (~(_WORD)v17 & 0x810) != 0 || (v17 & 0x3000) == 0x3000 || (v17 & 0x18) == 0x18 )
    goto LABEL_19;
  Size = 0LL;
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 0x400) == 0 || (v22 = (SIZE_T *)v34) == 0LL || !*(_QWORD *)v34 )
    {
      v18 = -1073741811;
      v29 = -1073741811;
      goto LABEL_104;
    }
    Size = *(_QWORD *)v34;
  }
  else
  {
    v22 = (SIZE_T *)v34;
  }
  if ( (v17 & 0x80000) != 0 )
  {
    if ( (v17 & 0x300) == 0 || !v22 || !*v22 )
    {
      v18 = -1073741811;
      v29 = -1073741811;
      goto LABEL_104;
    }
    Size = *v22;
  }
  memmove(v48, Src, 8 * v9);
  if ( (unsigned int)v9 <= 3 )
  {
    if ( (_DWORD)v9 != 3 )
      goto LABEL_69;
  }
  else
  {
    v32 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_69;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      LocaleName = 0LL;
      if ( RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) >= 0 )
      {
        if ( LocaleName.Buffer )
          RtlFreeAnsiString(&LocaleName);
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
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741811;
  }
  else
  {
    Lcid = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)Lcid;
LABEL_69:
  if ( (v17 & 0x300) == 0 )
  {
    if ( (v17 & 0x400) == 0 && ((v17 & 0x800) == 0 || (~v17 & 0x8000) == 0) )
    {
LABEL_93:
      if ( v37 )
      {
        result = LdrpResValidateFileHandle(DosFileName);
        if ( result < 0 )
          return result;
        v26 = LdrpResSearchResourceHandle((HANDLE)DosFileName, v38, v34, v36, v35);
      }
      else
      {
        v27 = v34;
        v28 = v32;
        v18 = LdrpResSearchResourceMappedFile((_DWORD)Module, Size, v17, (unsigned int)v48, v32, v38, v34, v36, v35);
        v29 = v18;
        if ( v18 != -1073741686 )
          goto LABEL_104;
        if ( ((v48[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_104;
        if ( LdrLoadAlternateResourceModuleEx(Module, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_104;
        Size = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, &Size, v17, 0LL) < 0 )
          goto LABEL_104;
        v26 = LdrpResSearchResourceMappedFile(
                (_DWORD)ResourceDllBase,
                Size,
                v17 | 0x1000000,
                (unsigned int)v48,
                v28,
                v38,
                v27,
                v36,
                v35);
      }
      v18 = v26;
      v29 = v26;
LABEL_104:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v12 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = v29;
      }
      if ( (*(_BYTE *)v12 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          v18 = v29;
        }
        LdrpTraceLoadMUIDll(&v44, *(unsigned __int8 *)v14);
      }
      return v18;
    }
    if ( (v17 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath((PCWSTR)DosFileName);
    }
    else
    {
      if ( (v17 & 0x1000) == 0 )
        goto LABEL_84;
      result = LdrpResValidateFileHandle(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_84:
    v23 = LdrpResMapFile((PCWSTR)DosFileName, &Module, &Size);
    v18 = v23;
    v29 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741302 )
        goto LABEL_104;
    }
    else
    {
      if ( (v17 & 0x400) != 0 )
      {
        v24 = 0LL;
        v25 = (WCHAR *)DosFileName;
      }
      else
      {
        v24 = (WCHAR *)DosFileName;
        v25 = 0LL;
      }
      result = LdrAddLoadAsDataTable(Module, v25, Size, v24, 0LL);
      if ( result < 0 )
        return result;
    }
    goto LABEL_93;
  }
  Module = (PVOID)DosFileName;
  if ( (v17 & 0x200) == 0 )
    goto LABEL_76;
  if ( (DosFileName & 1) == 0 )
    Module = (PVOID)(DosFileName | 1);
  if ( (v17 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)(DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_76:
    result = LdrpResGetMappingSize(Module, &Size, v17, 0LL);
    if ( result >= 0 || (v17 & 0x1000) == 0 )
      goto LABEL_93;
  }
  return result;
}
