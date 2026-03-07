void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 **v8; // r8
  __int64 *v9; // rcx
  __int64 *v10; // rdi
  ULONG_PTR v11; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  void (__fastcall *v13)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int16 v14; // r14
  unsigned int *i; // rbx
  unsigned __int64 v16; // rdi
  bool v17; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v19)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v20; // eax
  __int64 (__fastcall *v21)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v24; // eax
  signed __int32 v25[8]; // [rsp+0h] [rbp-328h] BYREF
  _DWORD v26[2]; // [rsp+30h] [rbp-2F8h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-2F0h] BYREF
  int v28; // [rsp+3Ch] [rbp-2ECh]
  __int128 v29; // [rsp+40h] [rbp-2E8h] BYREF
  int v30; // [rsp+50h] [rbp-2D8h]
  int v31; // [rsp+58h] [rbp-2D0h] BYREF
  _QWORD *v32; // [rsp+60h] [rbp-2C8h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-2C0h] BYREF
  _DWORD v34[2]; // [rsp+70h] [rbp-2B8h] BYREF
  _DWORD v35[2]; // [rsp+78h] [rbp-2B0h] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-2A8h] BYREF
  _DWORD v37[2]; // [rsp+88h] [rbp-2A0h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-298h] BYREF
  __int128 v39; // [rsp+98h] [rbp-290h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-280h]
  int v41; // [rsp+B0h] [rbp-278h] BYREF
  __int128 v42; // [rsp+B4h] [rbp-274h]
  __int128 v43; // [rsp+C8h] [rbp-260h] BYREF
  unsigned __int16 v44[136]; // [rsp+E0h] [rbp-248h] BYREF
  _QWORD v45[34]; // [rsp+1F0h] [rbp-138h] BYREF
  int v46; // [rsp+320h] [rbp-8h]

  v32 = 0LL;
  v4 = 0LL;
  KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
  v5 = (__int64 **)KiUpdateVpThreadPriorityListHead;
  if ( (__int64 *)KiUpdateVpThreadPriorityListHead != &KiUpdateVpThreadPriorityListHead )
  {
    do
    {
      v6 = *v5;
      v7 = v5;
      v5 = (__int64 **)v6;
      v8 = (__int64 **)v7[1];
      if ( (__int64 **)v6[1] != v7 || *v8 != (__int64 *)v7 )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = (__int64)v8;
      *v7 = v4;
      v4 = (__int64 *)v7;
      v7[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v7 - 70, 1u);
    }
    while ( v6 != &KiUpdateVpThreadPriorityListHead );
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
  while ( v4 )
  {
    v9 = v4;
    v10 = v4;
    v4 = (__int64 *)*v4;
    v11 = (ULONG_PTR)(v10 - 126);
    *v9 = 1LL;
    _InterlockedOr(v25, 0);
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(v11 + 64) );
    }
    if ( (*(_DWORD *)(v11 + 120) & 0x400000) != 0 )
      KiUpdateVpBackingThreadPriorityFromTopLevel(v11);
    *(_QWORD *)(v11 + 64) = 0LL;
    _InterlockedDecrement16((volatile signed __int16 *)(v11 + 868));
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v32);
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
      return;
    }
    memset(v44, 0, 0x108uLL);
    v42 = 0LL;
    if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
    {
      ProcNumber = (struct _PROCESSOR_NUMBER)-1;
      v41 = 3;
      v28 = 1;
      v26[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v26[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v13 = *(void (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                + 120);
      _disable();
      v13(*(_QWORD *)(HalpInterruptController + 16), v26, &v41, 47LL, &ProcNumber);
      if ( (v46 & 0x200) != 0 )
        _enable();
      return;
    }
    KeInitializeAffinityEx2((__int64)v44, 0x20u);
    KeAddProcessorAffinityEx(v44, KeGetPcr()->Prcb.Number);
    v26[0] = 0;
    ProcNumber = 0;
    v40 = 0LL;
    v43 = 0LL;
    v39 = 0LL;
    memset(v45, 0, 0x108uLL);
    v30 = 0;
    v29 = 0LL;
    if ( qword_140C621C8 )
    {
      qword_140C621C8(v44, 47LL);
      return;
    }
    KeInitializeAffinityEx2((__int64)v45, 0x20u);
    KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v44, v45, WORD1(v45[0]));
    v14 = v46;
    if ( HalpInterruptClusterModeEnabled )
    {
      for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
      {
        if ( (unsigned int)KeAndGroupAffinityEx(v44, (__int64)(i + 2), (char *)&v43) )
        {
          v16 = v43;
          LODWORD(v29) = 6;
          v17 = (_QWORD)v43 == 0LL;
          *((_QWORD *)&v29 + 1) = *i;
          ProcNumber.Group = WORD4(v43);
          for ( j = 0; ; ++j )
          {
            ProcNumber.Number = j;
            if ( v17 )
              break;
            if ( (v16 & 1) != 0 )
            {
              v26[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
              HIDWORD(v29) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v26[0] + 12);
              j = ProcNumber.Number;
            }
            v16 >>= 1;
            v17 = v16 == 0;
          }
          v33[0] = -1;
          v33[1] = 1;
          v34[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v34[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v19 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
          _disable();
          v20 = v19(*(_QWORD *)(HalpInterruptController + 16), v34, &v29, 47LL, v33);
          if ( (v14 & 0x200) != 0 )
            _enable();
          if ( v20 < 0 )
            return;
        }
      }
      goto LABEL_48;
    }
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_48;
    LODWORD(v29) = 5;
    DWORD2(v29) = 0;
    KeInitializeEnumerationContext((__int64)&v39, (__int64)v44);
    while ( !(unsigned int)KeEnumerateNextProcessor(v26, (unsigned __int16 **)&v39) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v26[0]) == 5 )
        DWORD2(v29) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v26[0] + 8);
    }
    if ( !DWORD2(v29) )
      goto LABEL_48;
    v35[0] = -1;
    v35[1] = 1;
    v36[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v36[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v21 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
    _disable();
    v22 = v21(*(_QWORD *)(HalpInterruptController + 16), v36, &v29, 47LL, v35);
    if ( (v14 & 0x200) != 0 )
      _enable();
    if ( v22 >= 0 )
    {
LABEL_48:
      *((_QWORD *)&v39 + 1) = v45[1];
      *(_QWORD *)&v39 = v45;
      v26[0] = 0;
      LOWORD(v40) = 0;
      do
      {
        if ( (unsigned int)KeEnumerateNextProcessor(v26, (unsigned __int16 **)&v39) )
          break;
        v37[0] = -1;
        LODWORD(v29) = 4;
        v37[1] = 1;
        DWORD2(v29) = *(_DWORD *)(HalpInterruptTargets + 24LL * v26[0] + 8);
        v38[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v38[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v23 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v24 = v23(*(_QWORD *)(HalpInterruptController + 16), v38, &v29, 47LL, v37);
        if ( (v14 & 0x200) != 0 )
          _enable();
      }
      while ( v24 >= 0 );
    }
  }
}
