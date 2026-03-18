/*
 * XREFs of FastGetProfileKeysW @ 0x1C01491C0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C00AF750 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

unsigned __int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, __int64 a2, _WORD *a3, __int64 *a4)
{
  _WORD *v4; // r15
  ULONG Length; // r14d
  char *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // esi
  ULONG v9; // r13d
  unsigned int v10; // edi
  void *v11; // rax
  _DWORD *v12; // r15
  NTSTATUS v13; // eax
  ULONG v14; // eax
  PVOID v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  char v19; // r14
  unsigned int v20; // r14d
  PVOID v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  PVOID v25; // rbx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 Pool2; // rdi
  unsigned int v30; // edi
  __int64 v31; // rax
  size_t v32; // r8
  char v33; // si
  unsigned __int64 result; // rax
  size_t Size; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-C4h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h]
  void *Src; // [rsp+48h] [rbp-B8h]
  __int64 *v40; // [rsp+50h] [rbp-B0h]
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v42[20]; // [rsp+100h] [rbp+0h] BYREF
  PVOID v43[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE KeyValueInformation[512]; // [rsp+240h] [rbp+140h] BYREF

  v40 = a4;
  v4 = a3;
  Src = a3;
  Length = 512;
  Size = 0x20000000000LL;
  v37 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = OpenCacheKeyEx(a1, a2, 131097LL, 0LL);
  Handle = v11;
  if ( !v11 )
  {
LABEL_53:
    v24 = -1LL;
    do
      ++v24;
    while ( v4[v24] );
    v25 = gpLeakTrackingAllocator;
    v26 = (unsigned int)(2 * v24 + 4);
    v27 = v26;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) == 0x72707355 )
    {
      v28 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v28) != 1919972181 )
        {
          if ( ++v28 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_59;
        }
        v33 = 0;
        if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
        {
          v33 = 1;
          v27 = v26 + 16;
        }
        Pool2 = ExAllocatePool2(261LL, v27);
        if ( !Pool2 )
          goto LABEL_70;
        memset(v43, 0, sizeof(v43));
        RtlCaptureStackBackTrace(0, 0x14u, v43, 0LL);
        if ( v33 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v25,
                                  Pool2,
                                  v43) )
          {
            Pool2 += 16LL;
LABEL_60:
            v7 = Pool2;
            if ( !Pool2 )
              goto LABEL_78;
            goto LABEL_61;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v25,
                                     Pool2,
                                     v43) )
        {
          v7 = Pool2;
LABEL_61:
          memmove((void *)Pool2, Src, v26 - 2);
          v30 = v26 - 2;
          goto LABEL_79;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_70:
        v7 = 0LL;
        goto LABEL_78;
      }
    }
LABEL_59:
    Pool2 = ExAllocatePool2(261LL, v26);
    goto LABEL_60;
  }
  v12 = KeyValueInformation;
  *v40 = 0LL;
  while ( 1 )
  {
    ResultLength = 0;
    v13 = ZwEnumerateValueKey(v11, v9, KeyValueBasicInformation, v12, Length, &ResultLength);
    if ( v13 != -2147483643 )
      break;
    v14 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_51;
    if ( v6 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v6);
      v14 = ResultLength;
      v12 = KeyValueInformation;
      HIDWORD(Size) = 512;
    }
    v15 = gpLeakTrackingAllocator;
    v16 = v14;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) != 0x72707355
      || (v6 = 0LL, v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_11:
      v18 = ExAllocatePool2(261LL, v16);
LABEL_12:
      v6 = (char *)v18;
      if ( !v18 )
        goto LABEL_19;
      goto LABEL_13;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1919972181 )
    {
      if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_11;
    }
    v19 = 0;
    if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
    {
      v19 = 1;
      v16 += 16LL;
    }
    v18 = ExAllocatePool2(261LL, v16);
    if ( !v18 )
      goto LABEL_18;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v19 && (unsigned __int64)(v18 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v15,
                               v18,
                               BackTrace) )
        goto LABEL_30;
      v18 += 16LL;
      goto LABEL_12;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v15,
                             v18,
                             BackTrace) )
    {
LABEL_30:
      ExFreePoolWithTag((PVOID)v18, 0);
LABEL_18:
      v18 = 0LL;
LABEL_19:
      Length = HIDWORD(Size);
      goto LABEL_20;
    }
    v6 = (char *)v18;
LABEL_13:
    Length = ResultLength;
    HIDWORD(Size) = ResultLength;
LABEL_20:
    v8 = Size;
    if ( !v18 )
    {
      v18 = (__int64)v12;
      ++v9;
    }
    v12 = (_DWORD *)v18;
    v10 = v37;
LABEL_23:
    v11 = Handle;
  }
  if ( v13 < 0 )
    goto LABEL_51;
  v20 = (v12[2] + v8 + 4099) & 0xFFFFF000;
  if ( v10 >= v20 )
    goto LABEL_65;
  if ( v7 )
  {
    v31 = UserReAllocPoolWithQuota((void *)v7, (unsigned int)Size, v20, 1919972181);
    if ( !v31 )
      goto LABEL_51;
    v7 = v31;
    goto LABEL_64;
  }
  v21 = gpLeakTrackingAllocator;
  v22 = v20;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72707355) != 0x72707355
    || (v23 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_38:
    v7 = ExAllocatePool2(261LL, v20);
    goto LABEL_39;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1919972181 )
  {
    if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_38;
  }
  if ( v20 < 0x1000uLL )
    v22 = v20 + 16LL;
  v7 = ExAllocatePool2(261LL, v22);
  if ( !v7 )
    goto LABEL_50;
  memset(v42, 0, sizeof(v42));
  RtlCaptureStackBackTrace(0, 0x14u, v42, 0LL);
  if ( v20 < 0x1000uLL && (unsigned __int64)(v7 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v21, v7, v42) )
      goto LABEL_49;
    v7 += 16LL;
LABEL_39:
    if ( !v7 )
      goto LABEL_51;
LABEL_64:
    v8 = Size;
LABEL_65:
    v32 = (unsigned int)v12[2];
    v10 = v20;
    v37 = v20;
    memmove((void *)(v7 + 2 * ((unsigned __int64)v8 >> 1)), v12 + 3, v32);
    Length = HIDWORD(Size);
    *(_WORD *)(v7 + 2 * ((unsigned __int64)(v8 + v12[2]) >> 1)) = 0;
    v8 += v12[2] + 2;
    LODWORD(Size) = v8;
    ++v9;
    goto LABEL_23;
  }
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v21, v7, v42) )
    goto LABEL_64;
LABEL_49:
  ExFreePoolWithTag((PVOID)v7, 0);
LABEL_50:
  v7 = 0LL;
LABEL_51:
  if ( !v9 )
  {
    v4 = Src;
    goto LABEL_53;
  }
LABEL_78:
  v30 = Size;
LABEL_79:
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  result = (unsigned __int64)v30 >> 1;
  if ( v7 )
    *(_WORD *)(v7 + 2 * result) = 0;
  *v40 = v7;
  return result;
}
