/*
 * XREFs of ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C00A36C8
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00A3364 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00A35FC (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpEnsureKey(void **a1, const unsigned __int16 *a2, char a3)
{
  _OWORD *v6; // rbx
  char *v7; // rsi
  NTSTATUS v8; // eax
  const char *v9; // rdx
  unsigned int v10; // ebx
  NTSTATUS v12; // eax
  const char *v13; // rdx
  ULONG v14; // eax
  PVOID v15; // rbx
  ULONG v16; // r14d
  __int64 v17; // rdx
  struct _ACL *Pool2; // rdi
  NTSTATUS Acl; // eax
  const char *v20; // rdx
  unsigned int v21; // r8d
  int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-60h]
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG Disposition; // [rsp+1A0h] [rbp+A0h] BYREF
  void *KeyHandle; // [rsp+1A8h] [rbp+A8h] BYREF

  KeyHandle = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a3 )
  {
LABEL_2:
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = v6;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    Disposition = 0;
    v8 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    v10 = v8;
    if ( v8 < 0 )
    {
      v25 = 4568;
    }
    else
    {
      if ( Disposition == 1 || !a3 || (v8 = ZwSetSecurityObject(KeyHandle, 4u, SecurityDescriptor), v10 = v8, v8 >= 0) )
      {
        v10 = 0;
        *a1 = KeyHandle;
        KeyHandle = 0LL;
        goto LABEL_6;
      }
      v25 = 4582;
    }
    CitpLogFailureWorker(v8, v9, v25);
LABEL_6:
    if ( !v7 )
      goto LABEL_7;
    goto LABEL_20;
  }
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v14 = RtlLengthSid(SeExports->SeLocalSystemSid);
    v15 = gpLeakTrackingAllocator;
    v16 = v14 + 20;
    v17 = v14 + 20;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) == 0x49637355 )
    {
      v23 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1231254357 )
        {
          if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_12;
        }
        if ( v16 < 0x1000uLL || (v17 & 0xFFF) != 0 )
        {
          LOBYTE(v7) = 1;
          v17 = v16 + 16LL;
        }
        Pool2 = (struct _ACL *)ExAllocatePool2(260LL, v17);
        if ( Pool2 )
        {
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (_BYTE)v7 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v15,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 2;
LABEL_13:
              v7 = (char *)Pool2;
              if ( Pool2 )
                goto LABEL_14;
              goto LABEL_23;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v15,
                                       Pool2,
                                       BackTrace) )
          {
            v7 = (char *)Pool2;
LABEL_14:
            Acl = RtlCreateAcl(Pool2, v16, 2u);
            v10 = Acl;
            if ( Acl < 0 )
            {
              v24 = 4533;
            }
            else
            {
              Acl = RtlAddAccessAllowedAce(Pool2, 2u, 0xF003Fu, SeExports->SeLocalSystemSid);
              v10 = Acl;
              if ( Acl < 0 )
              {
                v24 = 4543;
              }
              else
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Pool2, 0);
                v10 = Acl;
                if ( Acl >= 0 )
                {
                  v6 = SecurityDescriptor;
                  goto LABEL_2;
                }
                v24 = 4550;
              }
            }
            CitpLogFailureWorker(Acl, v20, v24);
LABEL_20:
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              v7);
            goto LABEL_7;
          }
          ExFreePoolWithTag(Pool2, 0);
        }
LABEL_23:
        v10 = -1073741670;
        v21 = 4526;
        v22 = -1073741670;
        goto LABEL_24;
      }
    }
LABEL_12:
    Pool2 = (struct _ACL *)ExAllocatePool2(260LL, v17);
    goto LABEL_13;
  }
  v21 = 4517;
  v22 = v12;
LABEL_24:
  CitpLogFailureWorker(v22, v13, v21);
LABEL_7:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
