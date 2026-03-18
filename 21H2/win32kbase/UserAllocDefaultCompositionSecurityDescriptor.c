/*
 * XREFs of UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0058980
 * Callers:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x1C0058084 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAP.c)
 *     CreateSharedResourceObject @ 0x1C0058874 (CreateSharedResourceObject.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0210D70 (DCompositionCreateSynchronizationObject.c)
 * Callees:
 *     CreateSecurityDescriptor @ 0x1C0032DE0 (CreateSecurityDescriptor.c)
 *     AllocAce @ 0x1C0058D40 (AllocAce.c)
 *     AllocateWindowManagerSid @ 0x1C0058EC0 (AllocateWindowManagerSid.c)
 *     ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0058FF4 (-AllocateLocalSystemSid@@YAJPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall UserAllocDefaultCompositionSecurityDescriptor(int a1, struct _ACL **a2)
{
  char v2; // r15
  void *v4; // rsi
  PSID v5; // r12
  int v6; // eax
  PSID v7; // rdi
  NTSTATUS InformationToken; // ebx
  int v9; // eax
  __int64 v10; // rax
  PVOID v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  NTSTATUS v15; // eax
  PVOID v16; // r14
  __int64 v17; // rdx
  __int64 Pool2; // rdi
  __int64 v19; // rax
  struct _ACL *SecurityDescriptor; // rax
  __int64 v22; // rax
  char v23; // bl
  __int64 v24; // rax
  PSID Sid; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v26; // [rsp+38h] [rbp-C8h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-C0h] BYREF
  int TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ReturnLength; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v30; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v31[3]; // [rsp+54h] [rbp-ACh] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v33[26]; // [rsp+100h] [rbp+0h] BYREF
  ULONG AceListLength; // [rsp+1F0h] [rbp+F0h] BYREF
  PSID TokenInformationLength; // [rsp+1F8h] [rbp+F8h] BYREF

  v2 = 0;
  AceListLength = 0;
  v4 = 0LL;
  Sid = 0LL;
  v5 = 0LL;
  TokenInformationLength = 0LL;
  TokenHandle = 0LL;
  *a2 = 0LL;
  v6 = AllocateLocalSystemSid(&Sid);
  v7 = Sid;
  InformationToken = v6;
  if ( v6 >= 0 )
  {
    v4 = (void *)AllocAce(0LL, Sid, (__int64)&AceListLength);
    if ( v4 )
    {
      v9 = AllocateWindowManagerSid(&TokenInformationLength);
      v5 = TokenInformationLength;
      InformationToken = v9;
      if ( v9 < 0 )
        goto LABEL_25;
      v10 = AllocAce(v4, TokenInformationLength, (__int64)&AceListLength);
      if ( !v10 )
        goto LABEL_49;
      v4 = (void *)v10;
      if ( !a1 )
        goto LABEL_23;
      TokenInformation = 0;
      InformationToken = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
      if ( InformationToken < 0 )
      {
LABEL_24:
        v7 = Sid;
        goto LABEL_25;
      }
      ReturnLength = 0;
      ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
      if ( !TokenInformation )
      {
LABEL_15:
        v26 = 0;
        v15 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &v26);
        v16 = gpLeakTrackingAllocator;
        v17 = v26;
        InformationToken = v15;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) == 0x65737355 )
        {
          v24 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v24) != 1702064981 )
            {
              if ( ++v24 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_16;
            }
            if ( v26 < 0x1000uLL || (v26 & 0xFFF) != 0 )
            {
              v2 = 1;
              v17 = v26 + 16LL;
            }
            Pool2 = ExAllocatePool2(261LL, v17);
            if ( !Pool2 )
            {
LABEL_22:
              if ( InformationToken >= 0 )
              {
LABEL_23:
                SecurityDescriptor = CreateSecurityDescriptor(v4, AceListLength, 0);
                *a2 = SecurityDescriptor;
                if ( SecurityDescriptor )
                  goto LABEL_24;
LABEL_49:
                InformationToken = -1073741801;
                goto LABEL_24;
              }
              goto LABEL_24;
            }
            memset(v33, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, v33, 0LL);
            if ( v2 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v16,
                                      Pool2,
                                      v33) )
              {
                Pool2 += 16LL;
LABEL_17:
                if ( !Pool2 )
                  goto LABEL_22;
                goto LABEL_18;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v16,
                                         Pool2,
                                         v33) )
            {
LABEL_18:
              v31[0] = 0;
              InformationToken = ZwQueryInformationToken(TokenHandle, TokenUser, (PVOID)Pool2, v26, v31);
              if ( InformationToken >= 0 )
              {
                v19 = AllocAce(v4, *(PSID *)Pool2, (__int64)&AceListLength);
                if ( v19 )
                  v4 = (void *)v19;
                else
                  InformationToken = -1073741801;
              }
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                (void *)Pool2);
              goto LABEL_22;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
            goto LABEL_22;
          }
        }
LABEL_16:
        Pool2 = ExAllocatePool2(261LL, v26);
        goto LABEL_17;
      }
      LODWORD(TokenInformationLength) = 0;
      ZwQueryInformationToken(TokenHandle, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenInformationLength);
      v11 = gpLeakTrackingAllocator;
      v12 = (unsigned int)TokenInformationLength;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) == 0x65737355 )
      {
        v22 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 1702064981 )
          {
            if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_9;
          }
          v23 = 0;
          if ( (unsigned int)TokenInformationLength < 0x1000uLL
            || ((unsigned __int16)TokenInformationLength & 0xFFF) != 0 )
          {
            v23 = 1;
            v12 = (unsigned int)TokenInformationLength + 16LL;
          }
          v13 = ExAllocatePool2(261LL, v12);
          if ( !v13 )
            goto LABEL_49;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v23 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v11,
                                    v13,
                                    BackTrace) )
            {
              v13 += 16LL;
LABEL_10:
              if ( !v13 )
                goto LABEL_49;
              goto LABEL_11;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v11,
                                       v13,
                                       BackTrace) )
          {
LABEL_11:
            v30 = 0;
            InformationToken = ZwQueryInformationToken(
                                 TokenHandle,
                                 TokenAppContainerSid,
                                 (PVOID)v13,
                                 (ULONG)TokenInformationLength,
                                 &v30);
            if ( InformationToken >= 0 )
            {
              v14 = AllocAce(v4, *(PSID *)v13, (__int64)&AceListLength);
              if ( v14 )
                v4 = (void *)v14;
              else
                InformationToken = -1073741801;
            }
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (void *)v13);
            if ( InformationToken < 0 )
              goto LABEL_24;
            goto LABEL_15;
          }
          ExFreePoolWithTag((PVOID)v13, 0);
          goto LABEL_49;
        }
      }
LABEL_9:
      v13 = ExAllocatePool2(261LL, (unsigned int)TokenInformationLength);
      goto LABEL_10;
    }
    InformationToken = -1073741801;
  }
LABEL_25:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v7 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  if ( v4 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
  return (unsigned int)InformationToken;
}
