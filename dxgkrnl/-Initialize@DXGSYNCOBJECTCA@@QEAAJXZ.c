/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C034B660
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z @ 0x1C01A2F18 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  _QWORD *v5; // rax
  int v6; // eax

  Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL);
  v3 = 0LL;
  *((_QWORD *)this + 39) = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    v5 = (_QWORD *)(*((_QWORD *)this + 39) + 16LL);
    v5[1] = v5;
    *v5 = v5;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 39) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 39));
    v6 = *((_DWORD *)this + 50);
    if ( v6 == 3 || v6 == 5 )
      v3 = *((_QWORD *)this + 26);
    *(_QWORD *)(*((_QWORD *)this + 39) + 40LL) = v3;
    *(_QWORD *)(*((_QWORD *)this + 39) + 32LL) = v3;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
