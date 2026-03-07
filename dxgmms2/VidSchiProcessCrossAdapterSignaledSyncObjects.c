_QWORD *__fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(struct HwQueueStagingList *a1, __int64 a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rdx
  _QWORD *result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r14
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-D8h]
  _QWORD v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+50h] [rbp-B0h]
  _QWORD v19[140]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v19, 0, sizeof(v19));
  v18 = 0;
  v16 = &v15;
  v15 = (__int64)&v15;
  v17[0] = a2 + 3176;
  AcquireSpinLock::Acquire((Acquire *)v17);
  v4 = (__int64 **)(a2 + 3160);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    if ( (__int64 **)v5[1] != v4
      || (v6 = (__int64 *)*v5, *(__int64 **)(*v5 + 8) != v5)
      || (*v4 = v6, v6[1] = (__int64)v4, *v5 = 0LL, v5[1] = 0LL, v7 = v5 + 2, v8 = v16, (__int64 *)*v16 != &v15) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v7[1] = (__int64)v16;
    *v7 = (__int64)&v15;
    *v8 = (__int64)v7;
    --*(_DWORD *)(a2 + 3192);
    v16 = v7;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v17);
  while ( 1 )
  {
    result = (_QWORD *)v15;
    if ( (__int64 *)v15 == &v15 )
      return result;
    if ( *(__int64 **)(v15 + 8) != &v15 )
      goto LABEL_20;
    v10 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_20;
    v15 = *(_QWORD *)v15;
    *(_QWORD *)(v10 + 8) = &v15;
    v11 = result - 22;
    *result = 0LL;
    result[1] = 0LL;
    v12 = *(_QWORD *)(a2 + 248);
    if ( *((_DWORD *)result - 32) == 2 )
    {
      memset(v19, 0, sizeof(v19));
      v13 = *((_BYTE *)v11 + 27) == 0;
      LODWORD(v19[0]) = 895576406;
      LODWORD(v19[6]) = 5;
      v19[11] = v12;
      if ( v13 )
        v14 = v11[9];
      else
        v14 = *(_QWORD *)(v11[26] + 32LL);
      v19[67] = v14;
      v19[35] = v11;
      HIDWORD(v19[34]) = 1;
      VidSchiCompleteSignalCommmand((__int64)a1, (__int64)v19, 0);
    }
    else if ( (unsigned int)(*((_DWORD *)result - 32) - 4) <= 1 )
    {
      if ( *(_BYTE *)(v11[26] + 48LL) )
        _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v11, a1, 0);
      else
        VidSchiUnwaitMonitoredFences((__int64)a1, a2, 0LL);
    }
  }
}
