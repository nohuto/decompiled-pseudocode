__int64 __fastcall CCompositionToken::InitializeUpdates(
        CCompositionToken *this,
        const struct CompositionTokenInitInfo *a2,
        void **a3)
{
  int v3; // ebp
  __int64 v4; // r13
  __int64 v5; // r14
  _DWORD *v6; // rbx
  void *v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // [rsp+A0h] [rbp+18h]

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (_DWORD *)((char *)a2 + 12);
  while ( (unsigned int)v5 < *((_DWORD *)a2 + 2) )
  {
    v9 = *(void **)(*(_QWORD *)a2 + 24 * v5);
    v10 = *(_QWORD *)a2 + 24 * v5;
    v11 = *((unsigned int *)this + 16);
    v12 = 0;
    v26 = v10;
    if ( (_DWORD)v11 )
    {
      v13 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        a3 = (void **)(v13 + 32LL * v12);
        if ( v9 == *a3 )
          break;
        if ( ++v12 >= (unsigned int)v11 )
          goto LABEL_7;
      }
      v4 = v13 + 32LL * v12;
    }
LABEL_7:
    if ( v12 == (_DWORD)v11 )
    {
      if ( (unsigned int)v11 >= *((_DWORD *)a2 + 3) )
        return 3221225485LL;
      v4 = *((_QWORD *)this + 7) + 32 * v11;
      *(_QWORD *)v4 = v9;
      v6 = (_DWORD *)((char *)a2 + 12);
      v3 = CompositionSurfaceObject::ResolveHandle(v9, 2u, (char)a3, (struct CompositionSurfaceObject **)(v4 + 8));
      if ( v3 < 0 )
        goto LABEL_22;
      ++*((_DWORD *)this + 16);
      v14 = *(_QWORD *)(v4 + 8);
      v15 = v14 + 48;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v14 + 48, 0LL);
      v3 = 0;
      *(_QWORD *)(v14 + 56) = KeGetCurrentThread();
      if ( !*(_DWORD *)(v14 + 128) )
        goto LABEL_32;
      v16 = *(_QWORD *)(v14 + 112) - 24LL;
      if ( *(_BYTE *)(v16 + 40) && v16 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16) )
      {
        v17 = *(_QWORD *)(v16 + 16);
      }
      else
      {
LABEL_32:
        v3 = -1073741275;
        v17 = 0LL;
      }
      *(_QWORD *)(v4 + 16) = v17;
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
      v6 = (_DWORD *)((char *)a2 + 12);
      if ( v3 < 0 )
        goto LABEL_22;
      if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
      {
        WdLogSingleEntry1(1LL, 2406LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v24,
              v23,
              v25,
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
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304552LL) + 32LL))(v4 + 24);
      v10 = v26;
      v3 = v18;
    }
    v6 = (_DWORD *)((char *)a2 + 12);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 24) + 40LL))(*(_QWORD *)(v4 + 24), v10 + 8);
LABEL_22:
    v5 = (unsigned int)(v5 + 1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  v19 = *((_DWORD *)this + 16);
  if ( v19 == *v6 )
  {
    v20 = 0;
    if ( v19 )
    {
      do
      {
        v21 = v20++;
        *(_QWORD *)(32 * v21 + *((_QWORD *)this + 7)) = 0LL;
      }
      while ( v20 < *((_DWORD *)this + 16) );
    }
    return (unsigned int)v3;
  }
  return 3221225485LL;
}
