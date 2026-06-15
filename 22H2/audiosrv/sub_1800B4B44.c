/*
 * XREFs of sub_1800B4B44 @ 0x1800B4B44
 * Callers:
 *     sub_18004BEE8 @ 0x18004BEE8 (sub_18004BEE8.c)
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B50E0 @ 0x1800B50E0 (sub_1800B50E0.c)
 */

__int64 __fastcall sub_1800B4B44(_WORD *a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v6)(__int64, _WORD *, __int64); // rax
  const char *v7; // rsi
  DWORD v8; // r8d
  _WORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbp
  DWORD CurrentThreadId; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( a1 )
    {
      v6 = (void (__fastcall *)(__int64, _WORD *, __int64))qword_18019F9B8;
      *a1 = 0;
      if ( !v6 || !byte_18019F9D0 || (v6(a3, a1, a2), !*a1) )
      {
        v7 = MultiByteStr;
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v7 = "ReturnHr";
              break;
            case 2:
              v7 = "LogHr";
              break;
            case 3:
              v7 = "FailFast";
              break;
          }
        }
        else
        {
          v7 = "Exception";
        }
        v8 = *(_DWORD *)(a3 + 4);
        Buffer[0] = 0;
        FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
        v9 = &a1[a2];
        v10 = *(_QWORD *)(a3 + 128);
        v11 = *(_QWORD *)(a3 + 120);
        if ( *(_QWORD *)(a3 + 48) )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v12 = sub_1800B50E0(a1, v9, L"%hs(%u)\\%hs!%p: ", *(_QWORD *)(a3 + 48), lpBuffer, v11, v10);
        }
        else
        {
          v12 = sub_1800B50E0(a1, v9, L"%hs!%p: ", v11, v10);
        }
        v13 = v12;
        if ( *(_QWORD *)(a3 + 136) )
          v13 = sub_1800B50E0(v12, v9, L"(caller: %p) ");
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v15 = sub_1800B50E0(v13, v9, L"%hs(%d) tid(%x) %08X %ws", v7, lpBuffera, *(_QWORD *)nSize, Arguments, Buffer);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v16 = sub_1800B50E0(v15, v9, L"    ");
          if ( *(_QWORD *)(a3 + 16) )
            v16 = sub_1800B50E0(v16, v9, L"Msg:[%ws] ");
          if ( *(_QWORD *)(a3 + 64) )
            v16 = sub_1800B50E0(v16, v9, L"CallContext:[%hs] ");
          v17 = *(_QWORD *)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            sub_1800B50E0(v16, v9, L"[%hs(%hs)]\n", v17, *(_QWORD *)(a3 + 32));
          }
          else if ( v17 )
          {
            sub_1800B50E0(v16, v9, L"[%hs]\n");
          }
          else
          {
            sub_1800B50E0(v16, v9, L"\n");
          }
        }
      }
    }
  }
  return 0LL;
}
