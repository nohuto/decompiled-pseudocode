void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  __int64 **v10; // r12
  __int64 *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  const wchar_t *v20; // r9
  int v21; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v25[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 904);
  v8 = *(_QWORD *)(v4 + 912);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 944, 0LL);
  *(_QWORD *)(v4 + 952) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 936) >= 0x40u )
  {
    v9 = 0LL;
    memset(v25, 0, sizeof(v25));
    v10 = (__int64 **)(v4 + 920);
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == (__int64 *)v10 || !v11 )
        break;
      v14 = *v11;
      if ( *v11 )
      {
        if ( *(__int64 **)(v14 + 8) != v11 )
          goto LABEL_18;
        v15 = (__int64 **)v11[1];
        if ( *v15 != v11 )
          goto LABEL_18;
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        --*(_DWORD *)(v4 + 936);
      }
      *v11 = 0LL;
      v16 = v11 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v11 - 20)
        && (*((_DWORD *)v16 + 101) & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16[2] + 16) + 736LL) + 8LL)
                                                      + 784LL))(v16[32])
        && (unsigned int)v9 < 0x40 )
      {
        v25[v9] = v16[32];
        v9 = (unsigned int)(v9 + 1);
      }
    }
    if ( (_DWORD)v9 )
    {
      v17 = *((_QWORD *)a2 + 2);
      v24 = ++v8;
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *, _BYTE))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 736LL) + 8LL) + 640LL))(
              0LL,
              0LL,
              (unsigned int)v9,
              v25,
              1,
              &VidSchSyncObject,
              0,
              &v24,
              0);
      if ( v18 < 0 )
      {
        v19 = v18;
        WdLogSingleEntry2(2LL, v18, a2);
        v20 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit signal for sync object";
LABEL_29:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v19, (__int64)a2, 0LL, 0LL, 0LL);
        goto LABEL_6;
      }
      *(_QWORD *)(v4 + 912) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_6;
  if ( (*((_DWORD *)a2 + 101) & 0x10) == 0 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 736LL) + 8LL)
                                                                                            + 624LL))(
            *((_QWORD *)a2 + 32),
            VidSchSyncObject,
            v8);
    if ( v21 < 0 )
    {
      v19 = v21;
      WdLogSingleEntry2(2LL, v21, a2);
      v20 = L"ret = 0x%I64x Context 0x%I64x: Failed to submit wait for sync object";
      goto LABEL_29;
    }
  }
  *((_QWORD *)a2 + 22) = v8;
LABEL_6:
  v12 = (_QWORD *)((char *)a2 + 160);
  if ( !*v12 )
  {
    v13 = *(_QWORD **)(v4 + 928);
    if ( *v13 != v4 + 920 )
LABEL_18:
      __fastfail(3u);
    *v12 = v4 + 920;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(v4 + 928) = v12;
    ++*(_DWORD *)(v4 + 936);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  *(_QWORD *)(v4 + 952) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 944, 0LL);
  KeLeaveCriticalRegion();
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
