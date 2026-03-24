/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C008F794
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C00463E0 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C008FABC (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C008FC70 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00C5710 (_wcsupr.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FE090 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v3; // r13
  wchar_t *v4; // rsi
  void *v5; // r14
  PACCESS_TOKEN v6; // r12
  const char *v7; // rdx
  __int64 v8; // rcx
  void *ProcessSectionBaseAddress; // rdi
  NTSTATUS v10; // eax
  int v11; // edi
  PIMAGE_NT_HEADERS v12; // rax
  DWORD TimeDateStamp; // edi
  DWORD CheckSum; // eax
  struct _CIT_PROGRAM_ID *v15; // rcx
  unsigned __int64 v16; // rax
  int v18; // eax
  const char *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // ecx
  char v23; // [rsp+30h] [rbp-228h]
  wchar_t *String; // [rsp+38h] [rbp-220h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-218h] BYREF
  void *v26; // [rsp+48h] [rbp-210h]
  size_t Size; // [rsp+50h] [rbp-208h] BYREF
  size_t v28; // [rsp+58h] [rbp-200h] BYREF
  struct _CIT_PROGRAM_ID *v29; // [rsp+60h] [rbp-1F8h]
  __int64 v30; // [rsp+68h] [rbp-1F0h]
  PACCESS_TOKEN v31; // [rsp+70h] [rbp-1E8h]
  DWORD v32; // [rsp+78h] [rbp-1E0h]
  DWORD v33; // [rsp+7Ch] [rbp-1DCh]
  _BYTE v34[144]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+120h] [rbp-138h] BYREF

  v29 = a2;
  v3 = 0;
  v23 = 0;
  pImageFileName = 0LL;
  v4 = 0LL;
  String = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*a1);
  v26 = ProcessSectionBaseAddress;
  if ( !ProcessSectionBaseAddress )
  {
    v11 = -1073741637;
    v21 = 2400;
    goto LABEL_30;
  }
  if ( a1 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8) )
  {
    KeAttachProcess(*a1);
    v3 = 1;
    v23 = 1;
  }
  if ( (*((_DWORD *)a1 + 205) & 0x30) == 0x10 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v31 = v6;
    Size = 256LL;
    v28 = 130LL;
    v18 = RtlQueryPackageIdentity(v6, Src, &Size, v34, &v28, 0LL, v23);
    if ( v18 < 0 )
    {
      CitpLogFailureWorker(v18, v19, 0x995u);
      goto LABEL_5;
    }
    v4 = (wchar_t *)Win32AllocPool(Size, 0x49637355u);
    String = v4;
    v20 = Win32AllocPool(v28, 0x49637355u);
    v5 = (void *)v20;
    v30 = v20;
    if ( v4 && v20 )
    {
      memmove(v4, Src, Size);
      wcsupr(v4);
      memmove(v5, v34, v28);
      goto LABEL_5;
    }
    v11 = -1073741670;
    v21 = 2442;
LABEL_30:
    v22 = v11;
LABEL_32:
    CitpLogFailureWorker(v22, v7, v21);
    goto LABEL_13;
  }
LABEL_5:
  if ( v4 )
    goto LABEL_10;
  v10 = SeLocateProcessImageName(*a1, &pImageFileName);
  v11 = v10;
  if ( v10 < 0 )
  {
    pImageFileName = 0LL;
    v21 = 2466;
    v22 = v10;
    goto LABEL_32;
  }
  if ( !pImageFileName->Length )
  {
    v11 = -1073741637;
    goto LABEL_13;
  }
  v11 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  v4 = String;
  if ( v11 < 0 )
    goto LABEL_13;
  wcsupr(String);
  ProcessSectionBaseAddress = v26;
LABEL_10:
  v12 = RtlImageNtHeader(ProcessSectionBaseAddress);
  TimeDateStamp = v12->FileHeader.TimeDateStamp;
  v32 = TimeDateStamp;
  CheckSum = v12->OptionalHeader.CheckSum;
  LODWORD(v26) = CheckSum;
  v33 = CheckSum;
  if ( v5 )
  {
    wcsupr((wchar_t *)v5);
    CheckSum = (unsigned int)v26;
  }
  v15 = v29;
  *(_QWORD *)v29 = v4;
  v4 = 0LL;
  *((_QWORD *)v15 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)v15 + 6) = TimeDateStamp;
  *((_DWORD *)v15 + 7) = CheckSum;
  *((_DWORD *)v15 + 8) = (*((_DWORD *)a1 + 205) >> 4) & 3;
  v16 = CitpProgramIdCalculateHash(v15);
  *((_QWORD *)v29 + 2) = v16;
  v11 = 0;
LABEL_13:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( v4 )
    Win32FreePool((__int64)v4);
  if ( v5 )
    Win32FreePool((__int64)v5);
  if ( v3 )
    KeDetachProcess();
  return (unsigned int)v11;
}
