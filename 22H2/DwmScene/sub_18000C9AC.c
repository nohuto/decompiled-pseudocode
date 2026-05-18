/*
 * XREFs of sub_18000C9AC @ 0x18000C9AC
 * Callers:
 *     sub_18000D1A4 @ 0x18000D1A4 (sub_18000D1A4.c)
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 *     sub_18011FC6C @ 0x18011FC6C (sub_18011FC6C.c)
 *     sub_18011FD45 @ 0x18011FD45 (sub_18011FD45.c)
 * Callees:
 *     sub_18000D478 @ 0x18000D478 (sub_18000D478.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000C9AC(_WORD *a1, __int64 a2, __int64 a3)
{
  const char *v6; // rsi
  DWORD v7; // r8d
  _WORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( a1 )
    {
      *a1 = 0;
      if ( !qword_180218348 || !byte_180218378 || (qword_180218348(a3, a1, a2), !*a1) )
      {
        v6 = (const char *)&unk_180139BFA;
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v6 = "ReturnHr";
              break;
            case 2:
              v6 = "LogHr";
              break;
            case 3:
              v6 = "FailFast";
              break;
          }
        }
        else
        {
          v6 = "Exception";
        }
        v7 = *(_DWORD *)(a3 + 4);
        Buffer[0] = 0;
        FormatMessageW(0x1200u, 0LL, v7, 0x400u, Buffer, 0x100u, 0LL);
        v8 = &a1[a2];
        v9 = *(_QWORD *)(a3 + 128);
        v10 = *(_QWORD *)(a3 + 120);
        if ( *(_QWORD *)(a3 + 48) )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v11 = sub_18000D478(a1, v8, L"%hs(%u)\\%hs!%p: ", *(_QWORD *)(a3 + 48), lpBuffer, v10, v9);
        }
        else
        {
          v11 = sub_18000D478(a1, v8, L"%hs!%p: ", v10, v9);
        }
        v12 = v11;
        if ( *(_QWORD *)(a3 + 136) )
          v12 = sub_18000D478(v11, v8, L"(caller: %p) ");
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v14 = sub_18000D478(v12, v8, L"%hs(%d) tid(%x) %08X %ws", v6, lpBuffera, *(_QWORD *)nSize, Arguments, Buffer);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v15 = sub_18000D478(v14, v8, L"    ");
          if ( *(_QWORD *)(a3 + 16) )
            v15 = sub_18000D478(v15, v8, L"Msg:[%ws] ");
          if ( *(_QWORD *)(a3 + 64) )
            v15 = sub_18000D478(v15, v8, L"CallContext:[%hs] ");
          v16 = *(_QWORD *)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            sub_18000D478(v15, v8, L"[%hs(%hs)]\n", v16, *(_QWORD *)(a3 + 32));
          }
          else if ( v16 )
          {
            sub_18000D478(v15, v8, L"[%hs]\n");
          }
          else
          {
            sub_18000D478(v15, v8, L"\n");
          }
        }
      }
    }
  }
  return 0LL;
}
