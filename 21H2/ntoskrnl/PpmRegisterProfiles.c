/*
 * XREFs of PpmRegisterProfiles @ 0x1407C5C88
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x1407C5C70 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     PpmResetProfileSettings @ 0x1403C8B84 (PpmResetProfileSettings.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmEventTraceProfiles @ 0x1407C5E94 (PpmEventTraceProfiles.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  NTSTATUS v5; // r14d
  unsigned __int8 v6; // r11
  ULONGLONG v7; // rbx
  SIZE_T v8; // rdi
  size_t v9; // r12
  char v10; // r11
  PVOID PoolWithTag; // rax
  __int64 v12; // rsi
  unsigned __int8 v13; // r15
  __int64 v14; // r12
  ULONGLONG v15; // rsi
  __int64 v16; // r13
  char v17; // al
  size_t v18; // rbx
  __int64 v20; // [rsp+20h] [rbp-48h]
  size_t pcbLength; // [rsp+80h] [rbp+18h] BYREF
  ULONGLONG v22; // [rsp+88h] [rbp+20h] BYREF

  pcbLength = 0LL;
  v22 = 0LL;
  v3 = a1;
  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = a1;
    v5 = RtlULongLongMult(a1, 0x15B0uLL, &v22);
    if ( v5 >= 0 )
    {
      v6 = 0;
      v7 = (v22 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v8 = v7;
      v9 = v7;
      if ( (_BYTE)v3 )
      {
        while ( 1 )
        {
          v5 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v6 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
          if ( v5 < 0 )
            break;
          v6 = v10 + 1;
          v8 += pcbLength + 2;
          v9 = v8;
          if ( v6 >= (unsigned __int8)v3 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x664D5050u);
        v20 = (__int64)PoolWithTag;
        v12 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          if ( (_BYTE)v3 )
          {
            v13 = 0;
            v14 = v12 + 32;
            v15 = v7 + v12;
            v16 = a2 + 8;
            do
            {
              ++v13;
              *(_OWORD *)(v14 - 20) = *(_OWORD *)*(_QWORD *)(v16 - 8);
              v17 = *(_BYTE *)(v16 + 8);
              *(_QWORD *)(v14 + 5504) = -1LL;
              *(_BYTE *)v14 = v17;
              *(_QWORD *)(v14 - 32) = v15;
              *(_BYTE *)(v14 - 24) = v13;
              RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v16, 0x7FFFFFFFuLL, &pcbLength);
              v18 = pcbLength;
              RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v14 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v16);
              *(_QWORD *)(v16 + 16) = v14 - 32;
              v15 += 2 * v18 + 2;
              v14 += 5552LL;
              v16 += 32LL;
            }
            while ( v13 < (unsigned __int8)v3 );
            v12 = v20;
            v4 = v3;
          }
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
          PpmProfiles = v12;
          PpmProfileCount = v3;
          if ( (_BYTE)v3 )
          {
            do
            {
              PpmResetProfileSettings(v12);
              v12 += 5552LL;
              --v4;
            }
            while ( v4 );
          }
          PpmEventTraceProfiles(0LL);
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          PpmReleaseLock(&PpmPerfPolicyLock);
          PpmProfileStatus |= 1u;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v5;
}
