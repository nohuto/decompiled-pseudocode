void __fastcall ViWdIrpTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  if ( ViWdIrpListLength )
  {
    v4 = ViWdTickCount++;
    v5 = ViWdTickCount;
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( v5 >= v4 )
    {
      if ( ViWdIrpListLength )
      {
        v7 = VfWdIrpListHead;
        if ( *(_DWORD *)(VfWdIrpListHead + 24) < (unsigned int)ViWdTickCount )
        {
          ViWdIrpTimedOut(VfWdIrpListHead);
          v8 = *(_QWORD *)v7;
          if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
            __fastfail(3u);
          *v9 = v8;
          *(_QWORD *)(v8 + 8) = v9;
          *(_BYTE *)(v7 + 28) = 0;
          --ViWdIrpListLength;
        }
      }
    }
    else
    {
      for ( i = VfWdIrpListHead; (__int64 *)i != &VfWdIrpListHead; i = *(_QWORD *)i )
        *(_BYTE *)(i + 28) = 0;
      qword_140D70690 = (__int64)&VfWdIrpListHead;
      VfWdIrpListHead = (__int64)&VfWdIrpListHead;
      ViWdIrpListLength = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&VfWdIrpListLock);
  }
  if ( !ViWdCancelling )
    KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
