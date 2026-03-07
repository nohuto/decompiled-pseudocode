__int64 __fastcall PnprMirrorMarkedPages()
{
  __int64 v0; // r15
  unsigned int v1; // r14d
  __int64 v2; // rdx
  bool v3; // r13
  __int64 v4; // rax
  RTL_BITMAP *v5; // rdi
  ULONG i; // eax
  int v7; // eax
  __int64 v8; // rcx
  ULONG v9; // esi
  ULONG v10; // esi
  ULONG v11; // ebx
  int v12; // eax
  int v13; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  ULONG StartingIndex; // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall *v17)(_QWORD, _QWORD, unsigned __int64); // [rsp+88h] [rbp+48h]

  StartingIndex = 0;
  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v2 = PnprContext;
  if ( *(_QWORD *)(*(_QWORD *)(PnprContext + 136) + 24 * v0) )
  {
    v3 = (_DWORD)v0 == *(_DWORD *)(PnprContext + 180);
    v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(PnprContext + 33216);
    do
    {
      v4 = v2 + 152;
      v5 = *(RTL_BITMAP **)(v2 + 152);
      while ( v5 != (RTL_BITMAP *)v4 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 168), &LockHandle);
        for ( i = RtlFindFirstRunClear(v5 + 2, &StartingIndex); ; i = RtlFindNextForwardRunClear(
                                                                        v5 + 2,
                                                                        v9,
                                                                        &StartingIndex) )
        {
          v10 = StartingIndex;
          v11 = i;
          if ( i )
          {
            if ( i >= 0x140 )
              v11 = 320;
            RtlSetBits(v5 + 2, StartingIndex, v11);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( !v11 )
            break;
          v7 = v17(
                 *(_QWORD *)(PnprContext + 33168),
                 (*(_QWORD *)&v5[1].SizeOfBitMap + v10) << 12,
                 (unsigned __int64)v11 << 12);
          v8 = PnprContext;
          v1 = v7;
          if ( v7 < 0 )
          {
            v12 = *(_DWORD *)(PnprContext + 33272);
            if ( !v12 )
              v12 = 3576;
            *(_DWORD *)(PnprContext + 33272) = v12;
            v13 = *(_DWORD *)(v8 + 33276);
            if ( !v13 )
              v13 = 8;
            *(_DWORD *)(v8 + 33276) = v13;
            goto LABEL_22;
          }
          v9 = v11 + v10;
          StartingIndex = v9;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(PnprContext + 168), &LockHandle);
        }
        if ( *(_DWORD *)(PnprContext + 200) == 3 )
          goto LABEL_22;
        v2 = PnprContext;
        v5 = *(RTL_BITMAP **)&v5->SizeOfBitMap;
        v4 = PnprContext + 152;
      }
    }
    while ( !v3 );
  }
LABEL_22:
  if ( (_DWORD)v0 != *(_DWORD *)(PnprContext + 180) && *(int *)(PnprContext + 200) < 3 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 3 );
  }
  return v1;
}
