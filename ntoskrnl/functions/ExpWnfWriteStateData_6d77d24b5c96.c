__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  int v9; // r15d
  volatile signed __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  _DWORD *v13; // rcx
  _DWORD *v14; // r14
  __int32 v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r15
  _KPROCESS *v19; // rcx
  __int64 Pool2; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // eax
  int v24; // [rsp+30h] [rbp-D8h]
  NTSTATUS v25; // [rsp+34h] [rbp-D4h]
  _DWORD *v26; // [rsp+38h] [rbp-D0h]
  PVOID P; // [rsp+40h] [rbp-C8h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  $115DCDF994C6370D29323EAB0E0C9502 v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h] BYREF

  v6 = a3;
  v30 = a1;
  memset(&v31, 0, sizeof(v31));
  v9 = 0;
  v25 = 0;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v32;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v26 = 0LL;
  P = 0LL;
  v10 = (volatile signed __int64 *)(a1 + 80);
  v11 = KeAbPreAcquire(a1 + 80, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v11, a1 + 80);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  if ( !a5 )
    goto LABEL_8;
  v23 = 0;
  if ( *(_QWORD *)(a1 + 88) )
    v23 = *(_DWORD *)(a1 + 96);
  if ( v23 == a4 )
  {
LABEL_8:
    v13 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v13 = *(_DWORD **)(a1 + 88);
    if ( !v13 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v14 = v13) != 0LL && v13[1] < (unsigned int)v6 )
    {
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
      {
        Pool2 = ExAllocatePool2(256LL, (unsigned int)(v6 + 16), 543583831LL);
        v26 = (_DWORD *)Pool2;
      }
      else
      {
        v19 = *(_KPROCESS **)(a1 + 152);
        if ( !v19 )
          return 3221225524LL;
        if ( v19 != KeGetCurrentThread()->ApcState.Process )
        {
          v9 = 1;
          KiStackAttachProcess(v19, 0, (__int64)&v31);
        }
        Pool2 = ExAllocatePool2(257LL, (unsigned int)(v6 + 16), 543583831LL);
        v26 = (_DWORD *)Pool2;
        if ( v9 )
          KiUnstackDetachProcess(&v31);
      }
      if ( !Pool2 )
        return 3221225626LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)Pool2 = 1050884;
      *(_DWORD *)(Pool2 + 4) = v6;
      v21 = KeAbPreAcquire(a1 + 80, 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v21, a1 + 80);
      if ( v22 )
        *(_BYTE *)(v22 + 18) = 1;
      v14 = 0LL;
      if ( *(_QWORD *)(a1 + 88) != 1LL )
        v14 = *(_DWORD **)(a1 + 88);
      if ( !v14 || v14[1] < (unsigned int)v6 )
        v14 = v26;
    }
    v15 = *(_DWORD *)(a1 + 96) + 1;
    v24 = v15;
    while ( !v15 )
    {
      v15 = 1;
      v24 = 1;
    }
    if ( v14 )
    {
      memmove(v14 + 4, a2, v6);
      v14[2] = v6;
      v14[3] = v15;
      v16 = *(_QWORD *)(a1 + 104);
      if ( v16 )
      {
        KeyHandle = 0LL;
        v25 = ExpWnfAcquirePermanentDataStoreHandle(v16, &KeyHandle);
        if ( v25 < 0 )
          goto LABEL_25;
        v25 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, v14 + 3, v6 + 4);
        v17 = *(_QWORD *)(a1 + 104);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 8), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v17 + 8));
        KeAbPostRelease(v17 + 8);
        v15 = v24;
        if ( v25 < 0 )
        {
LABEL_25:
          P = *(PVOID *)(a1 + 88);
          *(_QWORD *)(a1 + 88) = 0LL;
          goto LABEL_27;
        }
      }
      if ( v14 == v26 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = v14;
        v26 = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 88) = 1LL;
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 96), v15);
LABEL_27:
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( (unsigned __int64)P >= 2 )
      ExFreePoolWithTag(P, 0x20666E57u);
    if ( v26 )
      ExFreePoolWithTag(v26, 0x20666E57u);
    return (unsigned int)v25;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  return 3221225473LL;
}
