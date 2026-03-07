__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  NTSTATUS v5; // r14d
  unsigned __int8 v6; // r11
  ULONGLONG v7; // rbx
  ULONGLONG v8; // r10
  __int64 v9; // r10
  char v10; // r11
  __int64 Pool2; // rax
  __int64 v12; // rbp
  ULONGLONG v13; // rax
  unsigned __int8 v14; // r15
  __int64 v15; // r13
  ULONGLONG v16; // rbp
  __int64 v17; // r12
  char v18; // al
  size_t v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-48h]
  size_t pcbLength; // [rsp+80h] [rbp+18h] BYREF
  ULONGLONG v23; // [rsp+88h] [rbp+20h] BYREF

  pcbLength = 0LL;
  v23 = 0LL;
  v3 = a1;
  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = a1;
    v5 = RtlULongLongMult(a1, 0x3C0uLL, &v23);
    if ( v5 >= 0 )
    {
      v6 = 0;
      v7 = (v23 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v8 = v7;
      if ( (_BYTE)v3 )
      {
        while ( 1 )
        {
          v5 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v6 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
          if ( v5 < 0 )
            break;
          v6 = v10 + 1;
          v8 = pcbLength + 2 + v9;
          if ( v6 >= (unsigned __int8)v3 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        Pool2 = ExAllocatePool2(64LL, v8, 1716342864LL);
        v21 = Pool2;
        v12 = Pool2;
        if ( Pool2 )
        {
          v13 = v7 + Pool2;
          if ( (_BYTE)v3 )
          {
            v14 = 0;
            v15 = v12 + 32;
            v16 = v13;
            v17 = a2 + 8;
            do
            {
              ++v14;
              *(_OWORD *)(v15 - 20) = *(_OWORD *)*(_QWORD *)(v17 - 8);
              v18 = *(_BYTE *)(v17 + 8);
              *(_QWORD *)(v15 + 912) = -1LL;
              *(_BYTE *)v15 = v18;
              *(_QWORD *)(v15 - 32) = v16;
              *(_BYTE *)(v15 - 24) = v14;
              RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v17, 0x7FFFFFFFuLL, &pcbLength);
              v19 = pcbLength;
              RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v15 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v17);
              *(_QWORD *)(v17 + 16) = v15 - 32;
              v16 += 2 * v19 + 2;
              v15 += 960LL;
              v17 += 32LL;
            }
            while ( v14 < (unsigned __int8)v3 );
            v12 = v21;
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
              v12 += 960LL;
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
