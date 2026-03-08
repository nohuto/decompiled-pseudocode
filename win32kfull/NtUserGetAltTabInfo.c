/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01D0BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _GetAltTabInfo @ 0x1C01CB224 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, __int64 a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  int v8; // esi
  __int64 v10; // rcx
  struct tagWND *v11; // r14
  int AltTabInfo; // esi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  SIZE_T v15; // rdx
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v18; // rax
  unsigned __int16 v19; // di
  __int64 v20; // rcx
  unsigned __int16 v21; // dx
  INT v22; // ebx
  __int128 v24; // [rsp+68h] [rbp-60h] BYREF
  INT a[4]; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+88h] [rbp-40h] BYREF

  v8 = a2;
  v24 = 0LL;
  *(_OWORD *)a = 0LL;
  v26 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    v11 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v11 )
    {
      AltTabInfo = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 || v11 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v10) )
      v13 = 0LL;
    else
      v13 = 3LL;
    if ( (v13 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[39] = v14[39];
    v15 = a5;
    if ( !a6 )
      v15 = 2LL * a5;
    ProbeForWrite(a4, v15, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      LODWORD(v24) = 40;
      AltTabInfo = GetAltTabInfo(v8, (__int64)&v24, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16);
      if ( (unsigned __int8)ShouldVirtualizeWindowRect(v11, CurrentThreadDpiAwarenessContext) )
      {
        v18 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v11 + 5) + 256LL));
        if ( v18 )
        {
          v19 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
          v20 = v18 + 40;
          if ( !v19 )
            v19 = *(_WORD *)(*(_QWORD *)v20 + 60LL);
          v21 = (*(_DWORD *)(*((_QWORD *)v11 + 5) + 288LL) >> 8) & 0x1FF;
          if ( !v21 )
            v21 = *(_WORD *)(*(_QWORD *)v20 + 60LL);
          v22 = v21;
          a[2] = EngMulDiv(a[2], v19, v21);
          a[3] = EngMulDiv(a[3], v19, v22);
        }
        TransformPointBetweenCoordinateSpaces(&v26, &v26, 0LL, v11);
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = v24;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)a;
        *(_QWORD *)(a3 + 32) = v26;
      }
    }
    else
    {
      UserSetLastError(87);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400);
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v10);
  return AltTabInfo;
}
