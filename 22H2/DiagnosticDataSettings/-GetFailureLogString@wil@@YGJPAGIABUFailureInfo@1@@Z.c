/*
 * XREFs of ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10003898
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ @ 0x1000382D (-LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 */

int __userpurge wil::GetFailureLogString@<eax>(
        int a1@<edx>,
        wchar_t *a2@<ecx>,
        const unsigned __int16 *a3@<edi>,
        wil *this,
        unsigned __int16 *a5,
        unsigned int a6,
        const struct wil::FailureInfo *a7)
{
  void (__thiscall *v8)(_DWORD, wil *, wchar_t *, int); // edi
  unsigned __int16 *v9; // edi
  wchar_t *v10; // eax
  wchar_t *v11; // ebx
  DWORD CurrentThreadId; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  const unsigned __int16 *v16; // [esp-Ch] [ebp-220h]
  int v17; // [esp-Ch] [ebp-220h]
  int v18; // [esp-8h] [ebp-21Ch]
  const unsigned __int16 *v20; // [esp-4h] [ebp-218h]
  const char *Args; // [esp+Ch] [ebp-208h]
  WCHAR Buffer[256]; // [esp+10h] [ebp-204h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      v8 = (void (__thiscall *)(_DWORD, wil *, wchar_t *, int))g_pfnResultLoggingCallback;
      *a2 = 0;
      if ( !v8 || !wil::details::g_resultMessageCallbackSet || (v8(v8, this, a2, a1), !*a2) )
      {
        Args = (const char *)&word_10001ABA;
        if ( *(_DWORD *)this )
        {
          switch ( *(_DWORD *)this )
          {
            case 1:
              Args = "ReturnHr";
              break;
            case 2:
              Args = "LogHr";
              break;
            case 3:
              Args = "FailFast";
              break;
          }
        }
        else
        {
          Args = "Exception";
        }
        Buffer[0] = 0;
        FormatMessageW(0x1200u, 0, *((_DWORD *)this + 1), 0x400u, Buffer, 0x100u, 0);
        v18 = *((_DWORD *)this + 18);
        v16 = (const unsigned __int16 *)*((_DWORD *)this + 17);
        v9 = &a2[a1];
        if ( *((_DWORD *)this + 7) )
          v10 = wil::details::LogStringPrintf(
                  a2,
                  &a2[a1],
                  (wchar_t *)L"%hs(%u)\\%hs!%p: ",
                  *((const unsigned __int16 **)this + 7),
                  *((_DWORD *)this + 8),
                  v16,
                  v18);
        else
          v10 = wil::details::LogStringPrintf(a2, &a2[a1], (wchar_t *)L"%hs!%p: ", v16, v18);
        v11 = v10;
        if ( *((_DWORD *)this + 19) )
          v11 = wil::details::LogStringPrintf(
                  v10,
                  v9,
                  (wchar_t *)L"(caller: %p) ",
                  *((const unsigned __int16 **)this + 19));
        v17 = *((_DWORD *)this + 1);
        CurrentThreadId = GetCurrentThreadId();
        v13 = wil::details::LogStringPrintf(
                v11,
                v9,
                (wchar_t *)L"%hs(%d) tid(%x) %08X %ws",
                (const unsigned __int16 *)Args,
                *((_DWORD *)this + 9),
                CurrentThreadId,
                v17,
                Buffer);
        if ( *((_DWORD *)this + 3) || *((_DWORD *)this + 10) || *((_DWORD *)this + 6) )
        {
          v14 = wil::details::LogStringPrintf(v13, v9, (wchar_t *)L"    ", a3);
          if ( *((_DWORD *)this + 3) )
            v14 = wil::details::LogStringPrintf(
                    v14,
                    v9,
                    (wchar_t *)L"Msg:[%ws] ",
                    *((const unsigned __int16 **)this + 3));
          if ( *((_DWORD *)this + 10) )
            v14 = wil::details::LogStringPrintf(
                    v14,
                    v9,
                    (wchar_t *)L"CallContext:[%hs] ",
                    *((const unsigned __int16 **)this + 10));
          if ( *((_DWORD *)this + 5) )
          {
            wil::details::LogStringPrintf(
              v14,
              v9,
              (wchar_t *)L"[%hs(%hs)]\n",
              *((const unsigned __int16 **)this + 6),
              *((_DWORD *)this + 5));
          }
          else if ( *((_DWORD *)this + 6) )
          {
            wil::details::LogStringPrintf(v14, v9, (wchar_t *)L"[%hs]\n", *((const unsigned __int16 **)this + 6));
          }
          else
          {
            wil::details::LogStringPrintf(v14, v9, (wchar_t *)L"\n", v20);
          }
        }
      }
    }
  }
  return 0;
}
