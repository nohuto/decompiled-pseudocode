__int64 __fastcall CitpContextUserLogon(struct _CIT_IMPACT_CONTEXT *a1, const struct _LUID *a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v6; // rax
  const char *v7; // rdx
  void *v8; // r14
  NTSTATUS InformationToken; // eax
  unsigned int v10; // ebx
  PSID v11; // r13
  ULONG v12; // eax
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  __int64 v14; // r10
  size_t v15; // rsi
  int v16; // eax
  __int64 Pool2; // rbx
  struct _CIT_IMPACT_CONTEXT *v18; // rcx
  struct _LUID v19; // rax
  unsigned int v21; // r8d
  int v22; // ecx
  _QWORD *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // r10
  __int64 v26; // r11
  char v27; // r15
  unsigned int v28; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-C0h] BYREF
  void *TokenHandle; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v32[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  struct _CIT_IMPACT_CONTEXT *v35; // [rsp+78h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  PSID TokenInformation[12]; // [rsp+128h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  AuthenticationId = 0LL;
  v35 = a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v6 = PsReferencePrimaryToken(CurrentProcess);
  v8 = v6;
  if ( !v6 )
  {
    v10 = -1073741700;
    v21 = 628;
LABEL_21:
    v22 = v10;
LABEL_24:
    CitpLogFailureWorker(v22, v7, v21);
    goto LABEL_13;
  }
  InformationToken = SeQueryAuthenticationIdToken(v6, &AuthenticationId);
  v10 = InformationToken;
  if ( InformationToken < 0 )
  {
    v21 = 635;
    goto LABEL_23;
  }
  if ( AuthenticationId.LowPart == a2->LowPart && AuthenticationId.HighPart == a2->HighPart )
  {
    CitpParametersCompute((struct _CIT_PARAMETERS *)&xmmword_1C02D4D84);
    if ( *((_BYTE *)&qword_1C02D4D94 + 4) )
    {
      InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      v10 = InformationToken;
      if ( InformationToken < 0 )
      {
        v21 = 666;
      }
      else
      {
        ReturnLength[0] = 0;
        InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, ReturnLength);
        v10 = InformationToken;
        if ( InformationToken >= 0 )
        {
          v11 = TokenInformation[0];
          v12 = RtlLengthSid(TokenInformation[0]);
          v13 = gpLeakTrackingAllocator;
          v14 = v12;
          v15 = v12;
          v28 = 1231254357;
          v16 = *(_DWORD *)gpLeakTrackingAllocator;
          v33 = 260LL;
          v34 = v14;
          switch ( v16 )
          {
            case 0:
              Pool2 = ExAllocatePool2(260LL, (unsigned int)v14, 1231254357LL);
              if ( Pool2 )
                _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
              goto LABEL_11;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x49637355u)
                && v15 + 16 >= v15 )
              {
                v23 = (_QWORD *)ExAllocatePool2(v33 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, v28);
                Pool2 = (__int64)v23;
                if ( !v23
                  || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
                      *v23 = 1231254357LL,
                      Pool2 = (__int64)(v23 + 2),
                      v23 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v13 + 1),
                    (const void *)0x49637355);
                }
LABEL_11:
                if ( Pool2 )
                {
LABEL_12:
                  memmove((void *)Pool2, v11, v15);
                  v18 = v35;
                  v19 = *a2;
                  *((_QWORD *)v35 + 12) = Pool2;
                  v10 = 0;
                  *((struct _LUID *)v18 + 13) = v19;
                  goto LABEL_13;
                }
              }
              break;
            case 2:
              v32[0] = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, v32) )
              {
                v32[0] = (unsigned __int64)&v33;
                v32[1] = (unsigned __int64)&v28;
                Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                          (__int64)v13,
                          (__int64)v32,
                          &v34);
                goto LABEL_11;
              }
              v27 = 0;
              if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
              {
                v25 += 16LL;
                v27 = 1;
                v34 = v25;
              }
              Pool2 = ExAllocatePool2(v26, v25, v24);
              if ( Pool2 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
                NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
                if ( v27 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                          v13,
                                          Pool2,
                                          v32[0],
                                          BackTrace) )
                  {
                    Pool2 += 16LL;
                    goto LABEL_11;
                  }
                }
                else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                             v13,
                                             Pool2,
                                             v32[0],
                                             BackTrace) )
                {
                  goto LABEL_12;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
              }
              break;
          }
          v10 = -1073741670;
          v21 = 696;
          goto LABEL_21;
        }
        v21 = 682;
      }
LABEL_23:
      v22 = InformationToken;
      goto LABEL_24;
    }
    CitpCleanupGlobalImpactContext(&v35);
    v10 = -1073741637;
  }
  else
  {
    v10 = -1073741587;
  }
LABEL_13:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v8 )
    PsDereferencePrimaryToken(v8);
  return v10;
}
