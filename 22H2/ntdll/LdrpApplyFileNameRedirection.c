/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x18001A514
 * Callers:
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 * Callees:
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpGetFullPath @ 0x18006096C (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180060DA0 (LdrpFreeUnicodeString.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(
        __int64 a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        _UNICODE_STRING *a4,
        _BYTE *a5)
{
  struct _PEB *v5; // r13
  _BYTE *v7; // r12
  _UNICODE_STRING *v9; // rbp
  void *ApiSetMap; // rdi
  char v11; // si
  int v12; // eax
  __int16 v13; // di
  int v14; // ebx
  char v15; // r15
  unsigned __int16 v16; // ax
  NTSTATUS v17; // edi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD v20[8]; // [rsp+50h] [rbp-48h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+18h] BYREF

  v22 = a3;
  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  v11 = 1;
  *a5 = 0;
  LdrpLogDllState(0LL, a2, 5328LL);
  v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&v22, (__int64)v20);
  v13 = v20[0];
  v14 = v12;
  v15 = v22;
  if ( v12 >= 0 && (_BYTE)v22 )
  {
    if ( v20[0] )
      v16 = 5329;
    else
      v16 = 5330;
  }
  else
  {
    v16 = 5331;
  }
  LdrpLogDllState(0LL, v9, v16);
  if ( v15 )
  {
    if ( !v13 )
      return (unsigned int)-1073740671;
    v14 = LdrpBuildSystem32FileName(a4, v20);
    if ( v14 >= 0 )
    {
      ProcessParameters = v5->ProcessParameters;
      if ( !ProcessParameters || (ProcessParameters->Flags & 0x1000) == 0 )
        v11 = 0;
      v9 = a4;
    }
  }
  if ( v14 >= 0 && v11 && !LdrpIsSecureProcess )
  {
    v17 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            v9,
            (PUNICODE_STRING)&LdrpDefaultExtension,
            0LL,
            &DynamicString,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v17 >= 0 )
    {
      *v7 = 1;
      LdrpGetFullPath(&DynamicString, a4);
      LdrpFreeUnicodeString(&DynamicString);
    }
    if ( v17 != -1072365560 )
      return (unsigned int)v17;
  }
  return (unsigned int)v14;
}
