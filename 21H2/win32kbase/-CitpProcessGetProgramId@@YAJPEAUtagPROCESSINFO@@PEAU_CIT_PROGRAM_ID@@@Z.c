/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00A58B0
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017428 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00A5C58 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00A5E10 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00D6470 (_wcsupr.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROGRAM_ID *v2; // r12
  char v4; // r14
  __int64 v5; // rsi
  PACCESS_TOKEN v6; // r15
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // eax
  const char *v12; // rdx
  int v13; // edi
  PIMAGE_NT_HEADERS v14; // rax
  DWORD TimeDateStamp; // edi
  DWORD CheckSum; // r14d
  PACCESS_TOKEN v18; // rdi
  int v19; // eax
  const char *v20; // rdx
  PVOID v21; // rsi
  size_t v22; // rdx
  __int64 Pool2; // rdi
  PVOID v24; // r14
  size_t v25; // rdx
  const char *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // r12
  char v30; // [rsp+30h] [rbp-378h]
  wchar_t *String; // [rsp+38h] [rbp-370h] BYREF
  PACCESS_TOKEN PrimaryToken; // [rsp+40h] [rbp-368h]
  PUNICODE_STRING pImageFileName; // [rsp+48h] [rbp-360h] BYREF
  void *v34; // [rsp+50h] [rbp-358h]
  size_t Size; // [rsp+58h] [rbp-350h] BYREF
  size_t v36; // [rsp+60h] [rbp-348h] BYREF
  int v37; // [rsp+68h] [rbp-340h]
  DWORD v38; // [rsp+70h] [rbp-338h]
  DWORD v39; // [rsp+74h] [rbp-334h]
  struct _CIT_PROGRAM_ID *v40; // [rsp+78h] [rbp-330h]
  PVOID BaseAddress; // [rsp+80h] [rbp-328h]
  __int64 v42; // [rsp+88h] [rbp-320h]
  __int64 v43; // [rsp+90h] [rbp-318h]
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-308h] BYREF
  PVOID v45[20]; // [rsp+140h] [rbp-268h] BYREF
  _BYTE v46[144]; // [rsp+1E0h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+270h] [rbp-138h] BYREF

  v2 = a2;
  v40 = a2;
  v4 = 0;
  v30 = 0;
  pImageFileName = 0LL;
  String = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  PrimaryToken = 0LL;
  BaseAddress = (PVOID)PsGetProcessSectionBaseAddress(*a1);
  if ( BaseAddress )
  {
    if ( a1 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v8, v7, v9, v10) )
    {
      KeAttachProcess(*a1);
      v30 = 1;
    }
    if ( (*((_DWORD *)a1 + 205) & 0x30) != 0x10 )
      goto LABEL_5;
    v18 = PsReferencePrimaryToken(*a1);
    PrimaryToken = v18;
    Size = 256LL;
    v36 = 130LL;
    v19 = RtlQueryPackageIdentity(v18, Src, &Size, v46, &v36, 0LL);
    if ( v19 < 0 )
    {
      CitpLogFailureWorker(v19, v20, 0x97Du);
      v6 = v18;
      goto LABEL_5;
    }
    LODWORD(v34) = 1231254357;
    v42 = 260LL;
    v21 = gpLeakTrackingAllocator;
    v22 = Size;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) == 0x49637355 )
    {
      v27 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v27) != 1231254357 )
        {
          if ( ++v27 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_27;
        }
        if ( Size < 0x1000 || (Size & 0xFFF) != 0 )
        {
          v4 = 1;
          v22 = Size + 16;
        }
        Pool2 = ExAllocatePool2(260LL, v22);
        if ( Pool2 )
        {
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v21,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_28;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v21,
                                       Pool2,
                                       BackTrace) )
          {
            goto LABEL_28;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        Pool2 = 0LL;
        goto LABEL_28;
      }
    }
LABEL_27:
    Pool2 = ExAllocatePool2(260LL, Size);
LABEL_28:
    String = (wchar_t *)Pool2;
    v37 = 1231254357;
    v43 = 260LL;
    v24 = gpLeakTrackingAllocator;
    v25 = v36;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) != 0x49637355
      || (v28 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_29:
      v5 = ExAllocatePool2(260LL, v36);
      goto LABEL_30;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v28) != 1231254357 )
    {
      if ( ++v28 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_29;
    }
    v29 = 0;
    if ( v36 < 0x1000 || (v36 & 0xFFF) != 0 )
    {
      v29 = 1;
      v25 = v36 + 16;
    }
    v5 = ExAllocatePool2(260LL, v25);
    if ( v5 )
    {
      memset(v45, 0, sizeof(v45));
      RtlCaptureStackBackTrace(0, 0x14u, v45, 0LL);
      if ( v29 && (unsigned __int64)(v5 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v24,
                                v5,
                                v45) )
        {
          v5 += 16LL;
          goto LABEL_30;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v24,
                                   v5,
                                   v45) )
      {
LABEL_30:
        v34 = (void *)v5;
        if ( !Pool2 || !v5 )
        {
          v13 = -1073741670;
          CitpLogFailureWorker(-1073741670, v26, 0x972u);
          v6 = PrimaryToken;
          goto LABEL_13;
        }
        memmove((void *)Pool2, Src, Size);
        wcsupr((wchar_t *)Pool2);
        memmove((void *)v5, v46, v36);
        v6 = PrimaryToken;
        v2 = v40;
LABEL_5:
        if ( String )
        {
LABEL_10:
          v14 = RtlImageNtHeader(BaseAddress);
          TimeDateStamp = v14->FileHeader.TimeDateStamp;
          v38 = TimeDateStamp;
          CheckSum = v14->OptionalHeader.CheckSum;
          v39 = CheckSum;
          if ( v5 )
            wcsupr((wchar_t *)v5);
          *(_QWORD *)v2 = String;
          String = 0LL;
          *((_QWORD *)v2 + 1) = v5;
          v5 = 0LL;
          *((_DWORD *)v2 + 6) = TimeDateStamp;
          *((_DWORD *)v2 + 7) = CheckSum;
          *((_DWORD *)v2 + 8) = (*((_DWORD *)a1 + 205) >> 4) & 3;
          *((_QWORD *)v2 + 2) = CitpProgramIdCalculateHash(v2);
          v13 = 0;
          goto LABEL_13;
        }
        v11 = SeLocateProcessImageName(*a1, &pImageFileName);
        v13 = v11;
        if ( v11 < 0 )
        {
          pImageFileName = 0LL;
          CitpLogFailureWorker(v11, v12, 0x98Au);
        }
        else if ( pImageFileName->Length )
        {
          v13 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
          if ( v13 >= 0 )
          {
            wcsupr(String);
            goto LABEL_10;
          }
        }
        else
        {
          v13 = -1073741637;
        }
LABEL_13:
        v4 = v30;
        goto LABEL_14;
      }
      ExFreePoolWithTag((PVOID)v5, 0);
    }
    v5 = 0LL;
    goto LABEL_30;
  }
  v13 = -1073741637;
  CitpLogFailureWorker(-1073741637, v7, 0x948u);
LABEL_14:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( String )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)String);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v5);
  if ( v4 )
    KeDetachProcess();
  return (unsigned int)v13;
}
