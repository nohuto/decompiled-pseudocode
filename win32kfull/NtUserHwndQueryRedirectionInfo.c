__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, __int64 a2, __int128 *a3, ULONG64 a4)
{
  __int128 *v5; // r13
  int v6; // r15d
  int DxSharedSurface; // esi
  int v9; // edi
  __int64 v10; // rax
  ULONG64 v11; // rcx
  NTSTATUS v12; // ecx
  struct tagWND *StyleWindow; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagWND *v16; // r10
  unsigned int *v17; // rax
  unsigned int v18; // r12d
  __int64 CurrentProcess; // rax
  size_t v20; // rbx
  int v21; // r14d
  __int128 *v22; // rax
  __int128 *v23; // rax
  int v24; // r15d
  int HwndUpdateIds; // eax
  struct tagWND *v26; // r15
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
  v5 = a3;
  v6 = a2;
  DxSharedSurface = -1073741811;
  Src = 0LL;
  v38 = 0LL;
  v9 = 0;
  v33 = 0LL;
  v34[0] = 0LL;
  v32 = 0LL;
  v31 = 0;
  v29 = 0;
  EnterSharedCrit(a1, a2, a3);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_54;
  if ( v6 >= 5 )
  {
LABEL_3:
    v12 = -1073741821;
LABEL_53:
    UserSetLastStatus(v12, 1);
    goto LABEL_54;
  }
  StyleWindow = (struct tagWND *)GetStyleWindow(v10, 2568);
  v16 = StyleWindow;
  v35 = StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*((_QWORD *)StyleWindow + 5) + 42LL) & 0x2FFF) == 0x29D )
    goto LABEL_52;
  v17 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v17 = (unsigned int *)MmUserProbeAddress;
  v18 = *v17;
  v30 = *v17;
  if ( v6 )
  {
    v11 = (unsigned int)(v6 - 1);
    if ( v6 == 1 )
    {
      if ( !v5 )
        goto LABEL_52;
      v20 = 16LL;
      if ( v18 < 0x10 )
        goto LABEL_16;
      v21 = 16;
      v30 = 16;
    }
    else
    {
      v11 = (unsigned int)(v6 - 2);
      if ( v6 == 2 )
      {
        if ( !v5 )
          goto LABEL_52;
        v21 = 4;
        if ( v18 < 4 )
          goto LABEL_16;
        v30 = 4;
        v20 = 4LL;
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_3;
        CurrentProcess = PsGetCurrentProcess(v11, v14, v15);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v12 = -1073741790;
          goto LABEL_53;
        }
        if ( !v5 )
          goto LABEL_52;
        v20 = 16LL;
        if ( v18 < 0x10 )
        {
LABEL_16:
          v12 = -1073741306;
          goto LABEL_53;
        }
        v21 = 16;
        v30 = 16;
        v11 = MmUserProbeAddress;
        v22 = v5;
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v22 = (__int128 *)MmUserProbeAddress;
        Src = *v22;
        v16 = v35;
      }
    }
  }
  else
  {
    if ( !v5 )
      goto LABEL_52;
    v20 = 32LL;
    if ( v18 < 0x20 )
      goto LABEL_16;
    v21 = 32;
    v30 = 32;
    v11 = MmUserProbeAddress;
    v23 = v5;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v23 = (__int128 *)MmUserProbeAddress;
    Src = *v23;
    v38 = v23[1];
    v29 = DWORD1(Src);
    if ( (DWORD1(Src) & 0xFFFFFFFB) != 0 )
      goto LABEL_52;
  }
  if ( !v6 )
  {
    v32 = v38;
    DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v16, v34, &v32, &v31, &v29, &v33);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v26 = v35;
      DxSharedSurface = RecreateRedirectionBitmap((void **)v35, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_52;
      DxSharedSurface = GreGetDxSharedSurface(*(HWND *)v26, v34, &v32, &v31, &v29, &v33);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src = __PAIR64__(v29, v31);
      *((_QWORD *)&Src + 1) = v33;
      *(_QWORD *)&v38 = v32;
      *((_QWORD *)&v38 + 1) = v34[0];
      goto LABEL_46;
    }
LABEL_52:
    v12 = DxSharedSurface;
    goto LABEL_53;
  }
  v24 = v6 - 1;
  if ( v24 )
  {
    if ( v24 != 1 )
      goto LABEL_46;
    HwndUpdateIds = GreGetDxSharedSurface(*(HWND *)v16, v34, &v32, &v31, &v29, &v33);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_36:
      LODWORD(Src) = v29;
      goto LABEL_46;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_36;
LABEL_38:
    v12 = HwndUpdateIds;
    goto LABEL_53;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*(HWND *)v16);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_38;
LABEL_46:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    memmove(v5, &Src, v20);
    v11 = MmUserProbeAddress;
    v27 = (_DWORD *)v36;
    if ( v36 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v21;
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
