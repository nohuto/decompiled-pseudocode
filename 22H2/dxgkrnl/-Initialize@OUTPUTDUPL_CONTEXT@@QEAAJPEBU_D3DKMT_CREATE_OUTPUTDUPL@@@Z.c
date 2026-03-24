/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A16B0
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02995EC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0026914 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016D17C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0298E10 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C029A12C (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C029AAF8 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029B824 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C02A07A0 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C02A15B4 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rax
  struct DXGFASTMUTEX **v11; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v12; // r8
  __int64 *AdapterLuid; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebp
  UINT KeyedMutexCount; // eax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGDXGIKEYEDMUTEX *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // edi
  __int64 v30; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ebp
  _QWORD *i; // r14
  DDAMetaData *v38; // rax
  DDAMetaData *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int128 v47; // [rsp+40h] [rbp-48h] BYREF
  __int64 v48; // [rsp+50h] [rbp-38h]
  char v49; // [rsp+A0h] [rbp+18h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v11 = (struct DXGFASTMUTEX **)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v11 )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = 1233LL;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v12 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v49);
    v12 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v47;
    v14 = *AdapterLuid;
    LODWORD(v48) = *((_DWORD *)this + 4);
    *(_QWORD *)&v47 = *((_QWORD *)this + 4);
    *((_QWORD *)&v47 + 1) = v14;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v11, *((struct _EPROCESS **)this + 3), v12) )
    return 3221225643LL;
  v19 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v21 = (char *)operator new[](0x90uLL, 0x674D444Fu, PagedPool);
      v26 = (DXGDXGIKEYEDMUTEX *)v21;
      if ( v21 )
      {
        *(_QWORD *)v21 = 0LL;
        *((_QWORD *)v21 + 1) = 0LL;
        *((_QWORD *)v21 + 11) = 0LL;
        *((_DWORD *)v21 + 24) = 0;
        *((_QWORD *)v21 + 13) = 0LL;
        *((_QWORD *)v21 + 14) = 0LL;
        *((_QWORD *)v21 + 15) = 0LL;
        *((_DWORD *)v21 + 32) = 0;
        memset(v21 + 16, 0, 0x48uLL);
      }
      else
      {
        v26 = 0LL;
      }
      *((_QWORD *)this + v19 + 6) = v26;
      if ( !v26 )
        goto LABEL_46;
      v29 = DXGDXGIKEYEDMUTEX::Initialize(v26, a2->KeyedMutexs[v19].hSharedSurfaceNt);
      if ( v29 < 0 )
        break;
      v29 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v19 + 6), 1, v30);
      if ( v29 < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v35 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v35);
        return (unsigned int)v29;
      }
      if ( ++v19 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v35 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v35 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent(v16, v15, v17, v18);
  if ( Current )
    v34 = *((_QWORD *)Current + 11);
  else
    v34 = 0LL;
  if ( !v34 )
  {
    v9 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v9 + 24) = 1293LL;
    goto LABEL_6;
  }
  v36 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v38 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
    v39 = v38 ? DDAMetaData::DDAMetaData(v38, v22, v24, v25) : 0LL;
    *(i - 10) = v39;
    if ( !v39 || !(unsigned int)DDAMetaData::Initialize(v39) )
      break;
    v40 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
    v45 = v40;
    if ( v40 )
    {
      *v40 = 0LL;
      v40[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v40, 0x4000u, 0);
    }
    else
    {
      v45 = 0LL;
    }
    *i = v45;
    if ( !v45 || !*v45 )
    {
      v46 = WdLogNewEntry5_WdLowResource(v42, v41, v43, v44);
      *(_QWORD *)(v46 + 24) = 0x4000LL;
      *(_QWORD *)(v46 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v36 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pxqt_EtwWriteTransfer(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v43,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v46 = WdLogNewEntry5_WdLowResource(v23, v22, v24, v25);
  *(_QWORD *)(v46 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v46);
  return 3221225495LL;
}
