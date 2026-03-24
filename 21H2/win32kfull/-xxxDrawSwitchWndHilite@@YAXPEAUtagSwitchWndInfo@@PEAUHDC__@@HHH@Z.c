/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0169284
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F321C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F38D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C0033FBC (RtlInitLargeUnicodeString.c)
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     GetDPIServerInfo @ 0x1C00E0E18 (GetDPIServerInfo.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00FD288 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00FD3AC (TextCopy.c)
 *     DrawFrame @ 0x1C015A968 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C025EBF0 (DrawTextExWorker.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // r14d
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 LowLimit[2]; // [rsp+78h] [rbp-88h] BYREF
  RECT v29; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-50h] BYREF
  int v32[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v34[256]; // [rsp+E0h] [rbp-20h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  }
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  v24[0] = v10 * a3 + *((_DWORD *)a1 + 21);
  v24[1] = v11;
  v24[2] = v24[0] + v10;
  v24[3] = v11 + v10;
  DrawFrame(DCEx, v24, 2, a5 != 0 ? 104 : 120);
  v12 = 0;
  if ( a5 )
  {
    LowLimit[0] = 0LL;
    v13 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    GetDPIServerInfo(v15);
    v16 = GreSelectFont(DCEx);
    v17 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LowLimit[1] = v16;
    v18 = HMValidateHandleNoSecure(*v17, 1);
    v19 = v18;
    if ( v18 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 40) + 184LL) )
      {
        v31 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v18 + 184),
                    (struct _LARGE_UNICODE_STRING *)&v31);
        v12 = TextCopy((__int64)StrName, (char *)v34, 0x100u);
      }
      else
      {
        v34[0] = 0;
      }
      v29 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v29, *(HBRUSH *)(gpsi + 4816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 760LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 488) & 1) != 0 )
      {
        v25 = 20LL;
        v27 = 0LL;
        v26 = 0;
        DrawTextExWorker(DCEx, v34, v12, &v29, 0x8820u, (struct tagDRAWTEXTPARAMS *)&v25);
      }
      else
      {
        v30[2] = 0LL;
        *(_OWORD *)v32 = 0LL;
        v33 = 0LL;
        RtlInitLargeUnicodeString((__int64)&v33, (__int64)v34);
        *(RECT *)v32 = v29;
        v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v30[0] = *(_QWORD *)(v22 + 416);
        *(_QWORD *)(v22 + 416) = v30;
        v30[1] = v19;
        HMLockObject(v19);
        xxxSendTransformableMessageTimeout(
          v19,
          0x8Cu,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)v32,
          2u,
          0x64u,
          (__int64 *)LowLimit,
          1,
          0);
        ThreadUnlock1(v23);
      }
    }
    GreSelectFont(DCEx);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor(DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
