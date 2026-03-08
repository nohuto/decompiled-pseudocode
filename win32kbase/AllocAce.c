/*
 * XREFs of AllocAce @ 0x1C0065880
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0065460 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C031FB94 (InitSecurity.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall AllocAce(void *a1, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  unsigned __int64 v7; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  ULONG v9; // r12d
  size_t v10; // r14
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 QuotaZInit; // rbx
  PSID v15; // r8
  __int64 v16; // rdx
  _QWORD *Pool2; // rax
  char v19; // r15
  ULONG v20; // [rsp+28h] [rbp-C9h]
  unsigned __int64 v21[2]; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v22; // [rsp+48h] [rbp-A9h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-A1h] BYREF
  PVOID BackTrace[28]; // [rsp+58h] [rbp-99h] BYREF
  unsigned int v25; // [rsp+148h] [rbp+57h] BYREF
  char v26; // [rsp+150h] [rbp+5Fh]
  char v27; // [rsp+158h] [rbp+67h]
  int v28; // [rsp+160h] [rbp+6Fh]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v20 = RtlLengthSid(Sid);
  v9 = v20 + 8;
  if ( !a1 )
  {
    LODWORD(v10) = 0;
    QuotaZInit = (__int64)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v8, v7, v9, 0x65737355u);
    if ( QuotaZInit )
      goto LABEL_8;
    return 0LL;
  }
  v10 = (unsigned int)*a6;
  if ( v9 + (unsigned int)v10 < (unsigned int)v10 )
    return 0LL;
  v11 = gpLeakTrackingAllocator;
  v12 = v9 + (unsigned int)v10;
  v25 = 1702064981;
  v22 = 260LL;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  v23 = v12;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65737355u)
        || v12 + 16 < v12 )
      {
        return 0LL;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v22 & 0xFFFFFFFFFFFFFFFCuLL | 1, v12 + 16, v25);
      QuotaZInit = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
            *Pool2 = 1702064981LL,
            QuotaZInit = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          (const void *)0x65737355);
      }
      goto LABEL_6;
    }
    if ( v13 != 2 )
      return 0LL;
    v21[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x65737355u, v21) )
    {
      v21[0] = (unsigned __int64)&v22;
      v21[1] = (unsigned __int64)&v25;
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                     v11,
                     v21,
                     &v23);
      goto LABEL_6;
    }
    v19 = 0;
    if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
    {
      v12 += 16LL;
      v19 = 1;
      v23 = v12;
    }
    QuotaZInit = ExAllocatePool2(261LL, v12, 1702064981LL);
    if ( !QuotaZInit )
      return 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v19 && (unsigned __int64)(QuotaZInit & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v11,
                              QuotaZInit,
                              v21[0],
                              BackTrace) )
      {
        QuotaZInit += 16LL;
        goto LABEL_6;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v11,
                                 QuotaZInit,
                                 v21[0],
                                 BackTrace) )
    {
      goto LABEL_7;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)QuotaZInit);
    return 0LL;
  }
  QuotaZInit = ExAllocatePool2(261LL, (unsigned int)v12, 1702064981LL);
  if ( QuotaZInit )
    _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
LABEL_6:
  if ( QuotaZInit )
  {
LABEL_7:
    memmove((void *)QuotaZInit, a1, v10);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
LABEL_8:
    v15 = Sid;
    v16 = QuotaZInit + (unsigned int)v10;
    *a6 = v9 + v10;
    *(_BYTE *)v16 = v26;
    *(_BYTE *)(v16 + 1) = v27;
    *(_DWORD *)(v16 + 4) = v28;
    *(_WORD *)(v16 + 2) = v9;
    RtlCopySid(v20, (PSID)(v16 + 8), v15);
    return QuotaZInit;
  }
  return 0LL;
}
