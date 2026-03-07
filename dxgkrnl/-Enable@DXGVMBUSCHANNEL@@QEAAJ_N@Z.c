__int64 __fastcall DXGVMBUSCHANNEL::Enable(DXGVMBUSCHANNEL *this, char a2)
{
  __int64 v4; // rsi
  struct _KEVENT *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  char v8; // bl
  struct _KEVENT *v9; // rcx
  void *v10; // rcx
  NTSTATUS v11; // eax
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *((_QWORD *)this + 2) )
  {
    if ( !*((_BYTE *)this + 26) && (!*((_BYTE *)this + 24) || *((_BYTE *)this + 25)) )
    {
      v5 = (struct _KEVENT *)*((_QWORD *)this + 4);
      if ( v5 )
        KeClearEvent(v5);
      v6 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 24) = 1;
      *((_BYTE *)this + 26) = 1;
      v7 = ((__int64 (__fastcall *)(__int64))qword_1C013CE40)(v6);
      v4 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry5(
          2LL,
          v7,
          this,
          *((unsigned __int8 *)this + 24),
          *((unsigned __int8 *)this + 25),
          *((unsigned __int8 *)this + 26));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmbChannelEnable failed. Returning 0x%I64x",
          v4,
          (__int64)this,
          *((unsigned __int8 *)this + 24),
          *((unsigned __int8 *)this + 25),
          *((unsigned __int8 *)this + 26));
        *((_BYTE *)this + 24) = 0;
        *((_BYTE *)this + 26) = 0;
      }
      else if ( *((_BYTE *)this + 27) )
      {
        ((void (__fastcall *)(_QWORD))qword_1C013CEF0)(*((_QWORD *)this + 2));
      }
    }
    v8 = a2 & *((_BYTE *)this + 24);
  }
  else
  {
    v8 = 0;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  if ( v8 )
  {
    v9 = (struct _KEVENT *)*((_QWORD *)this + 4);
    if ( v9 )
    {
      if ( !KeReadStateEvent(v9) )
      {
        WdLogSingleEntry1(3LL, this);
        Timeout.QuadPart = (-(__int64)((_BYTE)KdDebuggerEnabled != 0) & 0xFFFFFFFF56207380uLL) - 150000000;
        v10 = (void *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = KeGetCurrentThread();
        v11 = KeWaitForSingleObject(v10, Executive, 0, 0, &Timeout);
        *((_QWORD *)this + 5) = 0LL;
        v4 = v11;
        if ( v11 )
        {
          WdLogSingleEntry5(
            1LL,
            v11,
            this,
            *((unsigned __int8 *)this + 24),
            *((unsigned __int8 *)this + 25),
            *((unsigned __int8 *)this + 26));
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Failed on waiting for VM bus channel to start: 0x%I64x",
            v4,
            (__int64)this,
            *((unsigned __int8 *)this + 24),
            *((unsigned __int8 *)this + 25),
            *((unsigned __int8 *)this + 26));
          LODWORD(v4) = -1073741823;
LABEL_21:
          DXGVMBUSCHANNEL::Disable(this);
          return (unsigned int)v4;
        }
      }
    }
  }
  if ( (int)v4 < 0 )
    goto LABEL_21;
  return (unsigned int)v4;
}
