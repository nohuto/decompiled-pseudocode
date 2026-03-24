/*
 * XREFs of ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x1800279B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180027BA0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005E108 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
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
  signed int v13; // esi
  HANDLE EventW; // rbx
  HANDLE CurrentProcess; // rdi
  HANDLE v16; // rax
  HANDLE v17; // rdi
  HANDLE v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  signed int LastError; // eax
  int v23; // r9d
  signed int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-60h]
  char *v26; // [rsp+40h] [rbp-40h] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v28; // [rsp+4Ch] [rbp-34h]
  int v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+58h] [rbp-28h]
  unsigned int v31; // [rsp+5Ch] [rbp-24h]
  unsigned int v32; // [rsp+60h] [rbp-20h]
  enum DXGI_FORMAT v33; // [rsp+64h] [rbp-1Ch]
  _BYTE v34[20]; // [rsp+68h] [rbp-18h] BYREF
  int v35; // [rsp+7Ch] [rbp-4h]

  v13 = 0;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( !EventW )
    return (unsigned int)v13;
  v26 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v27 = 278;
  v35 = 0;
  v31 = a5;
  v32 = a6;
  v33 = a7;
  *(_OWORD *)&v34[4] = 0LL;
  *(_QWORD *)v34 = a8;
  v28 = a2;
  v29 = a3;
  v30 = a4;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v16 = GetCurrentProcess();
  if ( !DuplicateHandle(v16, EventW, CurrentProcess, (LPHANDLE)&v34[8], 0, 0, 2u) )
  {
    LastError = GetLastError();
    v13 = LastError;
    if ( LastError > 0 )
      v13 = (unsigned __int16)LastError | 0x80070000;
    if ( v13 >= 0 )
      v13 = -2003304445;
    v25 = 1924;
    goto LABEL_18;
  }
  SetLastError(0);
  v17 = GetCurrentProcess();
  v18 = GetCurrentProcess();
  if ( !DuplicateHandle(v18, hSourceHandle, v17, (LPHANDLE)&v34[16], 0, 0, 2u) )
  {
    v24 = GetLastError();
    v13 = v24;
    if ( v24 > 0 )
      v13 = (unsigned __int16)v24 | 0x80070000;
    if ( v13 >= 0 )
      v13 = -2003304445;
    v25 = 1932;
LABEL_18:
    v23 = v13;
    goto LABEL_24;
  }
  v19 = CChannel::SendCommand(this, &v27, 0x38u);
  v13 = v19;
  if ( v19 < 0 )
  {
    v25 = 1934;
  }
  else
  {
    v19 = CChannel::SyncFlush(this);
    v13 = v19;
    if ( v19 >= 0 )
    {
      WaitForSingleObject(EventW, 0x1388u);
      goto LABEL_7;
    }
    v25 = 1935;
  }
  v23 = v19;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v23, v25, 0LL);
LABEL_7:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v26);
  if ( EventW != (HANDLE)-1LL )
    CloseHandle(EventW);
  return (unsigned int)v13;
}
