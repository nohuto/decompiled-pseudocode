/*
 * XREFs of sub_180033150 @ 0x180033150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033150(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx

  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    v6 = 0;
    if ( *(int *)(a1 + 96) > 0 )
    {
      v7 = 0LL;
      do
      {
        v5 = *(_QWORD *)(a1 + 88);
        v8 = *(_QWORD *)(v7 + v5);
        if ( v8 )
        {
          *(_QWORD *)(v7 + v5) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          v5 = *(_QWORD *)(a1 + 88);
        }
        ++v6;
        v7 += 8LL;
      }
      while ( v6 < *(_DWORD *)(a1 + 96) );
    }
    _o_free(v5);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  *(_QWORD *)(a1 + 96) = 0LL;
  v9 = *(_QWORD *)(a1 + 72);
  if ( v9 )
  {
    v10 = 0;
    if ( *(int *)(a1 + 80) > 0 )
    {
      v11 = 0LL;
      do
      {
        v9 = *(_QWORD *)(a1 + 72);
        v12 = *(_QWORD *)(v11 + v9);
        if ( v12 )
        {
          *(_QWORD *)(v11 + v9) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          v9 = *(_QWORD *)(a1 + 72);
        }
        ++v10;
        v11 += 8LL;
      }
      while ( v10 < *(_DWORD *)(a1 + 80) );
    }
    _o_free(v9);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    _o_free(v13);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 36) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 112LL);
  return a1;
}
