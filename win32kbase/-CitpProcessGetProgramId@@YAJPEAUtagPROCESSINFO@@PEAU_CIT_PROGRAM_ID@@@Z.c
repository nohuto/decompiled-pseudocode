/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00B14F0
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B590 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C00B18D0 (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00B1A84 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _wcsupr @ 0x1C00DAF40 (_wcsupr.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0272BF0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROGRAM_ID *v2; // r15
  char v4; // r14
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  PACCESS_TOKEN v6; // r13
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rdx
  NTSTATUS v11; // eax
  const char *v12; // rdx
  int v13; // esi
  PIMAGE_NT_HEADERS v14; // rax
  DWORD TimeDateStamp; // esi
  DWORD CheckSum; // r14d
  int v18; // eax
  NSInstrumentation::CLeakTrackingAllocator *v19; // rdi
  size_t v20; // rsi
  int v21; // eax
  __int64 Pool2; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v23; // r14
  size_t v24; // rdi
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rax
  unsigned int v29; // edx
  __int64 v30; // r10
  char v31; // r15
  unsigned int v32; // r8d
  int v33; // ecx
  char v34; // [rsp+30h] [rbp-3A8h]
  wchar_t *String; // [rsp+38h] [rbp-3A0h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-398h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-390h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+50h] [rbp-388h] BYREF
  void *v39; // [rsp+58h] [rbp-380h] BYREF
  size_t Size; // [rsp+60h] [rbp-378h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-370h] BYREF
  unsigned __int64 v42; // [rsp+70h] [rbp-368h] BYREF
  size_t v43; // [rsp+78h] [rbp-360h] BYREF
  __int64 v44; // [rsp+80h] [rbp-358h] BYREF
  size_t v45; // [rsp+88h] [rbp-350h] BYREF
  __int64 v46; // [rsp+90h] [rbp-348h] BYREF
  PACCESS_TOKEN PrimaryToken; // [rsp+98h] [rbp-340h]
  __int64 *v48; // [rsp+A0h] [rbp-338h] BYREF
  unsigned int *v49; // [rsp+A8h] [rbp-330h]
  DWORD v50; // [rsp+B0h] [rbp-328h]
  DWORD v51; // [rsp+B4h] [rbp-324h]
  struct _CIT_PROGRAM_ID *v52; // [rsp+B8h] [rbp-320h]
  PVOID BaseAddress; // [rsp+C0h] [rbp-318h]
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-308h] BYREF
  PVOID v55[20]; // [rsp+170h] [rbp-268h] BYREF
  _BYTE v56[144]; // [rsp+210h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+2A0h] [rbp-138h] BYREF

  v2 = a2;
  v52 = a2;
  v4 = 0;
  v34 = 0;
  pImageFileName = 0LL;
  String = 0LL;
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
  v39 = 0LL;
  v6 = 0LL;
  PrimaryToken = 0LL;
  BaseAddress = (PVOID)PsGetProcessSectionBaseAddress(*a1);
  if ( BaseAddress )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    if ( a1 != (PRKPROCESS *)v10 )
    {
      KeAttachProcess(*a1);
      v34 = 1;
    }
    if ( (*((_DWORD *)a1 + 203) & 0x30) != 0x10 )
      goto LABEL_7;
    v6 = PsReferencePrimaryToken(*a1);
    PrimaryToken = v6;
    Size = 256LL;
    v43 = 130LL;
    v18 = RtlQueryPackageIdentity(v6, Src, &Size, v56, &v43, 0LL);
    if ( v18 < 0 )
    {
      CitpLogFailureWorker(v18, v12, 0x6FDu);
      goto LABEL_7;
    }
    v36 = 1231254357;
    v44 = 260LL;
    v19 = gpLeakTrackingAllocator;
    v20 = Size;
    v45 = Size;
    v21 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, Size, 1231254357LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v19 + 14);
      goto LABEL_31;
    }
    if ( v21 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u) )
      {
        v12 = (const char *)(v20 + 16);
        if ( v20 + 16 >= v20 )
        {
          v26 = (_QWORD *)ExAllocatePool2(v44 & 0xFFFFFFFFFFFFFFFDuLL, v12, v36);
          Pool2 = (__int64)v26;
          if ( !v26
            || (_InterlockedIncrement64((volatile signed __int64 *)v19 + 14),
                *v26 = 1231254357LL,
                Pool2 = (__int64)(v26 + 2),
                v26 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v19 + 1),
              (const void *)0x49637355);
          }
LABEL_31:
          String = (wchar_t *)Pool2;
          v37 = 1231254357;
          v46 = 260LL;
          v23 = gpLeakTrackingAllocator;
          v24 = v43;
          v39 = (void *)v43;
          v25 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               v43,
                                                                                               1231254357LL);
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              _InterlockedIncrement64((volatile signed __int64 *)v23 + 14);
            goto LABEL_34;
          }
          if ( v25 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u) )
            {
              v12 = (const char *)(v24 + 16);
              if ( v24 + 16 >= v24 )
              {
                v28 = (_QWORD *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFDuLL, v12, v37);
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v28;
                if ( !v28
                  || (_InterlockedIncrement64((volatile signed __int64 *)v23 + 14),
                      *v28 = 1231254357LL,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v28 + 2),
                      v28 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v23 + 1),
                    (const void *)0x49637355);
                }
                goto LABEL_34;
              }
            }
          }
          else if ( v25 == 2 )
          {
            v42 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v42) )
            {
              v48 = &v46;
              v49 = &v37;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                 (__int64)v23,
                                                                                                 (__int64)&v48,
                                                                                                 &v39);
              goto LABEL_34;
            }
            v31 = 0;
            if ( v24 < 0x1000 || (v24 & 0xFFF) != 0 )
            {
              v31 = 1;
              v24 += 16LL;
              v39 = (void *)v24;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               v30,
                                                                                               v24,
                                                                                               v29);
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v23 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(v55);
              if ( v31
                && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                 + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v23,
                                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                        v42,
                                        v55) )
                {
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                  goto LABEL_34;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v23,
                                           UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                           v42,
                                           v55) )
              {
                goto LABEL_34;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v23 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            }
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_34:
          v39 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          if ( !Pool2 || !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            v13 = -1073741670;
            v32 = 1778;
            v33 = -1073741670;
            goto LABEL_80;
          }
          memmove((void *)Pool2, Src, Size);
          wcsupr((wchar_t *)Pool2);
          memmove((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v56, v43);
          v2 = v52;
LABEL_7:
          if ( String )
          {
LABEL_12:
            v14 = RtlImageNtHeader(BaseAddress);
            TimeDateStamp = v14->FileHeader.TimeDateStamp;
            v50 = TimeDateStamp;
            CheckSum = v14->OptionalHeader.CheckSum;
            v51 = CheckSum;
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              wcsupr((wchar_t *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            *(_QWORD *)v2 = String;
            String = 0LL;
            *((_QWORD *)v2 + 1) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
            *((_DWORD *)v2 + 6) = TimeDateStamp;
            *((_DWORD *)v2 + 7) = CheckSum;
            *((_DWORD *)v2 + 8) = (*((_DWORD *)a1 + 203) >> 4) & 3;
            *((_QWORD *)v2 + 2) = CitpProgramIdCalculateHash(v2);
            v13 = 0;
            goto LABEL_15;
          }
          v11 = SeLocateProcessImageName(*a1, &pImageFileName);
          v13 = v11;
          if ( v11 >= 0 )
          {
            if ( pImageFileName->Length )
            {
              v13 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
              if ( v13 >= 0 )
              {
                wcsupr(String);
                goto LABEL_12;
              }
            }
            else
            {
              v13 = -1073741637;
            }
LABEL_15:
            v4 = v34;
            goto LABEL_16;
          }
          pImageFileName = 0LL;
          v32 = 1802;
          v33 = v11;
LABEL_80:
          CitpLogFailureWorker(v33, v12, v32);
          goto LABEL_15;
        }
      }
    }
    else if ( v21 == 2 )
    {
      v41 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v41) )
      {
        v48 = &v44;
        v49 = &v36;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v19,
                  (__int64)&v48,
                  &v45);
        goto LABEL_31;
      }
      if ( v20 < 0x1000 || (v20 & 0xFFF) != 0 )
      {
        v4 = 1;
        v20 = Size + 16;
        v45 = Size + 16;
      }
      Pool2 = ExAllocatePool2(v27, v20, 1231254357LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v19 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v19,
                                  Pool2,
                                  v41,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_31;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v19,
                                     Pool2,
                                     v41,
                                     BackTrace) )
        {
          goto LABEL_31;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v19 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    Pool2 = 0LL;
    goto LABEL_31;
  }
  v13 = -1073741637;
  CitpLogFailureWorker(-1073741637, v7, 0x6C8u);
LABEL_16:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  if ( String )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)String);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  if ( v4 )
    KeDetachProcess();
  return (unsigned int)v13;
}
