/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180039750
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180039640 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dz_EventWriteTransfer @ 0x1801F6678 (McTemplateU0dz_EventWriteTransfer.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  unsigned __int128 v2; // rax
  __int64 v3; // rcx
  HWND v4; // rbp
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  wchar_t *v7; // rax
  const unsigned __int16 *v8; // r14
  unsigned __int64 v9; // rsi
  LPARAM lParam; // [rsp+40h] [rbp-438h] BYREF
  wchar_t Buffer[260]; // [rsp+48h] [rbp-430h] BYREF
  unsigned __int16 v12[256]; // [rsp+250h] [rbp-228h] BYREF

  v4 = (HWND)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
  if ( v4 )
  {
    v5 = (void *)*((_QWORD *)this + 8);
    if ( v5 )
      CoTaskMemFree(v5);
    v6 = -1LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    v12[0] = 0;
    memset_0(&lParam, 0, 0x208uLL);
    if ( (int)StringCchPrintfW(Buffer, 0xFFuLL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)v4) >= 0 )
    {
      v3 = 255LL;
      v7 = Buffer;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v3;
      }
      while ( v3 );
      lParam = v3 ? 255 - v3 : 0LL;
      if ( v3 )
      {
        if ( !EnumPropsExW(v4, ApplicationViewTitleEnum, (LPARAM)&lParam)
          && (int)StringCchCopyW(v12, 0xFFuLL, Buffer) >= 0 )
        {
          v8 = &v12[lParam];
          do
            ++v6;
          while ( v8[v6] );
          v9 = v6 + 1;
          *((_QWORD *)this + 8) = 0LL;
          if ( v6 + 1 >= v6 )
          {
            v2 = v9 * (unsigned __int128)2uLL;
            if ( is_mul_ok(v9, 2uLL) )
            {
              *(_QWORD *)&v2 = CoTaskMemAlloc(2 * v9);
              *((_QWORD *)this + 8) = v2;
              if ( (_QWORD)v2 )
                StringCchCopyNExW((char *)v2, v6 + 1, v8, v6);
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dz_EventWriteTransfer(v3, *((_QWORD *)&v2 + 1), (unsigned int)v4, *((_QWORD *)this + 8));
}
