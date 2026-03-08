/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C020D4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C00205FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C002061C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C020D5B0 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C020D5F0 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C020D6D0 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  DMMVIDEOPRESENTTARGETSET *v7; // rdi
  DMMVIDEOPRESENTTARGET *v8; // rax
  DMMVIDEOPRESENTTARGET *v9; // rax
  DMMVIDEOPRESENTTARGET *v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v18; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v7 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, 256LL);
      if ( v8
        && (v9 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                   v8,
                   v7,
                   a2->Id,
                   a2->VideoOutputTechnology,
                   a2->VideoOutputHpdAwareness,
                   a2->MonitorOrientationAwareness,
                   a2->SupportsSdtvModes),
            (v10 = v9) != 0LL) )
      {
        v11 = DMMVIDEOPRESENTTARGET::Initialize(v9);
        LODWORD(v12) = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry2(2LL, a2->Id, v11);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v10 + 64));
        }
        else
        {
          v12 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v7, v10);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v10 + 64));
          if ( (int)v12 >= 0 )
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v7, a2);
          v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
          v18[3] = a2->Id;
          v18[4] = v7;
          v18[5] = v12;
        }
        return (unsigned int)v12;
      }
      else
      {
        WdLogSingleEntry1(6LL, v7);
        return 3221225495LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      return 3223192342LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    return 3223192325LL;
  }
}
