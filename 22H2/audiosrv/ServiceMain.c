/*
 * XREFs of ServiceMain @ 0x180061950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180061BA0 @ 0x180061BA0 (sub_180061BA0.c)
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  LPVOID v8; // rbx
  HANDLE v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rax
  SIZE_T v15; // r15
  __int64 v16; // rcx
  HANDLE Thread; // rax
  __int64 v18; // rdx
  LPVOID *v19; // r8
  unsigned int i; // edi

  if ( !a1 )
    return;
  qword_18019F900 = 1LL;
  qword_18019F8E0 = (__int64)&unk_18016D180;
  qword_18019F8F8 = 0LL;
  off_18019C348 = &qword_18019F8E8;
  qword_18019F8E8 = 0LL;
  sub_1800621C4();
  qword_18019E670 = (__int64)RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)HandlerProc, 0LL);
  if ( !qword_18019E670 )
    return;
  dword_18019E650 = 32;
  dword_18019E660 = 0;
  if ( !(unsigned int)sub_180061D94(2LL, 0LL, 5000LL, v4) )
    return;
  qword_18019E648 = CreateEventW(0LL, 1, 0, 0LL);
  if ( !qword_18019E648 )
  {
    dword_18019E660 = GetLastError();
    v7 = (unsigned int)dword_18019E660;
LABEL_18:
    sub_180061D94(1LL, v7, 0LL, v6);
    return;
  }
  dword_18019E660 = (*(__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, __int64 (__fastcall *)(), _QWORD, int))(qword_18019E788 + 192))(
                      &WaitHandle,
                      *a2,
                      qword_18019E648,
                      sub_180115240,
                      0LL,
                      8);
  v5 = HeapAlloc(hHeap, 0, 0x18uLL);
  v7 = 8LL;
  v8 = v5;
  if ( !v5 )
  {
    dword_18019E660 = 8;
    goto LABEL_18;
  }
  v9 = hHeap;
  *(_QWORD *)v5 = qword_18019E670;
  v5[2] = a1;
  v10 = HeapAlloc(v9, 8u, 8LL * a1);
  *((_QWORD *)v8 + 2) = v10;
  if ( v10 )
  {
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v13][v14] );
      v15 = (unsigned int)(2 * v14 + 2);
      *(_QWORD *)(v13 * 8 + *((_QWORD *)v8 + 2)) = HeapAlloc(hHeap, 8u, v15);
      v16 = *(_QWORD *)(v13 * 8 + *((_QWORD *)v8 + 2));
      if ( !v16 || (int)sub_180061BA0(v16, (unsigned int)v15, a2[v13]) < 0 )
        break;
      ++v12;
      ++v13;
      if ( v12 >= a1 )
      {
        Thread = CreateThread(0LL, 0LL, StartAddress, v8, 0, 0LL);
        if ( Thread )
        {
          CloseHandle(Thread);
          return;
        }
        dword_18019E660 = GetLastError();
        v18 = (unsigned int)dword_18019E660;
        goto LABEL_21;
      }
    }
  }
  dword_18019E660 = 8;
  v18 = 8LL;
LABEL_21:
  sub_180061D94(1LL, v18, 0LL, v11);
  v19 = (LPVOID *)*((_QWORD *)v8 + 2);
  if ( v19 )
  {
    for ( i = 0; i < *((_DWORD *)v8 + 2); ++i )
    {
      v19 = (LPVOID *)*((_QWORD *)v8 + 2);
      if ( v19[i] )
      {
        HeapFree(hHeap, 0, v19[i]);
        v19 = (LPVOID *)*((_QWORD *)v8 + 2);
      }
    }
    HeapFree(hHeap, 0, v19);
  }
  HeapFree(hHeap, 0, v8);
}
