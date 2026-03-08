/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C017C6CC
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1C017DC10 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C017AB4C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C017CA1C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C017CAC4 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x1C01B9834 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  __int64 v4; // rbx
  int v7; // eax
  unsigned int v8; // edi
  CCD_SET_STRING_ID *v9; // r10
  char *v10; // rcx
  int PathSourceFromTarget; // esi
  unsigned int v12; // edi
  __int64 *v13; // r12
  int v14; // eax
  CCD_SET_STRING_ID *v15; // r10
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // r9
  char v20; // r9
  __int64 v21; // r8
  unsigned int v22; // r9d
  _QWORD *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned int v27; // r10d
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v37[3]; // [rsp+51h] [rbp-18h] BYREF
  int TargetIdFromCcdMonitorId; // [rsp+54h] [rbp-15h]
  unsigned int v39; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-Dh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v41; // [rsp+60h] [rbp-9h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v42; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-1h] BYREF
  int v44; // [rsp+6Ch] [rbp+3h] BYREF
  __int64 v45; // [rsp+70h] [rbp+7h]
  char *v46; // [rsp+78h] [rbp+Fh]
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v48; // [rsp+D0h] [rbp+67h] BYREF
  struct DMMVIDPN *v49; // [rsp+E8h] [rbp+7Fh]

  v49 = a4;
  v4 = a3;
  v43 = 0;
  v40 = 0;
  v7 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v40, &v43, &v48);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry5(1LL, v7, a2, v4, *this, v4);
    return v8;
  }
  else
  {
    v9 = *this;
    v10 = (char *)a2 + 404;
    PathSourceFromTarget = -1;
    v46 = (char *)a2 + 404;
    v12 = v4;
    v13 = (__int64 *)(this + 1);
    if ( (unsigned int)v4 < *((unsigned __int16 *)v9 + 16) )
    {
      while ( 1 )
      {
        v48 = 0;
        v14 = CCD_SET_STRING_ID::QueryCloneInfo(v9, v12, &v48, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v14;
        if ( v14 < 0 )
        {
          v33 = v14;
          v34 = v12;
          v35 = 1LL;
          goto LABEL_49;
        }
        if ( v48 != v40 )
          goto LABEL_16;
        v15 = *this;
        v44 = 0;
        v45 = v12;
        if ( v12 >= *((unsigned __int16 *)v15 + 16) )
        {
          WdLogSingleEntry4(1LL, v15, *((unsigned __int16 *)v15 + 16), v12, &v44);
          WdLogSingleEntry5(1LL, -1073741811LL, a2, v4, *this, v45);
          return 3221225485LL;
        }
        v16 = *(unsigned __int16 *)(*((_QWORD *)v15 + 3) + 8LL * v12 + 4);
        v44 = v16;
        if ( (_WORD)v16 )
        {
          WdLogSingleEntry5(1LL, a2, v4, v15, v16, v12);
          return 3221225474LL;
        }
        v39 = -1;
        v37[0] = 0;
        LOBYTE(v48) = 0;
        v36 = 0;
        v41 = D3DKMDT_VOT_UNINITIALIZED;
        v42 = D3DKMDT_VOT_UNINITIALIZED;
        UnicodeString = 0LL;
        v17 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v15, v12, &UnicodeString);
        TargetIdFromCcdMonitorId = v17;
        if ( v17 < 0 )
        {
          v33 = v17;
LABEL_43:
          v34 = v45;
          v35 = 2LL;
LABEL_49:
          WdLogSingleEntry5(v35, v33, a2, v4, *this, v34);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = DmmGetTargetIdFromCcdMonitorId(
                                     a2,
                                     &UnicodeString,
                                     v18,
                                     &v39,
                                     &v41,
                                     &v42,
                                     v37,
                                     (unsigned __int8 *)&v48,
                                     &v36);
        RtlFreeUnicodeString(&UnicodeString);
        UnicodeString = 0LL;
        if ( TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( TargetIdFromCcdMonitorId < 0 )
        {
          v33 = TargetIdFromCcdMonitorId;
          goto LABEL_43;
        }
        v20 = v48;
        if ( v12 == (_DWORD)v4 || !(_BYTE)v48 )
        {
          v21 = 296LL * v12;
          *(_DWORD *)(v21 + *v13 + 84) = v39;
          *(_DWORD *)(*v13 + v21 + 144) = v41;
          *(_DWORD *)(*v13 + v21 + 148) = v42;
          LOBYTE(v19) = -v20;
          *(_BYTE *)(*v13 + v21 + 185) = (v36 != 0 ? 4 : 0) | ((_BYTE)v19 != 0 ? 2 : 0) | (v37[0] != 0);
          *(_DWORD *)(*v13 + v21 + 240) = v43 | 0xFE520000;
          *(_QWORD *)(*v13 + v21 + 56) |= 0xCC00000000000uLL;
          if ( v49 )
          {
            if ( PathSourceFromTarget == -1 )
            {
              PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                       (struct DMMVIDPN *)((char *)v49 + 96),
                                       (_QWORD *)v39,
                                       0LL,
                                       v19);
              if ( PathSourceFromTarget != -1 )
              {
                v22 = 0;
                if ( (_DWORD)v4 )
                {
                  v31 = *v13;
                  while ( 1 )
                  {
                    v32 = 296LL * v22;
                    if ( _bittest64((const signed __int64 *)(v32 + v31 + 56), 0x2Du) )
                    {
                      if ( *(_DWORD *)(v32 + v31 + 80) == PathSourceFromTarget
                        && *(_DWORD *)(v32 + v31 + 72) == *((_DWORD *)a2 + 101)
                        && *(_DWORD *)(v32 + v31 + 76) == *((_DWORD *)a2 + 102) )
                      {
                        break;
                      }
                    }
                    if ( ++v22 >= (unsigned int)v4 )
                      goto LABEL_15;
                  }
                  PathSourceFromTarget = -1;
                }
              }
            }
          }
LABEL_15:
          v9 = *this;
          if ( ++v12 < *((unsigned __int16 *)*this + 16) )
            continue;
        }
        goto LABEL_16;
      }
      if ( v12 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_16:
      if ( PathSourceFromTarget != -1 )
        goto LABEL_17;
      v10 = (char *)a2 + 404;
    }
    v46 = v10;
    if ( v49 )
      return 3221226021LL;
    v27 = *(_DWORD *)(*((_QWORD *)a2 + 365) + 96LL);
    if ( !v27 )
      return 3221226021LL;
    v28 = 0;
    PathSourceFromTarget = 0;
    if ( *((_WORD *)*this + 16) )
    {
      while ( 1 )
      {
        v29 = *v13;
        while ( 1 )
        {
          v30 = 296LL * v28;
          if ( _bittest64((const signed __int64 *)(v30 + v29 + 56), 0x2Du) )
          {
            if ( *(_DWORD *)(v30 + v29 + 80) == PathSourceFromTarget
              && *(_DWORD *)(v30 + v29 + 72) == *(_DWORD *)v10
              && *(_DWORD *)(v30 + v29 + 76) == *((_DWORD *)v10 + 1) )
            {
              break;
            }
          }
          if ( ++v28 >= *((unsigned __int16 *)*this + 16) )
            goto LABEL_28;
        }
        if ( ++PathSourceFromTarget >= v27 )
          return 3221226021LL;
        v28 = 0;
      }
    }
LABEL_28:
    if ( PathSourceFromTarget == -1 )
      return 3221226021LL;
LABEL_17:
    if ( (unsigned int)v4 < v12 )
    {
      v23 = v46;
      v24 = 296 * v4;
      v25 = v12 - (unsigned int)v4;
      do
      {
        v24 += 296LL;
        *(_QWORD *)(v24 + *v13 - 224) = *v23;
        *(_DWORD *)(v24 + *v13 - 216) = PathSourceFromTarget;
        *(_QWORD *)(v24 + *v13 - 240) |= 0x300000000000uLL;
        --v25;
      }
      while ( v25 );
    }
    return 0LL;
  }
}
