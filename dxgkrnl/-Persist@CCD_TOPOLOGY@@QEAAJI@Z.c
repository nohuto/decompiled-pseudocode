__int64 __fastcall CCD_TOPOLOGY::Persist(struct D3DKMT_GETPATHSMODALITY **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  struct CCD_BTL *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGSESSIONMGR *v16; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct CCD_BTL *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  int v30; // eax
  unsigned int v31; // ebx
  struct CCD_BTL *v32; // rax
  int v33; // eax
  unsigned int v34; // edx
  struct DXGGLOBAL *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // edx
  _QWORD *v40; // rax
  struct CCD_BTL *v41; // rax
  _QWORD *v42; // rax
  int v43; // eax
  struct _STRING *ConnectedSetStr; // rax
  struct D3DKMT_GETPATHSMODALITY *v45; // r8
  struct _STRING v46; // [rsp+30h] [rbp-50h] BYREF
  int v47; // [rsp+40h] [rbp-40h] BYREF
  __int128 v48; // [rsp+48h] [rbp-38h] BYREF
  __int64 v49; // [rsp+58h] [rbp-28h]
  __int16 v50; // [rsp+60h] [rbp-20h]
  __int128 v51; // [rsp+68h] [rbp-18h]

  v5 = (unsigned int)a2;
  if ( g_bDMgrIsSetupRunning == 1 )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    return 0LL;
  }
  else
  {
    if ( *((_WORD *)CCD_TOPOLOGY::GetModalitySetId((CCD_TOPOLOGY *)this) + 4) )
    {
      v47 = 0;
      v48 = 0LL;
      v49 = 0LL;
      v51 = 0LL;
      v50 = 0;
      v6 = CCD_BTL::Global();
      v7 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v6)(v6, &v47);
      v8 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry3(2LL, v7, this, this[8]);
        v10 = 1;
        goto LABEL_10;
      }
      if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v47) )
      {
        if ( (v5 & 0x40000000) != 0 )
          goto LABEL_8;
        v9 = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)this, (const struct CCD_SET_STRING_ID *)&v47);
        v8 = v9;
        if ( v9 != -1073741266 )
        {
          if ( v9 < 0 )
          {
            WdLogSingleEntry3(2LL, v9, this[8], v5);
            v10 = 3;
            goto LABEL_10;
          }
LABEL_8:
          if ( (int)v5 < 0 )
          {
            v10 = 4;
LABEL_10:
            DxgkLogCodePointPacket(0x3Fu, v10, v5, v8, 0LL);
LABEL_11:
            CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v47);
            return v8;
          }
          v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          if ( v16 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v16,
                                               CurrentProcessSessionId);
            if ( SessionDataForSpecifiedSession )
            {
              if ( *((_BYTE *)SessionDataForSpecifiedSession + 18498) )
              {
                v34 = 9;
LABEL_25:
                DxgkLogCodePointPacket(0x3Fu, v34, v5, v8, 0LL);
                Global = DXGGLOBAL::GetGlobal();
                LOBYTE(v36) = 1;
                QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), v36, v37, v38);
                goto LABEL_11;
              }
            }
          }
          v19 = CCD_BTL::Global();
          if ( *((struct CCD_BTL **)v19 + 17) != (struct CCD_BTL *)((char *)v19 + 136) )
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
            v40[3] = v5;
            LODWORD(v5) = v5 | 1;
            v40[4] = this;
            v40[5] = this[8];
            v41 = CCD_BTL::Global();
            CDS_JOURNAL::Purge((struct CCD_BTL *)((char *)v41 + 112));
          }
          if ( (v5 & 1) == 0 )
          {
            v24 = CCD_STORE::ForTopology(
                    (__int64)this,
                    anonymous_namespace_::_UpdateTimestampTopologySetCallback,
                    (__int64)this,
                    0);
            v29 = v24;
            if ( v24 >= 0 )
            {
LABEL_19:
              if ( CCD_SET_STRING_ID::IsSubsetOf((CCD_SET_STRING_ID *)this, (const struct CCD_SET_STRING_ID *)&v47) )
              {
                v30 = CCD_STORE::ForConnectedSet(
                        (const struct CCD_SET_STRING_ID *)&v47,
                        anonymous_namespace_::_UpdateConnectedSetCallback,
                        (__int64)this);
                v31 = v30;
                if ( v30 < 0 )
                {
                  WdLogSingleEntry4(2LL, v30, &v48, this, this[8]);
                  DxgkLogCodePointPacket(0x3Fu, 6u, v5, v31, 0LL);
                }
              }
              v32 = CCD_BTL::Global();
              v33 = CCD_TOPOLOGY::CopyInheritScope(
                      (struct CCD_BTL *)((char *)v32 + 8),
                      (const struct CCD_TOPOLOGY *)this);
              v8 = v33;
              if ( v33 < 0 )
              {
                WdLogSingleEntry3(2LL, v33, this, this[8]);
                DxgkLogCodePointPacket(0x3Fu, 7u, v5, v8, 0LL);
                v8 = 0;
              }
              v34 = 8;
              goto LABEL_25;
            }
            v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
            v42[3] = v29;
            v42[4] = this;
            v42[5] = this[8];
          }
          v43 = CCD_STORE::ForTopology((__int64)this, anonymous_namespace_::_SaveTopologySetCallback, (__int64)this, 1);
          v8 = v43;
          if ( v43 < 0 )
          {
            WdLogSingleEntry3(2LL, v43, this, this[8]);
            v10 = 5;
            goto LABEL_10;
          }
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1344) )
          {
            ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v47);
            v45 = this[8];
            v46 = *ConnectedSetStr;
            LogCddDatabaseAccessPacket(0, v8, v45, &v46, 0);
          }
          goto LABEL_19;
        }
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
        v39 = 3;
      }
      else
      {
        WdLogSingleEntry3(3LL, -1073741266LL, this[8], v5);
        v39 = 2;
      }
      DxgkLogCodePointPacket(0x3Fu, v39, v5, 0xC000022E, 0LL);
      v8 = -1073741266;
      goto LABEL_11;
    }
    WdLogSingleEntry3(2LL, this, this[8], *(int *)this);
    DxgkLogCodePointPacket(0x3Fu, 0, v5, 0xC0000001, 0LL);
    return 3221225473LL;
  }
}
