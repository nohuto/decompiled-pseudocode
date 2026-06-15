/*
 * XREFs of sub_180056A7C @ 0x180056A7C
 * Callers:
 *     sub_180056A40 @ 0x180056A40 (sub_180056A40.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180056BF0 @ 0x180056BF0 (sub_180056BF0.c)
 *     sub_18006825C @ 0x18006825C (sub_18006825C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 *     sub_18013F4D0 @ 0x18013F4D0 (sub_18013F4D0.c)
 */

__int64 (__fastcall **__fastcall sub_180056A7C(__int64 a1))()
{
  char *v2; // rcx
  void **v3; // rbx
  void *v4; // rcx
  void *v5; // rax
  __int64 v6; // rcx
  __int64 (__fastcall **result)(); // rax
  __int64 i; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // eax

  *(_QWORD *)a1 = off_180147388;
  *(_QWORD *)(a1 + 8) = off_180147360;
  if ( *(_QWORD *)(a1 + 32) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    *(_DWORD *)(a1 + 176) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    SetThreadpoolWait(*(PTP_WAIT *)(a1 + 32), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*(PTP_WAIT *)(a1 + 32), 1);
    CloseThreadpoolWait(*(PTP_WAIT *)(a1 + 32));
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v2 = *(char **)(a1 + 40);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = (void **)(a1 + 184);
  ++*(_DWORD *)(a1 + 232);
  v4 = *(void **)(a1 + 184);
  v5 = v4;
  if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 200); i = (unsigned int)(i + 1) )
    {
      v9 = *((_QWORD *)v4 + i);
      v5 = v4;
      if ( v9 )
      {
        do
        {
          v10 = v9;
          v9 = *(_QWORD *)(v9 + 16);
          sub_18013F4D0(a1 + 184, v10);
        }
        while ( v9 );
        v4 = *v3;
        v5 = *v3;
      }
    }
  }
  sub_180033A70(v5);
  *v3 = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  if ( !*(_DWORD *)(a1 + 232) )
  {
    v11 = sub_1800CF858(a1 + 184);
    sub_180107110(a1 + 184, v11, 0LL);
  }
  sub_18006825C(a1 + 184);
  --*(_DWORD *)(a1 + 232);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  sub_180056BF0(a1 + 88);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  result = &off_180147338;
  *(_QWORD *)(a1 + 8) = &off_180147338;
  return result;
}
