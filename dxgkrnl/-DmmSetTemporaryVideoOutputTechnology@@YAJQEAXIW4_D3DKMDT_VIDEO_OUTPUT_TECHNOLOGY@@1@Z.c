/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0201ED4
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00094F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a1 + 365);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, *(_QWORD *)(v8 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v11 + 80) = a3;
      if ( a4 != D3DKMDT_VOT_UNINITIALIZED )
        *(_DWORD *)(v11 + 84) = a4;
      v12 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      v12 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
