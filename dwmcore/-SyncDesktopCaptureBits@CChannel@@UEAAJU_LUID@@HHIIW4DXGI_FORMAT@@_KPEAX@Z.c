/*
 * XREFs of ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180018C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1800CCFA8 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ @ 0x1801B0AC0 (--1CPresentStats@CDummyRemotingSwapChain@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::SyncDesktopCaptureBits(
        CChannel *this,
        struct _LUID a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8,
        HANDLE hSourceHandle)
{
  HANDLE CurrentProcess; // rdi
  HANDLE v14; // rax
  const char *v15; // r9
  HANDLE v16; // rdi
  HANDLE v17; // rax
  int v18; // edi
  __int64 v20; // rdx
  unsigned int LastError; // ebx
  __int64 v22; // rdx
  int v23; // [rsp+28h] [rbp-51h]
  char *EventW; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-29h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  struct _LUID v27; // [rsp+64h] [rbp-15h]
  int v28; // [rsp+6Ch] [rbp-Dh]
  int v29; // [rsp+70h] [rbp-9h]
  unsigned int v30; // [rsp+74h] [rbp-5h]
  unsigned int v31; // [rsp+78h] [rbp-1h]
  enum DXGI_FORMAT v32; // [rsp+7Ch] [rbp+3h]
  _BYTE v33[20]; // [rsp+80h] [rbp+7h] BYREF
  int v34; // [rsp+94h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+37h]

  EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
  if ( EventW )
  {
    CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v25, this);
    v26 = 269;
    v34 = 0;
    v30 = a5;
    v31 = a6;
    v32 = a7;
    *(_OWORD *)&v33[4] = 0LL;
    *(_QWORD *)v33 = a8;
    v27 = a2;
    v28 = a3;
    v29 = a4;
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( DuplicateHandle(v14, EventW, CurrentProcess, (LPHANDLE)&v33[8], 0, 0, 2u) )
    {
      v16 = GetCurrentProcess();
      v17 = GetCurrentProcess();
      if ( DuplicateHandle(v17, hSourceHandle, v16, (LPHANDLE)&v33[16], 0, 0, 2u) )
      {
        v18 = CChannel::SendCommand(this, &v26, 0x38u);
        if ( v18 < 0 )
        {
          v22 = 1964LL;
        }
        else
        {
          v18 = CChannel::SyncFlushInternal(this);
          if ( v18 >= 0 )
          {
            WaitForSingleObject(EventW, 0x1388u);
            CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v25);
            goto LABEL_7;
          }
          v22 = 1965LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
          (const char *)(unsigned int)v18,
          v23);
        LastError = v18;
LABEL_16:
        CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v25);
        CDummyRemotingSwapChain::CPresentStats::~CPresentStats((CDummyRemotingSwapChain::CPresentStats *)&EventW);
        return LastError;
      }
      v20 = 1962LL;
    }
    else
    {
      v20 = 1954LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v20,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v15);
    goto LABEL_16;
  }
LABEL_7:
  if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(EventW);
  return 0LL;
}
