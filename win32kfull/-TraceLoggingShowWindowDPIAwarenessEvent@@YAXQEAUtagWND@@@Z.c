void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 i; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 ProcessImageFileName; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v2 = v1;
    v3 = v1;
    if ( (v1 & 0xF) == 2 )
    {
      LOBYTE(v2) = v1 & 0xF;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( (**(_DWORD **)(i + 480) & 0x20000000) != 0 )
        {
          v3 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1C0357098 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
    {
      v12 = v3;
      v7 = PsGetCurrentProcessWin32Process(v6);
      if ( v7 )
        v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
      ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)v7);
      v14 = 50331648LL;
      v13 = ProcessImageFileName;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned int)&unk_1C031E844,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
