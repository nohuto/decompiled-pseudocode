/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00F8A64
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00F8B80 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00F8D40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 */

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
