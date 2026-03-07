__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 *v5; // r12
  __int64 *v6; // rbx
  DXGDEVICE *v8; // r15
  __int64 v9; // rdi
  unsigned int v10; // edi
  int v11; // r8d
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  DXGDEVICE *v21; // rdx
  const unsigned int *v22; // r13
  __int64 *v23; // rbx
  unsigned int v24; // r15d
  __int64 *i; // rdi
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // r14
  int v29; // eax
  unsigned int v30; // [rsp+60h] [rbp-81h] BYREF
  struct DXGPROCESS *v31; // [rsp+68h] [rbp-79h]
  DXGDEVICE *v32; // [rsp+70h] [rbp-71h]
  unsigned __int64 v33; // [rsp+78h] [rbp-69h] BYREF
  char *v34; // [rsp+80h] [rbp-61h]
  PVOID P; // [rsp+90h] [rbp-51h] BYREF
  _BYTE v36[64]; // [rsp+98h] [rbp-49h] BYREF
  int v37; // [rsp+D8h] [rbp-9h]

  v5 = (__int64 *)((char *)this + 496);
  v6 = (__int64 *)*((_QWORD *)this + 62);
  v34 = (char *)this + 496;
  v8 = this;
  v31 = a2;
  LODWORD(v9) = -1073741823;
  v32 = this;
  v33 = a4;
  if ( !a5 )
  {
    while ( v6 != v5 && v6 )
    {
      v17 = *((_DWORD *)v6 + 101);
      v30 = a3;
      if ( (v17 & 0x10) != 0 )
      {
        v28 = (__int64 *)v6[51];
        while ( v28 != v6 + 51 && v28 )
        {
          v29 = SubmitWaitForSyncObjectsFromGpu(1u, &v30, &v33, *((_DWORD *)v28 + 6), a2, 0, 1);
          LODWORD(v9) = v29;
          if ( v29 < 0 )
          {
            v8 = v32;
            WdLogSingleEntry2(4LL, v32, v29);
            goto LABEL_18;
          }
          v28 = (__int64 *)*v28;
          a2 = v31;
        }
        v8 = v32;
      }
      else
      {
        v18 = WaitForSynchronizationObjectFromGpu(1u, &v30, 0LL, a4, *((_DWORD *)v6 + 6), a2, 0, 1, 0, 0, 1);
        LODWORD(v9) = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry2(4LL, v8, v18);
          return (unsigned int)v9;
        }
LABEL_18:
        a2 = v31;
      }
      v6 = (__int64 *)*v6;
      a4 = v33;
    }
    return (unsigned int)v9;
  }
  v30 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v6 != v5 && v6 )
  {
    if ( (*((_DWORD *)v6 + 101) & 0x10) != 0 )
      v12 += DXGCONTEXT::GetRenderHwQueueCount((DXGCONTEXT *)v6);
    else
      ++v10;
    v6 = (__int64 *)*v6;
  }
  P = 0LL;
  v37 = 0;
  if ( v11 )
  {
    v22 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
    if ( v22 )
    {
      v23 = (__int64 *)*v5;
      v24 = 0;
      while ( v23 != v5 && v23 )
      {
        if ( (*((_DWORD *)v23 + 101) & 0x10) != 0 )
        {
          for ( i = (__int64 *)v23[51]; i != v23 + 51 && i; i = (__int64 *)*i )
          {
            if ( v24 >= v12 )
            {
              WdLogSingleEntry1(1LL, 5997LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i < NumHwQueues", 5997LL, 0LL, 0LL, 0LL, 0LL);
            }
            v26 = v24++;
            v22[v26] = *((_DWORD *)i + 6);
          }
          v5 = (__int64 *)v34;
        }
        v23 = (__int64 *)*v23;
      }
      if ( v12 != v24 )
      {
        WdLogSingleEntry1(1LL, 6006LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumHwQueues == i", 6006LL, 0LL, 0LL, 0LL, 0LL);
      }
      v27 = SubmitSignalSyncObjectsToHwQueue(1u, &v30, 0, v12, v22, &v33, v31, 0, 1);
      v9 = v27;
      if ( v27 >= 0 )
        goto LABEL_23;
      v21 = v32;
      goto LABEL_44;
    }
  }
  else
  {
    v13 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v10);
    if ( v13 )
    {
      v14 = (__int64 *)*v5;
      v15 = 0;
      while ( v14 != v5 && v14 )
      {
        v16 = v15++;
        *(_DWORD *)(v13 + 4 * v16) = *((_DWORD *)v14 + 6);
        v14 = (__int64 *)*v14;
      }
      if ( v10 != v15 )
      {
        WdLogSingleEntry1(1LL, 6046LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumContexts == i", 6046LL, 0LL, 0LL, 0LL, 0LL);
      }
      v19 = SignalSynchronizationObjectInternal(1LL, &v30, 0LL, v10, v13, 0LL, v33, 0LL, v31, 6);
      v9 = v19;
      if ( v19 >= 0 )
        goto LABEL_23;
      v21 = v8;
LABEL_44:
      WdLogSingleEntry2(4LL, v21, v9);
LABEL_23:
      if ( P != v36 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v9;
    }
  }
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
