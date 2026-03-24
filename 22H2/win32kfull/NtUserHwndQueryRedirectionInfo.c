/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C01FCC40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     UserSetLastStatus @ 0x1C00EC46C (UserSetLastStatus.c)
 *     RecreateRedirectionBitmap @ 0x1C00F1598 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C0118B5C (GreGetDxSharedSurface.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     GreGetHwndUpdateIds @ 0x1C026F170 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, __int128 *a3, ULONG64 a4)
{
  int DxSharedSurface; // esi
  int v9; // edi
  __int64 v10; // rax
  ULONG64 v11; // rcx
  NTSTATUS v12; // ecx
  __int64 StyleWindow; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  HWND *v16; // r10
  unsigned int *v17; // rax
  unsigned int v18; // r12d
  __int64 CurrentProcess; // rax
  size_t v20; // rbx
  int v21; // r14d
  __int128 *v22; // rax
  __int128 *v23; // rax
  int v24; // r15d
  int HwndUpdateIds; // eax
  HWND *v26; // r15
  _DWORD *v27; // rax
  unsigned int v29; // [rsp+30h] [rbp-C8h] BYREF
  int v30; // [rsp+34h] [rbp-C4h]
  unsigned int v31; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct tagWND *v35; // [rsp+60h] [rbp-98h]
  ULONG64 v36; // [rsp+70h] [rbp-88h]
  __int128 Src; // [rsp+98h] [rbp-60h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-50h]

  v36 = a4;
  DxSharedSurface = -1073741811;
  Src = 0LL;
  v38 = 0LL;
  v9 = 0;
  v33 = 0LL;
  v34[0] = 0LL;
  v32 = 0LL;
  v31 = 0;
  v29 = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_56;
  if ( a2 >= 5 )
  {
    v12 = -1073741821;
LABEL_55:
    UserSetLastStatus(v12, 1);
    goto LABEL_56;
  }
  StyleWindow = GetStyleWindow(v10, 2568);
  v16 = (HWND *)StyleWindow;
  v35 = (struct tagWND *)StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    v12 = -1073741811;
    goto LABEL_55;
  }
  v17 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v17 = (unsigned int *)MmUserProbeAddress;
  v18 = *v17;
  v30 = *v17;
  if ( a2 )
  {
    v11 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_16;
      v20 = 16LL;
      if ( v18 < 0x10 )
        goto LABEL_18;
      v21 = 16;
      v30 = 16;
    }
    else
    {
      v11 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_16;
        v21 = 4;
        if ( v18 < 4 )
          goto LABEL_18;
        v30 = 4;
        v20 = 4LL;
      }
      else
      {
        if ( a2 != 3 )
        {
          v12 = -1073741821;
          goto LABEL_55;
        }
        CurrentProcess = PsGetCurrentProcess(v11, v14, v15);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v12 = -1073741790;
          goto LABEL_55;
        }
        if ( !a3 )
        {
LABEL_16:
          v12 = DxSharedSurface;
          goto LABEL_55;
        }
        v20 = 16LL;
        if ( v18 < 0x10 )
        {
LABEL_18:
          v12 = -1073741306;
          goto LABEL_55;
        }
        v21 = 16;
        v30 = 16;
        v11 = MmUserProbeAddress;
        v22 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v22 = (__int128 *)MmUserProbeAddress;
        Src = *v22;
        v16 = (HWND *)v35;
      }
    }
  }
  else
  {
    if ( !a3 )
      goto LABEL_16;
    v20 = 32LL;
    if ( v18 < 0x20 )
      goto LABEL_18;
    v21 = 32;
    v30 = 32;
    v11 = MmUserProbeAddress;
    v23 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v23 = (__int128 *)MmUserProbeAddress;
    Src = *v23;
    v38 = v23[1];
    v29 = DWORD1(Src);
    if ( (DWORD1(Src) & 0xFFFFFFFB) != 0 )
      goto LABEL_16;
  }
  if ( !a2 )
  {
    v32 = v38;
    DxSharedSurface = GreGetDxSharedSurface(*v16, v34, &v32, &v31, &v29, &v33);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v26 = (HWND *)v35;
      DxSharedSurface = RecreateRedirectionBitmap((void **)v35, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_16;
      DxSharedSurface = GreGetDxSharedSurface(*v26, v34, &v32, &v31, &v29, &v33);
    }
    if ( DxSharedSurface < 0 )
      goto LABEL_16;
    *(_QWORD *)&Src = __PAIR64__(v29, v31);
    *((_QWORD *)&Src + 1) = v33;
    *(_QWORD *)&v38 = v32;
    *((_QWORD *)&v38 + 1) = v34[0];
    goto LABEL_48;
  }
  v24 = a2 - 1;
  if ( v24 )
  {
    if ( v24 != 1 )
      goto LABEL_48;
    HwndUpdateIds = GreGetDxSharedSurface(*v16, v34, &v32, &v31, &v29, &v33);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_38:
      LODWORD(Src) = v29;
      goto LABEL_48;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_38;
LABEL_40:
    v12 = HwndUpdateIds;
    goto LABEL_55;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*v16);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_40;
LABEL_48:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    memmove(a3, &Src, v20);
    v11 = MmUserProbeAddress;
    v27 = (_DWORD *)v36;
    if ( v36 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v21;
  }
LABEL_56:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
