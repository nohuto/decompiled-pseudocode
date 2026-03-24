/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F63B4
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00320C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C006A5C0 (NtUserSetWindowPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ScaleDpiValueWithSubpixel @ 0x1C01E590C (ScaleDpiValueWithSubpixel.c)
 *     GetLogicalDpiFromMonitor @ 0x1C01F6638 (GetLogicalDpiFromMonitor.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int16 v15; // ax
  INT v16; // r14d
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r9
  float *v19; // r10
  INT v20; // eax
  INT v21; // r8d
  INT v22; // edx
  INT v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  INT v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdi
  INT LogicalDpiFromMonitor; // ebx
  __int64 v31; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT v33; // edi
  unsigned __int16 v34; // [rsp+20h] [rbp-20h]
  unsigned __int16 v35; // [rsp+22h] [rbp-1Eh]
  INT c; // [rsp+28h] [rbp-18h] BYREF
  int v37; // [rsp+2Ch] [rbp-14h]
  int v38; // [rsp+30h] [rbp-10h]
  int v39; // [rsp+34h] [rbp-Ch]

  if ( (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( !v10 )
    {
      v23 = *a3;
      c = *a2;
      v38 = *a4 + c;
      v24 = v23 + *a5;
      v37 = v23;
      v39 = v24;
      TransformRectBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      v25 = v37;
      v26 = v38 - c;
      *a2 = c;
      *a3 = v25;
      *a4 = v26;
      v27 = v39 - v25;
LABEL_19:
      *a5 = v27;
      return;
    }
    if ( (a6 & 2) == 0 )
    {
      c = *a2;
      v37 = *a3;
      TransformPointBetweenCoordinateSpaces(&c, &c, a1, 0LL);
      *a2 = c;
      *a3 = v37;
      return;
    }
    if ( (a6 & 1) == 0 )
    {
      v28 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      v29 = v28;
      if ( v28 )
      {
        LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                    v28,
                                                    *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v31);
        v33 = (unsigned __int16)GetLogicalDpiFromMonitor(v29, CurrentThreadDpiAwarenessContext);
        v20 = EngMulDiv(*a4, LogicalDpiFromMonitor, v33);
        v21 = v33;
        v22 = LogicalDpiFromMonitor;
LABEL_18:
        *a4 = v20;
        v27 = EngMulDiv(*a5, v22, v21);
        goto LABEL_19;
      }
    }
  }
  else if ( v10 != 3 )
  {
    v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    v12 = v11;
    if ( v11 )
    {
      v34 = GetLogicalDpiFromMonitor(v11, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      v14 = W32GetCurrentThreadDpiAwarenessContext(v13);
      v15 = GetLogicalDpiFromMonitor(v12, v14);
      v35 = v15;
      c = v15;
      if ( (a6 & 2) != 0 )
      {
        v16 = v15;
      }
      else
      {
        *a2 = EngMulDiv(*a2, v34, v15);
        v16 = c;
        *a3 = EngMulDiv(*a3, v34, c);
      }
      if ( (a6 & 1) == 0 )
      {
        if ( (unsigned int)IsChildWindowDpiBoundary(a1) )
        {
          *((_DWORD *)a1 + 58) = 0;
          *((_DWORD *)a1 + 59) = 0;
          ScaleDpiValueWithSubpixel(a4, (float *)a1 + 58, v34, v35);
          ScaleDpiValueWithSubpixel(a5, v19, v17, v18);
          return;
        }
        v20 = EngMulDiv(*a4, v34, v16);
        v21 = v16;
        v22 = v34;
        goto LABEL_18;
      }
    }
  }
}
