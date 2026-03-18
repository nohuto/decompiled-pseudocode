/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C016CB60
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C00ED940 (GreGetDxSharedSurface.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     GreGetHwndUpdateIds @ 0x1C026D470 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, __int64 a2, __int128 *a3, ULONG64 a4)
{
  __int128 *v5; // r13
  int v6; // r15d
  int DxSharedSurface; // esi
  int v9; // edi
  __int64 v10; // rax
  ULONG64 v11; // rcx
  NTSTATUS v12; // ecx
  HWND *StyleWindow; // rax
  __int64 v14; // rdx
  HWND *v15; // r10
  unsigned int *v16; // rax
  unsigned int v17; // r12d
  __int64 CurrentProcess; // rax
  size_t v19; // rbx
  int v20; // r14d
  __int128 *v21; // rax
  __int128 *v22; // rax
  int v23; // r15d
  int HwndUpdateIds; // eax
  HWND *v25; // r15
  _DWORD *v26; // rax
  unsigned int v28; // [rsp+30h] [rbp-C8h] BYREF
  int v29; // [rsp+34h] [rbp-C4h]
  unsigned int v30; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct tagWND *v34; // [rsp+60h] [rbp-98h]
  ULONG64 v35; // [rsp+70h] [rbp-88h]
  __int128 Src; // [rsp+98h] [rbp-60h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-50h]

  v35 = a4;
  v5 = a3;
  v6 = a2;
  DxSharedSurface = -1073741811;
  Src = 0LL;
  v37 = 0LL;
  v9 = 0;
  v32 = 0LL;
  v33[0] = 0LL;
  v31 = 0LL;
  v30 = 0;
  v28 = 0;
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
  StyleWindow = (HWND *)GetStyleWindow(v10, 2568);
  v15 = StyleWindow;
  v34 = (struct tagWND *)StyleWindow;
  if ( !StyleWindow || (*((_WORD *)StyleWindow[5] + 21) & 0x2FFF) == 0x29D )
    goto LABEL_52;
  v16 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v16 = (unsigned int *)MmUserProbeAddress;
  v17 = *v16;
  v29 = *v16;
  if ( v6 )
  {
    v11 = (unsigned int)(v6 - 1);
    if ( v6 == 1 )
    {
      if ( !v5 )
        goto LABEL_52;
      v19 = 16LL;
      if ( v17 < 0x10 )
        goto LABEL_16;
      v20 = 16;
      v29 = 16;
    }
    else
    {
      v11 = (unsigned int)(v6 - 2);
      if ( v6 == 2 )
      {
        if ( !v5 )
          goto LABEL_52;
        v20 = 4;
        if ( v17 < 4 )
          goto LABEL_16;
        v29 = 4;
        v19 = 4LL;
      }
      else
      {
        if ( v6 != 3 )
          goto LABEL_3;
        CurrentProcess = PsGetCurrentProcess(v11, v14);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v12 = -1073741790;
          goto LABEL_53;
        }
        if ( !v5 )
          goto LABEL_52;
        v19 = 16LL;
        if ( v17 < 0x10 )
        {
LABEL_16:
          v12 = -1073741306;
          goto LABEL_53;
        }
        v20 = 16;
        v29 = 16;
        v11 = MmUserProbeAddress;
        v21 = v5;
        if ( (unsigned __int64)v5 >= MmUserProbeAddress )
          v21 = (__int128 *)MmUserProbeAddress;
        Src = *v21;
        v15 = (HWND *)v34;
      }
    }
  }
  else
  {
    if ( !v5 )
      goto LABEL_52;
    v19 = 32LL;
    if ( v17 < 0x20 )
      goto LABEL_16;
    v20 = 32;
    v29 = 32;
    v11 = MmUserProbeAddress;
    v22 = v5;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v22 = (__int128 *)MmUserProbeAddress;
    Src = *v22;
    v37 = v22[1];
    v28 = DWORD1(Src);
    if ( (DWORD1(Src) & 0xFFFFFFFB) != 0 )
      goto LABEL_52;
  }
  if ( !v6 )
  {
    v31 = v37;
    DxSharedSurface = GreGetDxSharedSurface(*v15, v33, &v31, &v30, &v28, &v32);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v25 = (HWND *)v34;
      DxSharedSurface = RecreateRedirectionBitmap(v34, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_52;
      DxSharedSurface = GreGetDxSharedSurface(*v25, v33, &v31, &v30, &v28, &v32);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src = __PAIR64__(v28, v30);
      *((_QWORD *)&Src + 1) = v32;
      *(_QWORD *)&v37 = v31;
      *((_QWORD *)&v37 + 1) = v33[0];
      goto LABEL_46;
    }
LABEL_52:
    v12 = DxSharedSurface;
    goto LABEL_53;
  }
  v23 = v6 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
      goto LABEL_46;
    HwndUpdateIds = GreGetDxSharedSurface(*v15, v33, &v31, &v30, &v28, &v32);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_36:
      LODWORD(Src) = v28;
      goto LABEL_46;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_36;
LABEL_38:
    v12 = HwndUpdateIds;
    goto LABEL_53;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*v15);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_38;
LABEL_46:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    memmove(v5, &Src, v19);
    v11 = MmUserProbeAddress;
    v26 = (_DWORD *)v35;
    if ( v35 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = v20;
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
