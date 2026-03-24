/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C0133430
 * Callers:
 *     <none>
 * Callees:
 *     DrvSampleDisplayState @ 0x1C001B860 (DrvSampleDisplayState.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C001DD24 (_QdcSdcTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0042FA8 (CheckAccessEx.c)
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0075E24 (LogDiagSDC.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // r15
  signed int v9; // ebx
  char *v10; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v11; // r8
  __int64 v12; // r9
  int v13; // esi
  unsigned int v14; // r14d
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rsi
  unsigned int v20; // esi
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v27; // [rsp+58h] [rbp-140h]
  unsigned int v28; // [rsp+70h] [rbp-128h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v29; // [rsp+78h] [rbp-120h]
  __int64 v30; // [rsp+88h] [rbp-110h]
  int v31; // [rsp+90h] [rbp-108h]
  __int64 v32; // [rsp+B8h] [rbp-E0h] BYREF
  int v33; // [rsp+C0h] [rbp-D8h]
  int v34[2]; // [rsp+C8h] [rbp-D0h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v35; // [rsp+D0h] [rbp-C8h]
  __int64 v36; // [rsp+E0h] [rbp-B8h]
  __int64 v37; // [rsp+E8h] [rbp-B0h]
  __int128 v38; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+100h] [rbp-98h]
  _QWORD v40[10]; // [rsp+110h] [rbp-88h] BYREF

  v7 = a1;
  v37 = a5;
  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 29;
  LOBYTE(v40[6]) = -1;
  v34[0] = 0x2000;
  v34[1] = -1;
  v29 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v31 = 0;
  v36 = MEMORY[0xFFFFF78000000320];
  v8 = v36 * KeQueryTimeIncrement();
  v27 = v8;
  v9 = -1073741811;
  EnterCrit(0, 1);
  if ( !gbVideoInitialized )
  {
    v9 = -1073741823;
    v13 = 0x80000000;
LABEL_3:
    v14 = a3;
    v15 = v8;
LABEL_62:
    LogDiagSDC(v28, (__int64)v29, v14, v9, 0, v13, v15, 0);
    goto LABEL_63;
  }
  v16 = (unsigned __int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v10 = *(char **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v17 = *((_DWORD *)v10 + 6) & 0x10;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v34, 0) )
  {
    v9 = -1073741790;
    v13 = -2147483647;
    v14 = a3;
    v15 = v8;
  }
  else
  {
    if ( (unsigned int)v7 > 0x400 )
    {
      v13 = -2147483646;
      goto LABEL_3;
    }
    v35 = 0LL;
    v18 = 0;
    if ( (_DWORD)v7 )
    {
      v19 = 200 * v7;
      if ( 200 * v7 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + a2 > MmUserProbeAddress || v19 + a2 < a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v20 = 0;
      v21 = 0;
      v10 = (char *)a2;
      while ( v21 < (unsigned int)v7 )
      {
        if ( *(__int64 *)v10 < 0 )
          ++v20;
        ++v21;
        v10 += 200;
      }
      if ( v20 )
      {
        v22 = Win32AllocPoolWithQuota(200LL * v20, 0x63447355u);
        v29 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22;
        if ( !v22 )
          ExRaiseStatus(-1073741801);
        if ( qword_1C0256FC0 )
          qword_1C0256FC0(v22, &v38, Win32FreePool);
      }
      v11 = v29;
      v35 = v29;
      v16 = 0LL;
      v12 = 128LL;
      while ( (unsigned int)v16 < (unsigned int)v7 )
      {
        if ( *(__int64 *)a2 < 0 )
        {
          if ( v18 >= v20 )
          {
            v13 = -2147483645;
            v14 = a3;
            v15 = v27;
            goto LABEL_61;
          }
          *(_OWORD *)v11 = *(_OWORD *)a2;
          *((_OWORD *)v11 + 1) = *(_OWORD *)(a2 + 16);
          *((_OWORD *)v11 + 2) = *(_OWORD *)(a2 + 32);
          *((_OWORD *)v11 + 3) = *(_OWORD *)(a2 + 48);
          *((_OWORD *)v11 + 4) = *(_OWORD *)(a2 + 64);
          *((_OWORD *)v11 + 5) = *(_OWORD *)(a2 + 80);
          *((_OWORD *)v11 + 6) = *(_OWORD *)(a2 + 96);
          v10 = (char *)v11 + 128;
          *((_OWORD *)v11 + 7) = *(_OWORD *)(a2 + 112);
          *((_OWORD *)v11 + 8) = *(_OWORD *)(a2 + 128);
          *((_OWORD *)v11 + 9) = *(_OWORD *)(a2 + 144);
          *((_OWORD *)v11 + 10) = *(_OWORD *)(a2 + 160);
          *((_OWORD *)v11 + 11) = *(_OWORD *)(a2 + 176);
          *((_QWORD *)v11 + 24) = *(_QWORD *)(a2 + 192);
          if ( *(__int64 *)v11 >= 0 )
          {
            v9 = -1073741790;
            v13 = -2147483644;
            v14 = a3;
            v15 = v27;
            goto LABEL_61;
          }
          ++v18;
          v11 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v11 + 200);
          v35 = v11;
        }
        v16 = (unsigned int)(v16 + 1);
        a2 += 200LL;
      }
      if ( v18 != v20 )
      {
        v13 = -2147483645;
        v14 = a3;
        v15 = v27;
        goto LABEL_61;
      }
    }
    v28 = v18;
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v30 = *(_QWORD *)a4;
      v31 = *(_DWORD *)(a4 + 8);
    }
    if ( gfSwitchInProgress )
    {
      v9 = -1073741823;
      v13 = -2147483643;
LABEL_48:
      v14 = a3;
      v15 = v27;
      goto LABEL_62;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession() )
    {
      v9 = -1073741790;
      v13 = -2147483642;
      goto LABEL_48;
    }
    if ( a4 )
    {
      v32 = 0LL;
      v33 = 0;
      DrvSampleDisplayState(&v32);
      if ( v33 != v31 || v32 != v30 )
      {
        v9 = -1071774921;
        v13 = -2147483641;
        goto LABEL_48;
      }
    }
    v13 = 18;
    v14 = a3;
    v23 = xxxUserSetDisplayConfig(v18, v29, a3, 0, 0LL, 1, v37, 0LL, 0LL, (__int64)v40);
    v9 = v23;
    if ( v23 == -2147483643 )
    {
      v9 = -1073741789;
    }
    else if ( v23 != -1073741789 && (a3 & 0x10000) == 0 )
    {
      if ( v23 == -1071774970 )
        v9 = -2147023286;
      else
        v9 = QdcSdcTranslateStatusDefault(v23);
    }
    v15 = v27;
  }
LABEL_61:
  if ( v13 != 18 )
    goto LABEL_62;
LABEL_63:
  if ( v9 >= 0 )
  {
    v24 = qword_1C0257C60 ? qword_1C0257C60(v10, v16, v11, v12) : -1073741637;
    if ( v24 >= 0 && qword_1C0257C68 )
      qword_1C0257C68();
  }
  if ( v29 && qword_1C02570E8 )
    qword_1C02570E8(&v38);
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v9;
}
