/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C012B3F0
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C012B48C (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0223B18 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  unsigned int v1; // eax
  int v2; // ebx
  __int64 v3; // rcx
  __int64 i; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(gpsi + 2236LL) & 0x20) == 0 )
  {
    v1 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
    v3 = v1;
    v2 = v1;
    LOBYTE(v3) = v1 & 0xF;
    if ( (v1 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3) + 320); i; i = *(_QWORD *)(i + 664) )
      {
        v3 = **(unsigned int **)(i + 480);
        if ( (v3 & 0x20000000) != 0 )
        {
          v2 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1C032A3D8 > 5
      && (qword_1C032A3E8 & 0x400000000000LL) != 0
      && (qword_1C032A3F0 & 0x400000000000LL) == qword_1C032A3F0 )
    {
      v10 = v2;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v3);
      ProcessImageFileName = PsGetProcessImageFileName(*CurrentProcessWin32Process);
      v12 = 50331648LL;
      v11 = ProcessImageFileName;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned int)&unk_1C02F2BB3,
        v8,
        v9,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
