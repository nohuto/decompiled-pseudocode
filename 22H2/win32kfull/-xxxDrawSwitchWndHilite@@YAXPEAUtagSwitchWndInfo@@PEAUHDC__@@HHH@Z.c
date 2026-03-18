/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C013BB08
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01C961C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01C9CAC (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GreSetBkColor @ 0x1C0027760 (GreSetBkColor.c)
 *     GreSetTextColor @ 0x1C0027D58 (GreSetTextColor.c)
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 *     RtlInitLargeUnicodeString @ 0x1C0065A48 (RtlInitLargeUnicodeString.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0095A30 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C0095B3C (TextCopy.c)
 *     GetDPIServerInfo @ 0x1C00AB4C8 (GetDPIServerInfo.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     GreSelectFont @ 0x1C011BD80 (GreSelectFont.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     DrawFrame @ 0x1C024C638 (DrawFrame.c)
 *     DrawTextExWorker @ 0x1C024D1FC (DrawTextExWorker.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // esi
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  __int64 v15; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 *v20; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  RECT v22; // xmm6
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagTHREADINFO *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  int v33; // [rsp+78h] [rbp-90h]
  int v34; // [rsp+7Ch] [rbp-8Ch]
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  RECT v36; // [rsp+88h] [rbp-80h] BYREF
  __int128 v37; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v38[256]; // [rsp+A8h] [rbp-60h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
    v9 = 1;
  }
  v10 = *((_DWORD *)a1 + 29);
  v11 = v10 * a4 + *((_DWORD *)a1 + 22);
  LODWORD(v32) = v10 * a3 + *((_DWORD *)a1 + 21);
  HIDWORD(v32) = v11;
  v33 = v32 + v10;
  v34 = v11 + v10;
  DrawFrame(DCEx);
  v12 = 0;
  if ( a5 )
  {
    v35 = 0LL;
    v13 = GreSetTextColor((__int64)DCEx, *(_DWORD *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    DPIServerInfo = GetDPIServerInfo(v15);
    v17 = GreSelectFont(DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v18 = (_QWORD *)*((_QWORD *)a1 + 4);
    v32 = v17;
    v19 = HMValidateHandleNoSecure(*v18, 1);
    v20 = (unsigned __int64 *)v19;
    if ( v19 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 40) + 184LL) )
      {
        *(_OWORD *)v31 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v19 + 184),
                    (struct _LARGE_UNICODE_STRING *)v31);
        v12 = TextCopy((__int64)StrName, (char *)v38, 0x100u);
      }
      else
      {
        v38[0] = 0;
      }
      v22 = *(RECT *)((char *)a1 + 92);
      v36 = v22;
      FillRect(DCEx, &v36, *(HBRUSH *)(gpsi + 4816LL));
      v27 = PtiCurrentShared(v24, v23, v25, v26);
      if ( (*(_DWORD *)(*((_QWORD *)v27 + 53) + 752LL) & 0xF) == 0 || (*((_DWORD *)v27 + 122) & 1) != 0 )
      {
        *(_QWORD *)v31 = 20LL;
        *(_QWORD *)&v31[12] = 0LL;
        *(_DWORD *)&v31[8] = 0;
        DrawTextExWorker(DCEx, v38, v12, &v36, 0x8820u, (struct tagDRAWTEXTPARAMS *)v31);
      }
      else
      {
        memset(v31, 0, sizeof(v31));
        v36 = 0LL;
        v37 = 0LL;
        RtlInitLargeUnicodeString((__int64)&v37, (__int64)v38);
        v36 = v22;
        ThreadLock(v20, v31);
        xxxSendTransformableMessageTimeout(
          v20,
          0x8Cu,
          (__int64)DCEx,
          (__int128 *)&v36.left,
          2u,
          0x64u,
          (unsigned __int64 *)&v35,
          1,
          0);
        ThreadUnlock1(v29, v28, v30);
      }
    }
    GreSelectFont(DCEx, v32);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor((__int64)DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
