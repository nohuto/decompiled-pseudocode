/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C001D1C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvSampleDisplayState @ 0x1C001B860 (DrvSampleDisplayState.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C001DD24 (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     DrvQueryDisplayConfig @ 0x1C001F020 (DrvQueryDisplayConfig.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _DWORD *Address)
{
  const void *v9; // rsi
  ULONG64 v10; // rcx
  _DWORD *v11; // rdx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  int v14; // r15d
  __int64 v15; // rax
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-98h] BYREF
  int v21; // [rsp+24h] [rbp-94h]
  int v22; // [rsp+28h] [rbp-90h] BYREF
  const void *v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  int v25; // [rsp+50h] [rbp-68h]
  __int128 v26; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+70h] [rbp-48h]

  v9 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v20 = 0;
  v22 = -1;
  v24 = 0LL;
  v25 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( !gbVideoInitialized )
  {
    v16 = -1073741823;
    goto LABEL_30;
  }
  if ( (a1 & 0xFFFFFFC8) != 0 || (v10 = a1 & 7, (((_DWORD)v10 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v10 == 3 )
  {
    v16 = -1073741811;
    goto LABEL_30;
  }
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = MmUserProbeAddress;
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  v20 = *a2;
  if ( v20 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v20, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)Win32AllocPoolWithQuotaZInit(200LL * v20);
    v23 = v9;
    if ( !v9 )
      ExRaiseStatus(-1073741801);
    if ( qword_1C0256FC0 )
      qword_1C0256FC0(v9, &v26, Win32FreePool);
    v14 = a1 & 4;
    if ( (a1 & 4) != 0 )
    {
      ProbeForWrite(a4, 4uLL, 4u);
    }
    else if ( a4 )
    {
      v16 = -1073741811;
      v21 = -1073741811;
      goto LABEL_30;
    }
    if ( Address )
    {
      v15 = PsGetCurrentProcessWow64Process(v10);
      ProbeForWrite(Address, 0xCuLL, v15 != 0 ? 1 : 4);
    }
    if ( (unsigned int)UserIsWddmConnectedSession(v10, v13) )
    {
      if ( Address )
        DrvSampleDisplayState(&v24);
      v17 = DrvQueryDisplayConfig(a1, &v20, v9, &v22);
      v16 = v17;
      v21 = v17;
      if ( v17 == -2147483643 )
      {
        v16 = -1073741789;
        v21 = -1073741789;
      }
      else if ( v17 != -1073741789 )
      {
        v16 = QdcSdcTranslateStatusDefault(v17);
        v21 = v16;
      }
      v18 = v20;
      memmove((void *)a3, v9, 200LL * v20);
      *a2 = v18;
      if ( v14 )
        *a4 = v22;
      if ( Address )
      {
        *(_QWORD *)Address = v24;
        Address[2] = v25;
      }
    }
    else
    {
      v16 = -1073741790;
    }
  }
  else
  {
    v16 = -1073741811;
    v21 = -1073741811;
    v9 = v23;
  }
LABEL_30:
  if ( v9 && qword_1C02570E8 )
    qword_1C02570E8(&v26);
  UserSessionSwitchLeaveCrit(v10);
  return v16;
}
