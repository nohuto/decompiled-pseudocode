__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v11; // rbx
  __int64 v12; // rbx
  const wchar_t *v13; // r9
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v14; // r8
  __int64 *AdapterLuid; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // ebp
  UINT KeyedMutexCount; // eax
  __int64 v21; // rax
  DXGDXGIKEYEDMUTEX *v22; // rbx
  int v23; // ebx
  __int64 v24; // r8
  struct DXGPROCESS *Current; // rax
  unsigned int v26; // ebp
  _QWORD *v27; // rbx
  DDAMetaData *v28; // rax
  DDAMetaData *v29; // rax
  __int64 v30; // rdi
  const wchar_t *v31; // r9
  const wchar_t *v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // r14
  __int64 v35; // r8
  __int128 v36; // [rsp+50h] [rbp-38h] BYREF
  __int64 v37; // [rsp+60h] [rbp-28h]
  char v38; // [rsp+A0h] [rbp+18h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v6
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v7, v8),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId)) == 0LL) )
  {
    v12 = 1232LL;
    WdLogSingleEntry1(2LL, 1232LL);
    v13 = L"DXGSESSIONDATA is NULL";
    goto LABEL_44;
  }
  v11 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v11 )
  {
    v12 = 1239LL;
    WdLogSingleEntry1(2LL, 1239LL);
    v13 = L"OUTPUTDUPL_SESSION_MGR is NULL";
LABEL_44:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v14 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v38);
    v14 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v36;
    v16 = *AdapterLuid;
    LODWORD(v37) = *((_DWORD *)this + 4);
    *(_QWORD *)&v36 = *((_QWORD *)this + 4);
    *((_QWORD *)&v36 + 1) = v16;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v11, *((struct _EPROCESS **)this + 3), v14) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v19 = 0;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v21 = operator new[](0x90uLL, 0x674D444Fu, 256LL);
      v22 = (DXGDXGIKEYEDMUTEX *)v21;
      if ( v21 )
      {
        *(_QWORD *)v21 = 0LL;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 88) = 0LL;
        *(_DWORD *)(v21 + 96) = 0;
        *(_QWORD *)(v21 + 104) = 0LL;
        *(_QWORD *)(v21 + 112) = 0LL;
        *(_QWORD *)(v21 + 120) = 0LL;
        *(_DWORD *)(v21 + 128) = 0;
        memset((void *)(v21 + 16), 0, 0x48uLL);
      }
      else
      {
        v22 = 0LL;
      }
      *((_QWORD *)this + v19 + 6) = v22;
      if ( !v22 )
        break;
      v23 = DXGDXGIKEYEDMUTEX::Initialize(v22, a2->KeyedMutexs[v19].hSharedSurfaceNt);
      if ( v23 < 0 )
      {
        v30 = 1283LL;
        WdLogSingleEntry1(2LL, 1283LL);
        v31 = L"Failed to open surface NT handle for consumer process.";
        goto LABEL_25;
      }
      v23 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v19 + 6), 1, v24);
      if ( v23 < 0 )
      {
        v30 = 1290LL;
        WdLogSingleEntry1(2LL, 1290LL);
        v31 = L"Failed to open local keyed mutex for consumer process.";
LABEL_25:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v30, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v23;
      }
      if ( ++v19 >= *((_DWORD *)this + 10) )
        goto LABEL_18;
    }
    WdLogSingleEntry1(6LL, a2->VidPnSourceId);
    v32 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
LABEL_27:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v32, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  else
  {
LABEL_18:
    Current = DXGPROCESS::GetCurrent(v17);
    if ( !Current || !*((_QWORD *)Current + 11) )
    {
      v12 = 1299LL;
      WdLogSingleEntry1(2LL, 1299LL);
      v13 = L"Could not get Win32k functions!!";
      goto LABEL_44;
    }
    v26 = 0;
    v27 = (_QWORD *)((char *)this + 160);
    do
    {
      v28 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, 256LL);
      if ( v28 )
        v29 = DDAMetaData::DDAMetaData(v28);
      else
        v29 = 0LL;
      *(v27 - 10) = v29;
      if ( !v29 )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v32 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      if ( !(unsigned int)DDAMetaData::Initialize(v29) )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v32 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      v33 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
      v34 = (_QWORD *)v33;
      if ( !v33 )
      {
        *v27 = 0LL;
LABEL_39:
        WdLogSingleEntry2(6LL, 0x4000LL, a2->VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x at initialization",
          0x4000LL,
          a2->VidPnSourceId,
          0LL,
          0LL,
          0LL);
        return 3221225495LL;
      }
      *(_QWORD *)v33 = 0LL;
      *(_QWORD *)(v33 + 8) = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((const void **)v33, 0x4000u, 0);
      *v27 = v34;
      if ( !*v34 )
        goto LABEL_39;
      ++v26;
      v27 += 12;
    }
    while ( v26 < 2 );
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pxqt_EtwWriteTransfer(
        a2->hAdapter,
        &EventOutputDuplicationCreate,
        v35,
        this,
        a2->hAdapter,
        a2->VidPnSourceId,
        a2->KeyedMutexCount);
    return 0LL;
  }
}
