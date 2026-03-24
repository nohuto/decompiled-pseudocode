/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C012E660
 * Callers:
 *     <none>
 * Callees:
 *     DrvSampleDisplayState @ 0x1C001CCD0 (DrvSampleDisplayState.c)
 *     UserIsWddmConnectedSession @ 0x1C001F320 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147784 (DrvFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  unsigned int v10; // esi
  void *v11; // r14
  _DWORD *v12; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 *i; // rcx
  _OWORD *v17; // r9
  _OWORD *v18; // r11
  unsigned int v19; // r8d
  unsigned int j; // r10d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-104h]
  _DWORD v26[2]; // [rsp+38h] [rbp-100h] BYREF
  void *v27; // [rsp+40h] [rbp-F8h]
  __int64 *v28; // [rsp+48h] [rbp-F0h]
  __int64 v29; // [rsp+50h] [rbp-E8h]
  int v30; // [rsp+58h] [rbp-E0h]
  int v31; // [rsp+60h] [rbp-D8h]
  int v32; // [rsp+64h] [rbp-D4h]
  __int64 v33; // [rsp+78h] [rbp-C0h] BYREF
  int v34; // [rsp+80h] [rbp-B8h]
  void *v35; // [rsp+88h] [rbp-B0h]
  __int64 v36; // [rsp+98h] [rbp-A0h]
  _QWORD v37[10]; // [rsp+B0h] [rbp-88h] BYREF

  v36 = a5;
  v27 = 0LL;
  v24 = 0;
  v26[0] = -1;
  v29 = 0LL;
  v30 = 0;
  memset(v37, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v37[1]);
  v37[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v37[3]) = 59;
  LOBYTE(v37[6]) = -1;
  v26[1] = -1073741811;
  EnterSharedCrit(0, 1);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gbVideoInitialized )
  {
    v12 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v24 = *a2;
    if ( v24 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v24, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = Win32AllocPoolWithQuotaZInit(200LL * v24, 0x63447355u);
    v27 = v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    v28 = 0LL;
    v35 = 0LL;
    v25 = 0;
    v14 = 0;
    v31 = 0;
    v15 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v28 = i;
      v25 = v15;
      if ( v15 >= v24 )
        break;
      if ( *i < 0 )
        v31 = ++v14;
      ++v15;
    }
    if ( v24 != v14 )
      ExRaiseStatus(-1073741811);
    v17 = a3;
    v28 = (__int64 *)a3;
    v18 = v11;
    v35 = v11;
    v19 = 0;
    v32 = 0;
    for ( j = 0; ; ++j )
    {
      v25 = j;
      if ( j >= v14 )
        break;
      if ( *(__int64 *)v17 < 0 )
      {
        if ( v19 >= v14 )
          ExRaiseStatus(-1073741811);
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v18[3] = v17[3];
        v18[4] = v17[4];
        v18[5] = v17[5];
        v18[6] = v17[6];
        v18[7] = v17[7];
        v18[8] = v17[8];
        v18[9] = v17[9];
        v18[10] = v17[10];
        v18[11] = v17[11];
        *((_QWORD *)v18 + 24) = *((_QWORD *)v17 + 24);
        if ( *(__int64 *)v18 >= 0 )
          ExRaiseStatus(-1073741790);
        v32 = ++v19;
        v18 = (_OWORD *)((char *)v18 + 200);
        v35 = v18;
      }
      v17 = (_OWORD *)((char *)v17 + 200);
      v28 = (__int64 *)v17;
    }
    if ( v19 != v14 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v21) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v29 = *(_QWORD *)a4;
      v30 = *(_DWORD *)(a4 + 8);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( !a4 || (v33 = 0LL, v34 = 0, DrvSampleDisplayState(&v33), v34 == v30) && v33 == v29 )
      {
        v10 = DrvFunctionalizeDisplayConfig((unsigned int)&v24, (_DWORD)v11, a1, v36, (__int64)v26);
        if ( v10 == -2147483643 )
          v10 = -1073741789;
        v22 = v24;
        memmove((void *)a3, v11, 200LL * v24);
        *a2 = v22;
        *Address = v26[0];
      }
      else
      {
        v10 = -1071774921;
      }
    }
    else
    {
      v10 = -1073741790;
    }
  }
  else
  {
    v10 = -1073741823;
    v11 = v27;
  }
  if ( v11 )
  {
    Win32FreePool((__int64)v11);
    v27 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
