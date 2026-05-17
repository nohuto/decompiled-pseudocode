/*
 * XREFs of LdrResRelease @ 0x18008A4D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B7E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800748D0 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1624 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned int v12; // edi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v22; // [rsp+98h] [rbp+20h] BYREF

  v16 = 2621478;
  v17 = L"LdrResRelease Enter";
  v18 = 2490404;
  v19 = L"LdrResRelease Exit";
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v10 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v16, *(unsigned __int8 *)v14);
  }
  else
  {
    v10 = 2147353476LL;
  }
  if ( !String2 )
    return 3221225485LL;
  v22 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v21) )
        return 3221225485LL;
    }
    else
    {
      v21 = 0;
    }
    LOWORD(SourceString) = v21;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v15 = LdrRemoveLoadAsDataTable(String2, &v22, 0LL, a3);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073740024 && v15 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    v22 = String2;
  }
  v11 = (unsigned __int64)v22;
  LdrUnloadAlternateResourceModuleEx((__int64)v22, (unsigned __int16)SourceString, v6, v7);
  if ( (a3 & 0xC00) != 0 && v11 )
    NtUnmapViewOfSection(-1LL, v11 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_11:
  v12 = 0;
LABEL_12:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(&v18, *(unsigned __int8 *)v10);
  }
  return v12;
}
