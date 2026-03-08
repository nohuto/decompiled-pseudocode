/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE4E8
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AD15C (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0016114 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C002061C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C020D5F0 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C020D6D0 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v11; // rbx
  struct DMMVIDEOPRESENTTARGET *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rbx
  DMMVIDEOPRESENTTARGET *v22; // rax
  DMMVIDEOPRESENTTARGET *v23; // rax
  DMMVIDEOPRESENTTARGET *v24; // rdi
  int v25; // eax
  __int64 v26; // r14
  int v27; // eax
  struct DMMVIDEOPRESENTTARGET **v28; // rdx
  struct DMMVIDEOPRESENTTARGET *v29; // rax
  __int64 v30; // rbx

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v11 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v11 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry4(1LL, v8, *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), -1073741811LL, 1LL);
    return 3221225485LL;
  }
  v13 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v6);
  if ( a5 )
  {
    if ( !v13 )
    {
      *(_DWORD *)a6 = 1;
      v14 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v14 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(1LL, v6, *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), -1073741811LL, 2LL);
      return 3221225485LL;
    }
    if ( !*((_QWORD *)v13 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v15 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v15 + 8) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(1LL, v6, *(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL), -1073741811LL, 3LL);
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v13) )
    {
      *(_DWORD *)a6 = 6;
      v16 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v16 + 8) )
        WdLogSingleEntry0(1LL);
      v17 = v6;
LABEL_19:
      WdLogSingleEntry4(1LL, v17, *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL), -1073741811LL, 4LL);
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v16 = *((_QWORD *)this + 11);
      if ( !*(_QWORD *)(v16 + 8) )
        WdLogSingleEntry0(1LL);
      v17 = v8;
      goto LABEL_19;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 72));
    v19 = *(_QWORD **)(v18 + 488);
    v20 = (_QWORD *)((char *)TargetById + 496);
    if ( *v19 == v18 + 480 )
    {
      *v20 = v18 + 480;
      *((_QWORD *)TargetById + 63) = v19;
      *v19 = v20;
      *(_QWORD *)(v18 + 488) = v20;
      *((_QWORD *)TargetById + 66) = v18;
      return 0LL;
    }
    goto LABEL_38;
  }
  if ( v13 )
  {
    *(_DWORD *)a6 = 3;
    v21 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v21 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry4(1LL, v6, *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL), -1073741811LL, 5LL);
    return 3221225485LL;
  }
  v22 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, 256LL);
  if ( v22 )
  {
    v23 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v22,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
    v24 = v23;
    if ( v23 )
    {
      v25 = DMMVIDEOPRESENTTARGET::Initialize(v23);
      LODWORD(v26) = v25;
      if ( v25 >= 0 )
      {
        v27 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v24);
        v26 = v27;
        if ( v27 >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
          v28 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
          v29 = (DMMVIDEOPRESENTTARGET *)((char *)v24 + 456);
          if ( *v28 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
          {
            *(_QWORD *)v29 = (char *)TargetById + 440;
            *((_QWORD *)v24 + 58) = v28;
            *v28 = v29;
            *((_QWORD *)TargetById + 56) = v29;
            *((_QWORD *)v24 + 59) = TargetById;
            *((_DWORD *)v24 + 30) = *((_DWORD *)TargetById + 30);
            ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
            return 0LL;
          }
LABEL_38:
          __fastfail(3u);
        }
        *(_DWORD *)a6 = -2147483646;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
        WdLogSingleEntry3(2LL, v6, this, v26);
      }
      else
      {
        *(_DWORD *)a6 = -2147483647;
        WdLogSingleEntry2(2LL, v6, v25);
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v24 + 64));
      }
      return (unsigned int)v26;
    }
  }
  *(_DWORD *)a6 = 0x80000000;
  v30 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v30 + 8) )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry2(6LL, v6, *(_QWORD *)(*(_QWORD *)(v30 + 8) + 16LL));
  return 3221225495LL;
}
