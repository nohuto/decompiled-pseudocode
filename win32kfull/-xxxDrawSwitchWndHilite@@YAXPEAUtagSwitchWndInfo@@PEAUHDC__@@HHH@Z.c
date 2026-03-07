void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // esi
  int v10; // r8d
  int v11; // ecx
  int v12; // r15d
  unsigned int v13; // r12d
  int v14; // r13d
  __int64 v15; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  struct tagWND *v20; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  RECT v22; // xmm6
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _BYTE v28[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  int v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+7Ch] [rbp-8Ch]
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  RECT v33; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v35[256]; // [rsp+A8h] [rbp-60h] BYREF

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
  LODWORD(v29) = v10 * a3 + *((_DWORD *)a1 + 21);
  HIDWORD(v29) = v11;
  v30 = v29 + v10;
  v31 = v11 + v10;
  DrawFrame(DCEx);
  v12 = 0;
  if ( a5 )
  {
    v32 = 0LL;
    v13 = GreSetTextColor((__int64)DCEx, *(unsigned int *)(gpsi + 4640LL));
    v14 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 4628LL));
    DPIServerInfo = GetDPIServerInfo(v15);
    v17 = GreSelectFont(DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v18 = (_QWORD *)*((_QWORD *)a1 + 4);
    v29 = v17;
    v19 = HMValidateHandleNoSecure(*v18, 1);
    v20 = (struct tagWND *)v19;
    if ( v19 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 40) + 184LL) )
      {
        *(_OWORD *)v28 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v19 + 184),
                    (struct _LARGE_UNICODE_STRING *)v28);
        v12 = TextCopy((__int64)StrName, (char *)v35, 0x100u);
      }
      else
      {
        v35[0] = 0;
      }
      v22 = *(RECT *)((char *)a1 + 92);
      v33 = v22;
      FillRect(DCEx, &v33, *(HBRUSH *)(gpsi + 4816LL));
      v24 = PtiCurrentShared(v23);
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 53) + 752LL) & 0xF) == 0 || (*((_DWORD *)v24 + 122) & 1) != 0 )
      {
        *(_QWORD *)v28 = 20LL;
        *(_QWORD *)&v28[12] = 0LL;
        *(_DWORD *)&v28[8] = 0;
        DrawTextExWorker(DCEx, v35, v12, &v33, 0x8820u, (struct tagDRAWTEXTPARAMS *)v28);
      }
      else
      {
        memset(v28, 0, sizeof(v28));
        v33 = 0LL;
        v34 = 0LL;
        RtlInitLargeUnicodeString((__int64)&v34, (__int64)v35);
        v33 = v22;
        ThreadLock(v20, v28);
        xxxSendTransformableMessageTimeout(
          v20,
          0x8Cu,
          (unsigned __int64)DCEx,
          (__int128 *)&v33.left,
          2u,
          0x64u,
          (unsigned __int64 *)&v32,
          1,
          0);
        ThreadUnlock1(v26, v25, v27);
      }
    }
    GreSelectFont(DCEx, v29);
    GreSetBkColor(DCEx, v14);
    GreSetTextColor((__int64)DCEx, v13);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
