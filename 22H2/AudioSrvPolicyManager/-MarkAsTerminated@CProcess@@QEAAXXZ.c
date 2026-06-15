/*
 * XREFs of ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x1800166BC
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163F0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18002D14C (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::MarkAsTerminated(CProcess *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-60h] BYREF
  char v12; // [rsp+28h] [rbp-58h]
  LPCRITICAL_SECTION v13; // [rsp+30h] [rbp-50h] BYREF
  char v14; // [rsp+38h] [rbp-48h]
  _QWORD v15[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  *((_DWORD *)this + 112) = 2;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v15[0] = off_18003EE40;
  v15[1] = this;
  v15[7] = v15;
  v2 = QueueGenericWorkItem(v15);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF8C,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  v13 = (LPCRITICAL_SECTION)((char *)this + 624);
  v14 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v13);
  if ( *((_QWORD *)this + 84) )
  {
    v3 = 0LL;
    v4 = *((_DWORD *)this + 170);
    if ( v4 )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 83) + 8 * v3);
        if ( v5 )
          goto LABEL_12;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v4 );
    }
    v5 = 0LL;
    while ( v5 )
    {
LABEL_12:
      v6 = v5;
      v7 = *(_QWORD *)(v5 + 16);
      if ( !v7 )
      {
        v8 = *((_DWORD *)this + 170);
        v9 = *(_DWORD *)(v5 + 24) % v8 + 1;
        do
        {
          if ( (unsigned int)v9 >= v8 )
            break;
          v10 = *((_QWORD *)this + 83);
          if ( *(_QWORD *)(v10 + 8 * v9) )
            v7 = *(_QWORD *)(v10 + 8 * v9);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( !v7 );
      }
      v5 = v7;
      (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v6 + 8) + 24LL))(
        *(_QWORD *)(v6 + 8),
        (char *)this + 16,
        *(_QWORD *)v6);
    }
  }
  if ( v14 )
    LeaveCriticalSection(v13);
}
