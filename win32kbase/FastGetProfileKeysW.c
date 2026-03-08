/*
 * XREFs of FastGetProfileKeysW @ 0x1C015D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserReAllocPoolWithQuota @ 0x1C00C4890 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

unsigned __int64 __fastcall FastGetProfileKeysW(
        const UNICODE_STRING *a1,
        __int64 a2,
        void *a3,
        NSInstrumentation::CLeakTrackingAllocator **a4)
{
  _WORD *v5; // rsi
  char *v6; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v7; // rbx
  unsigned int v8; // r14d
  ULONG v9; // r15d
  ULONG Length; // r12d
  unsigned __int64 v11; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  void *v13; // r13
  _DWORD *v14; // rsi
  NTSTATUS v15; // eax
  ULONG v16; // eax
  __int64 QuotaZInit; // rax
  unsigned int v18; // ebp
  NSInstrumentation::CLeakTrackingAllocator *v19; // rax
  size_t v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v23; // rax
  unsigned __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-274h]
  void *Src; // [rsp+38h] [rbp-270h]
  NSInstrumentation::CLeakTrackingAllocator **v28; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v28 = a4;
  Src = a3;
  v5 = a3;
  v26 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = 512;
  v13 = OpenCacheKeyEx(a1, a2, 131097LL, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *a4 = 0LL;
  v14 = KeyValueInformation;
  while ( 1 )
  {
    ResultLength = 0;
    v15 = ZwEnumerateValueKey(v13, v9, KeyValueBasicInformation, v14, Length, &ResultLength);
    if ( v15 != -2147483643 )
      break;
    v16 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_13;
    if ( v6 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
      v16 = ResultLength;
      v14 = KeyValueInformation;
      Length = 512;
    }
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v12, v11, v16, 0x72707355u);
    v6 = (char *)QuotaZInit;
    if ( QuotaZInit )
    {
      Length = ResultLength;
      v14 = (_DWORD *)QuotaZInit;
    }
    else
    {
LABEL_18:
      ++v9;
    }
  }
  if ( v15 < 0 )
    goto LABEL_13;
  v18 = (v14[2] + v8 + 4099) & 0xFFFFF000;
  if ( v26 >= v18 )
  {
LABEL_17:
    v20 = (unsigned int)v14[2];
    v26 = v18;
    memmove((char *)v7 + 2 * ((unsigned __int64)v8 >> 1), v14 + 3, v20);
    *((_WORD *)v7 + ((unsigned __int64)(v8 + v14[2]) >> 1)) = 0;
    v8 += v14[2] + 2;
    goto LABEL_18;
  }
  if ( !v7 )
  {
    v7 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                        v12,
                                                        v11,
                                                        v18,
                                                        0x72707355u);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_17;
  }
  v19 = (NSInstrumentation::CLeakTrackingAllocator *)UserReAllocPoolWithQuota(v7, v8, v18, 0x72707355u);
  if ( v19 )
  {
    v7 = v19;
    goto LABEL_17;
  }
LABEL_13:
  if ( !v9 )
  {
    v5 = Src;
LABEL_19:
    v21 = -1LL;
    do
      ++v21;
    while ( v5[v21] );
    v22 = (unsigned int)(2 * v21 + 4);
    v23 = (NSInstrumentation::CLeakTrackingAllocator *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         v12,
                                                         v11,
                                                         v22,
                                                         0x72707355u);
    v7 = v23;
    if ( v23 )
    {
      memmove(v23, Src, v22 - 2);
      v8 = v22 - 2;
    }
  }
  if ( v13 )
    ZwClose(v13);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  result = (unsigned __int64)v8 >> 1;
  if ( v7 )
    *((_WORD *)v7 + result) = 0;
  *v28 = v7;
  return result;
}
