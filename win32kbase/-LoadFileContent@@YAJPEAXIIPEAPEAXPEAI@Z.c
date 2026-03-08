/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C0011204
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C00115F8 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  __int64 Length; // rsi
  unsigned int Status; // edi
  NSInstrumentation::CLeakTrackingAllocator *v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 Buffer; // rbx
  _QWORD *Pool2; // rax
  unsigned int v16; // edx
  __int64 v17; // r10
  char v18; // r14
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  __int128 FileInformation; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+140h] [rbp+40h]

  v26 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  Length = DWORD2(FileInformation);
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( HIDWORD(FileInformation) || (unsigned int)(DWORD2(FileInformation) - 64) > 0x3FFC0 )
      return (unsigned int)-1073741672;
    v10 = gpLeakTrackingAllocator;
    v19 = 1953198933;
    v11 = DWORD2(FileInformation);
    v21 = 260LL;
    v22 = DWORD2(FileInformation);
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Buffer = ExAllocatePool2(260LL, DWORD2(FileInformation), 1953198933LL);
      if ( Buffer )
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
      goto LABEL_7;
    }
    if ( v12 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x746B7355u)
        && Length + 16 > (unsigned __int64)(unsigned int)Length )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, Length + 16, v19);
        Buffer = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
              *Pool2 = 1953198933LL,
              Buffer = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v10 + 1),
            (const void *)0x746B7355);
        }
LABEL_7:
        if ( Buffer )
        {
LABEL_8:
          Status = ZwReadFile(
                     FileHandle,
                     0LL,
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     (PVOID)Buffer,
                     Length,
                     (PLARGE_INTEGER)&gZero,
                     0LL);
          if ( (Status & 0x80000000) != 0 )
            goto LABEL_36;
          if ( IoStatusBlock.Status < 0 )
          {
            Status = IoStatusBlock.Status;
          }
          else
          {
            if ( LODWORD(IoStatusBlock.Information) == (_DWORD)Length )
            {
              *a4 = (void *)Buffer;
              *a5 = Length;
              return Status;
            }
            Status = -1073741762;
          }
LABEL_35:
          if ( !Buffer )
            return Status;
LABEL_36:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Buffer);
          return Status;
        }
LABEL_34:
        Status = -1073741801;
        goto LABEL_35;
      }
    }
    else if ( v12 == 2 )
    {
      v20[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x746B7355u, v20) )
      {
        v20[0] = (unsigned __int64)&v21;
        v20[1] = (unsigned __int64)&v19;
        Buffer = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                   v10,
                   v20,
                   &v22);
        goto LABEL_7;
      }
      v18 = 0;
      if ( (unsigned int)Length < 0x1000uLL || (Length & 0xFFF) != 0 )
      {
        v11 = (unsigned int)Length + 16LL;
        v18 = 1;
        v22 = v11;
      }
      Buffer = ExAllocatePool2(v17, v11, v16);
      if ( Buffer )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v18 && (unsigned __int64)(Buffer & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v10,
                                  Buffer,
                                  v20[0],
                                  BackTrace) )
          {
            Buffer += 16LL;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v10,
                                     Buffer,
                                     v20[0],
                                     BackTrace) )
        {
          goto LABEL_8;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Buffer);
      }
    }
    Buffer = 0LL;
    goto LABEL_34;
  }
  return Status;
}
