/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C0158C20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C005FB30 (Win32AllocPoolWithQuotaZInit.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     SetLastNtError @ 0x1C009A910 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0174420 (DrvFunctionalizeDisplayConfig.c)
 *     DrvIsDisplayStateCurrent @ 0x1C0174768 (DrvIsDisplayStateCurrent.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        volatile void *a6)
{
  __int64 v10; // rdx
  volatile void *v11; // rcx
  __int64 v12; // r8
  int v13; // esi
  void *v14; // r15
  _DWORD *v15; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 *i; // rcx
  _OWORD *v20; // r9
  _OWORD *v21; // r11
  unsigned int v22; // r8d
  unsigned int j; // r10d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  unsigned int v30; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-114h]
  _DWORD v32[2]; // [rsp+38h] [rbp-110h] BYREF
  void *v33; // [rsp+40h] [rbp-108h]
  __int64 *v34; // [rsp+48h] [rbp-100h]
  int v35; // [rsp+50h] [rbp-F8h]
  int v36; // [rsp+54h] [rbp-F4h]
  __int64 v37; // [rsp+68h] [rbp-E0h] BYREF
  int v38; // [rsp+70h] [rbp-D8h]
  void *v39; // [rsp+78h] [rbp-D0h]
  volatile void *Address; // [rsp+80h] [rbp-C8h]
  __int64 v41; // [rsp+90h] [rbp-B8h]
  _QWORD v42[10]; // [rsp+B0h] [rbp-98h] BYREF

  v41 = a5;
  Address = a6;
  v33 = 0LL;
  v30 = 0;
  v32[0] = -1;
  v37 = 0LL;
  v38 = 0;
  memset(v42, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v42[1]);
  v42[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v42[3]) = 59;
  LOBYTE(v42[6]) = -1;
  v32[1] = -1073741811;
  EnterSharedCrit();
  W32GetCurrentThread();
  if ( !gbVideoInitialized )
  {
    v13 = -1073741823;
    v14 = v33;
    goto LABEL_45;
  }
  v15 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  v30 = *a2;
  if ( v30 - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v15, v12);
  ProbeForWrite(a3, 216LL * v30, CurrentProcessWow64Process != 0 ? 1 : 4);
  v14 = (void *)Win32AllocPoolWithQuotaZInit(216LL * v30, 1665430357);
  v33 = v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  v34 = 0LL;
  v39 = 0LL;
  v31 = 0;
  v17 = 0;
  v35 = 0;
  v18 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v34 = i;
    v31 = v18;
    if ( v18 >= v30 )
      break;
    if ( *i < 0 )
      v35 = ++v17;
    ++v18;
  }
  if ( v30 != v17 )
    ExRaiseStatus(-1073741811);
  v20 = a3;
  v34 = (__int64 *)a3;
  v21 = v14;
  v39 = v14;
  v22 = 0;
  v36 = 0;
  for ( j = 0; ; ++j )
  {
    v31 = j;
    if ( j >= v17 )
      break;
    if ( *(__int64 *)v20 < 0 )
    {
      if ( v22 >= v17 )
        ExRaiseStatus(-1073741811);
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v21[4] = v20[4];
      v21[5] = v20[5];
      v21[6] = v20[6];
      v21[7] = v20[7];
      v21[8] = v20[8];
      v21[9] = v20[9];
      v21[10] = v20[10];
      v21[11] = v20[11];
      v21[12] = v20[12];
      *((_QWORD *)v21 + 26) = *((_QWORD *)v20 + 26);
      if ( *(__int64 *)v21 >= 0 )
        ExRaiseStatus(-1073741790);
      v36 = ++v22;
      v21 = (_OWORD *)((char *)v21 + 216);
      v39 = v21;
    }
    v20 = (_OWORD *)((char *)v20 + 216);
    v34 = (__int64 *)v20;
  }
  if ( v22 != v17 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v25, v24, v26) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v37 = *(_QWORD *)a4;
    v38 = *(_DWORD *)(a4 + 8);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v13 = -1073741790;
    goto LABEL_45;
  }
  if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v37) )
  {
    v27 = 3223192375LL;
    v13 = -1071774921;
LABEL_46:
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v37) )
      v13 = v27;
    goto LABEL_49;
  }
  v13 = DrvFunctionalizeDisplayConfig((unsigned int)&v30, (_DWORD)v14, a1, v41, (__int64)v32);
  if ( v13 == -2147483643 )
    v13 = -1073741789;
  v28 = v30;
  memmove((void *)a3, v14, 216LL * v30);
  *a2 = v28;
  v11 = Address;
  *(_DWORD *)Address = v32[0];
  if ( v13 < 0 )
  {
LABEL_45:
    v27 = 3223192375LL;
    goto LABEL_46;
  }
LABEL_49:
  if ( v14 )
  {
    Win32FreePool((char *)v14);
    v33 = 0LL;
  }
  UserSessionSwitchLeaveCrit((__int64)v11, v10, v12, v27);
  return (unsigned int)v13;
}
