__int64 __fastcall VfSuspectDriversGetVerifierInformation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 *v9; // r15
  __int64 *v10; // r8
  size_t v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // r9
  char v14; // cl
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rcx
  __int16 v18; // r10
  void *v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+44h] [rbp-54h]
  __int64 *v27; // [rsp+B0h] [rbp+18h]

  v6 = a1;
  *a3 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  v9 = (__int64 *)VfSuspectDriversList;
  if ( (__int64 *)VfSuspectDriversList != &VfSuspectDriversList )
  {
    while ( 1 )
    {
      v10 = v9;
      v6 += v7;
      v27 = v9;
      v9 = (__int64 *)*v9;
      v11 = *((unsigned __int16 *)v10 + 12);
      v7 = (v11 + (a5 != 0 ? 281 : 153)) & 0xFFFFFFF8;
      *a3 += v7;
      if ( *a3 > a2 )
        break;
      *(_DWORD *)v6 = v7;
      v12 = &VfRuleClasses;
      *(_DWORD *)(v6 + 4) = MmVerifierData;
      v13 = 2LL;
      do
      {
        *(_DWORD *)((char *)v12 + v6 - (_QWORD)&VfRuleClasses + 8) = *(_DWORD *)v12;
        v12 = (__int64 *)((char *)v12 + 4);
        --v13;
      }
      while ( v13 );
      v14 = VfClearanceFlag;
      *(_DWORD *)(v6 + 16) = VfTriageContext;
      *(_DWORD *)(v6 + 20) = ViVerifyAllDrivers & 1 | *(_DWORD *)(v6 + 20) & 0xFFFFFFFC | (2 * (v14 & 1));
      *(_DWORD *)(v6 + 40) = dword_140C13824;
      *(_DWORD *)(v6 + 44) = dword_140C13828;
      *(_DWORD *)(v6 + 92) = dword_140C1385C;
      *(_DWORD *)(v6 + 48) = dword_140C1382C;
      *(_DWORD *)(v6 + 52) = dword_140C13830;
      *(_DWORD *)(v6 + 56) = dword_140C13834;
      *(_DWORD *)(v6 + 60) = dword_140C13838;
      *(_DWORD *)(v6 + 64) = dword_140C1383C;
      *(_DWORD *)(v6 + 68) = dword_140C13840;
      *(_DWORD *)(v6 + 72) = dword_140C13844;
      *(_DWORD *)(v6 + 76) = dword_140C13848;
      *(_DWORD *)(v6 + 80) = dword_140C1384C;
      *(_DWORD *)(v6 + 84) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(v6 + 88) = *((_DWORD *)v10 + 5);
      if ( *((_DWORD *)v10 + 4) <= *((_DWORD *)v10 + 5) )
      {
        VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
      }
      else
      {
        v21 = 0LL;
        v24 = 0;
        VfTargetDriversGetZeroCounters((_QWORD *)v6, a5);
        v22[0] = v16;
        v22[1] = v6;
        v23 = a5;
        VfAvlInitializeLockContext((__int64)&v21, v15 + 1);
        ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(__int64, __int64), _QWORD *))VfAvlEnumerateNodes)(
          v17,
          &v21,
          ViTargetAddCountersCallback,
          v22);
        VfAvlCleanupLockContext((__int64)&v21);
        v18 = 2;
      }
      *(_WORD *)(v6 + 24) = v11;
      *(_WORD *)(v6 + 26) = v18 + v11;
      v19 = (void *)(v6 + (a5 != 0 ? 272 : 144));
      *(_QWORD *)(v6 + 32) = v19;
      memmove(v19, (const void *)v27[4], v11);
      *(_WORD *)(*(_QWORD *)(v6 + 32) + 2 * (v11 >> 1)) = 0;
      *(_QWORD *)(v6 + 32) += a4 - a1;
      if ( v9 == &VfSuspectDriversList )
        goto LABEL_11;
    }
    v8 = -1073741820;
  }
LABEL_11:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 >= 0 )
    *(_DWORD *)v6 = 0;
  return (unsigned int)v8;
}
