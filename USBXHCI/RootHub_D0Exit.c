/*
 * XREFs of RootHub_D0Exit @ 0x1C0010338
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Controller_NotifyPortStateToPep @ 0x1C000FB7C (Controller_NotifyPortStateToPep.c)
 *     RootHub_HandleResumedPorts @ 0x1C0010220 (RootHub_HandleResumedPorts.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C00105D0 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_DumpPortData @ 0x1C0017D40 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  int v4; // ebx
  __int64 v6; // r12
  int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 Ulong; // ax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r15
  __int64 v18; // rbx
  __int16 v19; // ax

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  RootHub_HandleResumedPorts(a1);
  v7 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      if ( v4 != 5 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 336) >> 26;
        LOBYTE(v10) = (*(_QWORD *)(v9 + 336) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, v10) < 0 && a3 == 7 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C0064810)(UcxDriverGlobals, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL), *(_QWORD *)(a1 + 40) + 16LL * v8);
        if ( (Ulong & 0x201) == 0x201 )
        {
          v12 = Ulong & 0x1E0;
          if ( v12 != 128 && ((v12 - 192) & 0xFFFFFF7F) != 0 )
            v7 = 1;
        }
      }
      v13 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v13 + 336) & 0x40000000LL) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v15 = XilRegister_ReadUlong(v6, v14);
        if ( a3 != 7 || (v15 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v14, v15 & 0xE00C200 | 0x20000u);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
        v13 = *(_QWORD *)(a1 + 8);
      }
      v16 = 120LL * v8;
      if ( (*(_DWORD *)(v16 + *(_QWORD *)(a1 + 48) + 64) & 2) != 0
        || (unsigned int)(a3 - 3) <= 3 && (*(_QWORD *)(v13 + 336) & 0x20000000LL) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v19 = XilRegister_ReadUlong(v6, v18);
        XilRegister_WriteUlong(v6, v18, v19 & 0xC200);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
      }
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v8, *(_QWORD *)(a1 + 8));
      v4 = a2;
      ++v8;
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v16 + 18) = 0;
    }
    while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
  }
  return Controller_NotifyPortStateToPep(*(_QWORD *)(a1 + 8), v7);
}
