/*
 * XREFs of sub_180137110 @ 0x180137110
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 *     sub_1801269B0 @ 0x1801269B0 (sub_1801269B0.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180074010 @ 0x180074010 (sub_180074010.c)
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 *     sub_1800DD894 @ 0x1800DD894 (sub_1800DD894.c)
 *     sub_1801349C4 @ 0x1801349C4 (sub_1801349C4.c)
 *     sub_1801372AC @ 0x1801372AC (sub_1801372AC.c)
 */

__int64 __fastcall sub_180137110(__int64 pv)
{
  __int64 v2; // rbp
  DWORD *v3; // rsi
  unsigned __int64 v4; // rdi
  HRESULT v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // r9
  HKEY v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(pv + 552) = 1;
  *(_BYTE *)(pv + 100) = 0;
  if ( *(_BYTE *)(pv + 209) )
  {
    v2 = 0LL;
    v3 = *(DWORD **)(pv + 528);
    v4 = (unsigned __int64)(*(_QWORD *)(pv + 536) - (_QWORD)v3 + 3LL) >> 2;
    if ( (unsigned __int64)v3 > *(_QWORD *)(pv + 536) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = CoCancelCall(*v3, 0);
        if ( v5 < 0 )
          sub_18006D26C((int)retaddr, 139, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v5);
        ++v3;
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
  if ( *(_BYTE *)(pv + 97) )
  {
    sub_180074010(pv);
    sub_180074024(pv);
    sub_1801372AC((PVOID)pv);
    v6 = *(void **)(pv + 112);
    if ( v6 )
    {
      UnregisterWaitEx(v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *(_QWORD *)(pv + 112) = 0LL;
    }
    v7 = *(void **)(pv + 104);
    if ( v7 )
    {
      CloseHandle(v7);
      *(_QWORD *)(pv + 104) = 0LL;
    }
    sub_1801349C4(pv);
  }
  v8 = *(void **)(pv + 136);
  if ( v8 )
  {
    if ( *(_QWORD *)(pv + 128) )
    {
      if ( !UnregisterWaitEx(*(HANDLE *)(pv + 128), (HANDLE)0xFFFFFFFFFFFFFFFFLL) )
        sub_1800DD894((int)retaddr, 173, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v9);
      v8 = *(void **)(pv + 136);
      *(_QWORD *)(pv + 128) = 0LL;
    }
    CloseHandle(v8);
    *(_QWORD *)(pv + 136) = 0LL;
  }
  v10 = *(HKEY *)(pv + 120);
  if ( v10 )
  {
    RegCloseKey(v10);
    *(_QWORD *)(pv + 120) = 0LL;
  }
  return sub_18013738C(pv);
}
