/*
 * XREFs of ?Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z @ 0x1803EC560
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@Z @ 0x1803EC460 (--$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@-$basic_string@_WU-$char_tr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHICON__@@@Z @ 0x1803EC8D8 (-reset@-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$int.c)
 */

__int64 __fastcall SystemTray::TrayNotifyCallback::Notify(HSTRING *this, unsigned int a2, struct tagNOTIFYITEM *a3)
{
  PCWSTR StringRawBuffer; // rax
  char *v6; // rcx
  signed __int64 v7; // rax
  __int64 v8; // r8
  int v9; // edx
  const WCHAR *v10; // r9
  char **v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rbx
  const char *v15; // r9
  HICON v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 <= 1 && *((_QWORD *)a3 + 10) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
    v6 = (char *)*((_QWORD *)a3 + 10);
    v7 = (char *)StringRawBuffer - v6;
    do
    {
      v8 = *(unsigned __int16 *)&v6[v7];
      v9 = *(unsigned __int16 *)v6 - (_DWORD)v8;
      if ( v9 )
        break;
      v6 += 2;
    }
    while ( (_DWORD)v8 );
    if ( !v9 )
    {
      v10 = &szAgent;
      if ( *(_QWORD *)a3 )
        v10 = *(const WCHAR **)a3;
      v11 = (char **)(this + 3);
      v12 = -1LL;
      do
        ++v12;
      while ( v10[v12] );
      if ( v12 > (unsigned __int64)this[6] )
      {
        try
        {
          std::wstring::_Reallocate_for<_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_,wchar_t const *>(
            (__int64)v11,
            v12,
            v8,
            v10);
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x2F,
                                 (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\traynotifycallback.cpp",
                                 v15);
        }
      }
      else
      {
        v13 = (char *)(this + 3);
        if ( (unsigned __int64)this[6] >= 8 )
          v13 = *v11;
        this[5] = (HSTRING)v12;
        v14 = 2 * v12;
        memmove_0(v13, v10, 2 * v12);
        *(_WORD *)&v13[v14] = 0;
      }
      v16 = CopyIcon(*((HICON *)a3 + 2));
      wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::reset(
        this + 7,
        v16);
      *((_OWORD *)this + 4) = *(_OWORD *)((char *)a3 + 40);
      *((_BYTE *)this + 80) = *((_DWORD *)a3 + 22) != 0;
    }
  }
  return 0LL;
}
