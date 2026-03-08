/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0312040
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0318D00 (DxgkCreateHwQueueInternal.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00518EC (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C005194C (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C03126F0 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0314F30 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  __int64 v9; // rax
  int v10; // esi
  DXGHWQUEUE *v11; // rax
  DXGHWQUEUE **v12; // rcx
  __int64 v13; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    WdLogSingleEntry1(1LL, 669LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      669LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 670LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      670LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 671LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 671LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = DXGQUOTAALLOCATOR<64,1265072196>::operator new(152LL);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = this;
    *(_OWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_QWORD *)(v9 + 104) = 1LL;
    *(_BYTE *)(v9 + 112) = 0;
    *(_QWORD *)(v9 + 120) = 0LL;
    *(_QWORD *)(v9 + 128) = 0LL;
    *(_DWORD *)(v9 + 136) = 0;
    *(_BYTE *)(v9 + 140) = 0;
    *(_QWORD *)(v9 + 144) = 0LL;
    *a4 = (struct DXGHWQUEUE *)v9;
    v10 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)v9, a2, a3);
    if ( v10 >= 0 )
    {
      v11 = *a4;
      v12 = (DXGHWQUEUE **)((char *)this + 408);
      v13 = *((_QWORD *)this + 51);
      if ( *(DXGCONTEXT **)(v13 + 8) != (DXGCONTEXT *)((char *)this + 408) )
        __fastfail(3u);
      *(_QWORD *)v11 = v13;
      *((_QWORD *)v11 + 1) = v12;
      *(_QWORD *)(v13 + 8) = v11;
      *v12 = v11;
      _InterlockedIncrement64((volatile signed __int64 *)this + 4);
      return 0LL;
    }
  }
  else
  {
    *a4 = 0LL;
    v10 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  if ( *a4 )
  {
    DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGHWQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v10;
}
