__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v11; // bp
  __int64 result; // rax
  int v13; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v15; // rsi
  PVOID v16; // rbx
  char v17; // al
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v26 = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), &v26);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v26;
  }
  v13 = SepCreateSidValuesBlock(&P, (PSID *)a2, a3, a4, a5, v6);
  if ( v13 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
      goto LABEL_14;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
    }
    v15 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 104));
    KeAbPostRelease(v15 + 104);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v11 )
    {
LABEL_14:
      v16 = P;
      v17 = SepCompareSidValuesBlocks((__int64)P, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL));
      v18 = *(_QWORD *)(a1 + 216);
      if ( v17 )
      {
        SepLogTokenSidManagement(2, (__int64)v16, *(_QWORD *)(v18 + 120), a1);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1);
        goto LABEL_22;
      }
      v19 = 1;
    }
    else
    {
      v16 = P;
      v18 = *(_QWORD *)(a1 + 216);
      v19 = 0;
    }
    SepLogTokenSidManagement(v19, (__int64)v16, *(_QWORD *)(v18 + 120), a1);
    *(_QWORD *)(a1 + 1128) = v16;
LABEL_22:
    v20 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1168;
    v21 = v20 + 24;
    v22 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      do
      {
        v23 = *(_QWORD *)(a1 + 152);
        v24 = 2LL * v22;
        if ( v22 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v23 + 16LL * v22) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v23 + 16LL * v22) = v21;
          v21 += (4LL * *(unsigned __int8 *)(v21 + 1) + 11) & 0xFFFFFFFCLL;
        }
        if ( v22 )
          v25 = *(_DWORD *)(a4 + 16LL * (v22 - 1) + 8);
        else
          v25 = *(_DWORD *)(a2 + 8);
        ++v22;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v24 + 8) = v25;
      }
      while ( v22 < *(_DWORD *)(a1 + 124) );
    }
  }
  return (unsigned int)v13;
}
