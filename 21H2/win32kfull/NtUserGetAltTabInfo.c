/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01F3650
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _GetAltTabInfo @ 0x1C01EE528 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, __int64 a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
{
  int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  SIZE_T v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned __int16 v20; // di
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  INT v23; // ebx
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  __int128 v26; // [rsp+68h] [rbp-70h] BYREF
  INT a[4]; // [rsp+78h] [rbp-60h]
  __int64 v28; // [rsp+88h] [rbp-50h] BYREF

  v8 = a2;
  v26 = 0LL;
  *(_OWORD *)a = 0LL;
  v28 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      AltTabInfo = 0;
      goto LABEL_32;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 || v12 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v11) )
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
      LODWORD(v26) = 40;
      AltTabInfo = GetAltTabInfo(v8, (__int64)&v26, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v18, v17);
      if ( v12 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
        {
          v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
          if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
          {
            v11 = *(_QWORD *)(v12 + 40);
            v20 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
            if ( ((*(_DWORD *)(v11 + 288) >> 8) & 0x1FF) != v20 )
            {
              v21 = ValidateHmonitorNoRip(*(_QWORD *)(v11 + 256));
              if ( v21 )
              {
                if ( !v20 )
                  v20 = *(_WORD *)(*(_QWORD *)(v21 + 40) + 60LL);
                v22 = (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8) & 0x1FF;
                if ( !v22 )
                  v22 = *(_WORD *)(*(_QWORD *)(v21 + 40) + 60LL);
                v23 = v22;
                a[2] = EngMulDiv(a[2], v20, v22);
                a[3] = EngMulDiv(a[3], v20, v23);
              }
              TransformPointBetweenCoordinateSpaces(&v28, &v28, 0LL, v12);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = v26;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)a;
        *(_QWORD *)(a3 + 32) = v28;
      }
    }
    else
    {
      UserSetLastError(87LL, v16);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v10);
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v11);
  return AltTabInfo;
}
