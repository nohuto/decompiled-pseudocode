/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C03322C4
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C032AEA0 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0054BF8 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E93B0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0231EC4 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C032A46C (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C032BB80 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C032C69C (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C0331118 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0332198 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v8; // rbx
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v11; // r8
  __int64 *AdapterLuid; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v16; // ebp
  UINT KeyedMutexCount; // eax
  __int64 v18; // rax
  DXGDXGIKEYEDMUTEX *v19; // rbx
  int v20; // ebx
  __int64 v21; // r8
  struct DXGPROCESS *Current; // rax
  unsigned int v23; // ebp
  _QWORD *v24; // rbx
  DDAMetaData *v25; // rax
  DDAMetaData *v26; // rax
  __int64 v27; // rdi
  const wchar_t *v28; // r9
  const wchar_t *v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // r14
  __int64 v32; // r8
  __int128 v33; // [rsp+50h] [rbp-38h] BYREF
  __int64 v34; // [rsp+60h] [rbp-28h]
  char v35; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v5
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId)) == 0LL) )
  {
    v9 = 1232LL;
    WdLogSingleEntry1(2LL, 1232LL);
    v10 = L"DXGSESSIONDATA is NULL";
    goto LABEL_44;
  }
  v8 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v8 )
  {
    v9 = 1239LL;
    WdLogSingleEntry1(2LL, 1239LL);
    v10 = L"OUTPUTDUPL_SESSION_MGR is NULL";
LABEL_44:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v11 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v35);
    v11 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v33;
    v13 = *AdapterLuid;
    LODWORD(v34) = *((_DWORD *)this + 4);
    *(_QWORD *)&v33 = *((_QWORD *)this + 4);
    *((_QWORD *)&v33 + 1) = v13;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v8, *((struct _EPROCESS **)this + 3), v11) )
    return 3221225643LL;
  *((_DWORD *)this + 76) = 1;
  v16 = 0;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v18 = operator new[](0x90uLL, 0x674D444Fu, 256LL);
      v19 = (DXGDXGIKEYEDMUTEX *)v18;
      if ( v18 )
      {
        *(_QWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 88) = 0LL;
        *(_DWORD *)(v18 + 96) = 0;
        *(_QWORD *)(v18 + 104) = 0LL;
        *(_QWORD *)(v18 + 112) = 0LL;
        *(_QWORD *)(v18 + 120) = 0LL;
        *(_DWORD *)(v18 + 128) = 0;
        memset((void *)(v18 + 16), 0, 0x48uLL);
      }
      else
      {
        v19 = 0LL;
      }
      *((_QWORD *)this + v16 + 6) = v19;
      if ( !v19 )
        break;
      v20 = DXGDXGIKEYEDMUTEX::Initialize(v19, a2->KeyedMutexs[v16].hSharedSurfaceNt);
      if ( v20 < 0 )
      {
        v27 = 1283LL;
        WdLogSingleEntry1(2LL, 1283LL);
        v28 = L"Failed to open surface NT handle for consumer process.";
        goto LABEL_25;
      }
      v20 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v16 + 6), 1, v21);
      if ( v20 < 0 )
      {
        v27 = 1290LL;
        WdLogSingleEntry1(2LL, 1290LL);
        v28 = L"Failed to open local keyed mutex for consumer process.";
LABEL_25:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v27, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)v20;
      }
      if ( ++v16 >= *((_DWORD *)this + 10) )
        goto LABEL_18;
    }
    WdLogSingleEntry1(6LL, a2->VidPnSourceId);
    v29 = L"Failed to create Dxgi Keyed Mutex list for VidPn source 0x%I64x.";
LABEL_27:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v29, a2->VidPnSourceId, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  else
  {
LABEL_18:
    Current = DXGPROCESS::GetCurrent(v14);
    if ( !Current || !*((_QWORD *)Current + 11) )
    {
      v9 = 1299LL;
      WdLogSingleEntry1(2LL, 1299LL);
      v10 = L"Could not get Win32k functions!!";
      goto LABEL_44;
    }
    v23 = 0;
    v24 = (_QWORD *)((char *)this + 160);
    do
    {
      v25 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, 256LL);
      if ( v25 )
        v26 = DDAMetaData::DDAMetaData(v25);
      else
        v26 = 0LL;
      *(v24 - 10) = v26;
      if ( !v26 )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v29 = L"Failed to allocate DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      if ( !(unsigned int)DDAMetaData::Initialize(v26) )
      {
        WdLogSingleEntry1(6LL, a2->VidPnSourceId);
        v29 = L"Failed to Initialize DDAMeta for VidPn source 0x%I64x.";
        goto LABEL_27;
      }
      v30 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
      v31 = (_QWORD *)v30;
      if ( !v30 )
      {
        *v24 = 0LL;
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
      *(_QWORD *)v30 = 0LL;
      *(_QWORD *)(v30 + 8) = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((const void **)v30, 0x4000u, 0);
      *v24 = v31;
      if ( !*v31 )
        goto LABEL_39;
      ++v23;
      v24 += 12;
    }
    while ( v23 < 2 );
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pxqt_EtwWriteTransfer(
        a2->hAdapter,
        &EventOutputDuplicationCreate,
        v32,
        this,
        a2->hAdapter,
        a2->VidPnSourceId,
        a2->KeyedMutexCount);
    return 0LL;
  }
}
