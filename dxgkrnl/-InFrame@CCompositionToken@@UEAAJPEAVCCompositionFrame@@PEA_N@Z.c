__int64 __fastcall CCompositionToken::InFrame(CCompositionToken *this, struct CCompositionFrame *a2, bool *a3)
{
  bool *v3; // r13
  __int64 v6; // rbx
  unsigned int (__fastcall *v7)(__int64, __int64); // rdi
  __int64 v8; // rax
  unsigned int v9; // ebp
  int v10; // r15d
  _QWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  int v19; // r13d
  _QWORD *v20; // rbx
  __int64 result; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d

  v3 = a3;
  if ( *((_DWORD *)this + 6) != 2 )
    return 0LL;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v23,
          v22,
          v24,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v6 = *((_QWORD *)this + 8);
  v7 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 64LL);
  v8 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  if ( v7(v8, v6) )
  {
    ++*((_DWORD *)this + 7);
    result = 0LL;
    *v3 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    *((_DWORD *)this + 6) = 3;
    if ( *((_DWORD *)this + 14) )
    {
      do
      {
        v11 = (_QWORD *)(*((_QWORD *)this + 6) + 32LL * v9);
        v12 = v11[3];
        v13 = v11[1];
        if ( v12 )
        {
          v14 = v11[2];
          v15 = v13 + 48;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
          *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
          if ( !*(_DWORD *)(v13 + 128) || (v16 = *(_QWORD **)(v13 + 112), v17 = (_QWORD *)(v13 + 112), v16 == v17) )
          {
LABEL_32:
            v19 = -1073741275;
          }
          else
          {
            while ( 1 )
            {
              v18 = v16 - 3;
              if ( *(v16 - 1) == v14 )
                break;
              v16 = (_QWORD *)*v16;
              if ( v16 == v17 )
                goto LABEL_32;
            }
            v19 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v18 + 88LL))(v16 - 3) )
            {
              v20 = 0LL;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v18 + 88LL))(v18) )
                v20 = v18;
              if ( *((_DWORD *)v20 + 95) == -1 )
                *((_DWORD *)v20 + 95) = 0;
              *((_DWORD *)v20 + 12) = 1;
              if ( *((_DWORD *)v20 + 72) )
              {
                CCompositionBuffer::AddScrollAsDirty(
                  (CCompositionBuffer *)v20,
                  (const struct ScrollOptimization *)(v20 + 36));
                *((_DWORD *)v20 + 72) = 0;
                *((_BYTE *)v20 + 43) = 1;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12) )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v20[35] + 48LL))(v20[35], v12, 2LL);
                *((_BYTE *)v20 + 43) = 1;
              }
            }
            else
            {
              v19 = -1073741811;
            }
          }
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v15 + 8) )
          {
            *(_QWORD *)(v15 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v15, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v15, 0LL);
          }
          KeLeaveCriticalRegion();
          if ( v10 >= 0 && v19 < 0 )
            v10 = v19;
        }
        ++v9;
      }
      while ( v9 < *((_DWORD *)this + 14) );
      v3 = a3;
    }
    result = (unsigned int)v10;
    *v3 = 1;
  }
  return result;
}
