void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  _QWORD **v6; // r15
  _QWORD *v7; // rdi
  VIDMM_DEVICE **v8; // rdx

  v3 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 296));
  v4 = *(_QWORD **)(v3 + 272);
  while ( v4 != (_QWORD *)(v3 + 272) )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = (_QWORD **)(v5 - 2);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = (VIDMM_DEVICE **)(v7 - 5);
      v7 = (_QWORD *)*v7;
      if ( (*((_BYTE *)v8 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v8, 0, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v3 + 296));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 120) + 24LL))(
    *(_QWORD *)(v3 + 120),
    v3,
    *(_QWORD *)(v3 + 136),
    *(_QWORD *)(v3 + 16),
    **(_QWORD **)(v3 + 512));
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_DWORD *)(v3 + 112) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v3, 0);
}
