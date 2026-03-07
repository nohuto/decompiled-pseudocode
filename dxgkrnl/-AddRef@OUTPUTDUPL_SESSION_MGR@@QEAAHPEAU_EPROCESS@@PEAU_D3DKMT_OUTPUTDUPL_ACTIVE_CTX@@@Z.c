__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  unsigned int v9; // edx
  unsigned int v10; // r8d
  char *Buffer; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  struct _EPROCESS *v14; // r9
  int v15; // r10d
  const void **v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r14
  struct _EPROCESS *v20; // rax
  __int64 v21; // rcx
  _BYTE v23[72]; // [rsp+50h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v6 = 0;
  v7 = -1;
  if ( !a3 || *((_DWORD *)this + 32) < 0x10u )
  {
    v8 = 0;
    v9 = *((_DWORD *)this + 1);
    v10 = 0;
    Buffer = (char *)**((_QWORD **)this + 7);
    if ( v9 )
    {
      v12 = *((_DWORD *)this + 1);
      while ( 1 )
      {
        v9 = v12;
        if ( v6 )
          goto LABEL_13;
        v13 = 32LL * v10;
        v14 = *(struct _EPROCESS **)&Buffer[v13 + 8];
        if ( a2 == v14 )
          break;
        if ( v7 != -1 )
          goto LABEL_9;
        if ( v14 )
        {
LABEL_10:
          if ( *(_DWORD *)&Buffer[v13] )
            ++v8;
          goto LABEL_12;
        }
        v7 = v10;
LABEL_12:
        ++v10;
        v12 = v9;
        if ( v10 >= v9 )
          goto LABEL_13;
      }
      v15 = *(_DWORD *)&Buffer[v13];
      v7 = v10;
      if ( v15 )
      {
        v6 = 1;
        *(_DWORD *)&Buffer[v13] = v15 + 1;
        v9 = *((_DWORD *)this + 1);
      }
LABEL_9:
      if ( v14 )
        goto LABEL_10;
      goto LABEL_12;
    }
LABEL_13:
    if ( v8 < *(_DWORD *)this || v6 )
    {
      if ( v7 == -1 )
      {
        v16 = (const void **)*((_QWORD *)this + 7);
        v17 = v9 + 1;
        *((_DWORD *)this + 1) = v17;
        Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(v16, 32 * v17, 1);
        if ( !Buffer )
        {
          v6 = 0;
          goto LABEL_34;
        }
        v7 = *((_DWORD *)this + 1) - 1;
        v18 = 32LL * v7;
        *(_OWORD *)&Buffer[v18] = 0LL;
        *(_OWORD *)&Buffer[v18 + 16] = 0LL;
      }
      v19 = 32LL * v7;
      v20 = *(struct _EPROCESS **)&Buffer[v19 + 8];
      if ( v20 && v20 != a2 )
      {
        WdLogSingleEntry1(1LL, 4217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pProcesses[IndexFound].pProcess == NULL) || (pProcesses[IndexFound].pProcess == pProcess)",
          4217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v7 == -1 )
      {
        if ( !v6 )
          goto LABEL_34;
      }
      else if ( !v6 )
      {
        if ( *(_DWORD *)&Buffer[v19] )
        {
          WdLogSingleEntry1(1LL, 4222LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pProcesses[IndexFound].RefCount == 0",
            4222LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_QWORD *)&Buffer[v19 + 8] = a2;
        *(_DWORD *)&Buffer[v19] = 1;
        *(LARGE_INTEGER *)&Buffer[v19 + 16] = KeQueryPerformanceCounter(0LL);
        v6 = 1;
        if ( v8 >= *((_DWORD *)this + 16) )
          *((_DWORD *)this + 16) = v8 + 1;
      }
      if ( a3 )
      {
        v21 = 3LL * *((unsigned int *)this + 32);
        *(_OWORD *)((char *)this + 8 * v21 + 136) = *(_OWORD *)a3;
        *((_QWORD *)this + v21 + 19) = *((_QWORD *)a3 + 2);
        ++*((_DWORD *)this + 32);
        OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
      }
    }
  }
LABEL_34:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return v6;
}
