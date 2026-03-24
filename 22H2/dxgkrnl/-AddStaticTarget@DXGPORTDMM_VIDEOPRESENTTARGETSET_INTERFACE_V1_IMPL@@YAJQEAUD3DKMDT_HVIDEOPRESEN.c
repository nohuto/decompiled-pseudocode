/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0197F30
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0023350 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0023570 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0198038 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0198078 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C01980FC (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v10; // rdi
  DMMVIDEOPRESENTTARGET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DMMVIDEOPRESENTTARGET *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  int v21; // eax
  ReferenceCounted *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v10 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      v11 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, PagedPool);
      if ( v11 )
        v16 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v11,
                v10,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v16 = 0LL;
      if ( v16 )
      {
        v17 = DMMVIDEOPRESENTTARGET::Initialize(v16);
        v20 = v17;
        if ( v17 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v19, v18);
          *(_QWORD *)(v31 + 24) = a2->Id;
          *(_QWORD *)(v31 + 32) = v20;
          WdLogEvent5_WdError(v31);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v16 + 64), v32);
          return (unsigned int)v20;
        }
        else
        {
          v21 = DMMVIDEOPRESENTTARGETSET::AddTarget(v10, v16);
          v22 = (DMMVIDEOPRESENTTARGET *)((char *)v16 + 64);
          v23 = v21;
          ReferenceCounted::Release(v22, v24);
          if ( (int)v23 < 0 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25);
            v33[3] = a2->Id;
            v33[4] = v10;
            v33[5] = v23;
            return (unsigned int)v23;
          }
          else
          {
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v10, a2);
          }
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v30 + 24) = v10;
        WdLogEvent5_WdLowResource(v30);
        return 3221225495LL;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
      return 3223192342LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v28 + 24) = 0LL;
    *(_QWORD *)(v28 + 32) = this;
    WdLogEvent5_WdError(v28);
    return 3223192325LL;
  }
}
