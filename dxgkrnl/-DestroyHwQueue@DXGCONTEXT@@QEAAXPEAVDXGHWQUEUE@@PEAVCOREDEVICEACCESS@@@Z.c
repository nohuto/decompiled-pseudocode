void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *a2, PERESOURCE **a3)
{
  __int64 v6; // rcx
  struct DXGHWQUEUE *v7; // rcx
  struct DXGHWQUEUE **v8; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 734LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 734LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 136)) )
  {
    WdLogSingleEntry1(1LL, 735LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 736LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 739LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 739LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 209LL) )
    DXGCONTEXT::DestroyHwQueueOnHost(this, a2);
  DXGHWQUEUE::DestroyCoreState(a2, a3);
  v7 = *(struct DXGHWQUEUE **)a2;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)a2 + 8LL) != a2 || (v8 = (struct DXGHWQUEUE **)*((_QWORD *)a2 + 1), *v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  DXGHWQUEUE::`scalar deleting destructor'(a2);
}
