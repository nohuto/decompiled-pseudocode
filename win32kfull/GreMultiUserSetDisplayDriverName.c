/*
 * XREFs of GreMultiUserSetDisplayDriverName @ 0x1C0127298
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0127334 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall GreMultiUserSetDisplayDriverName(__int64 a1, int a2, const unsigned __int16 *a3, __int64 a4)
{
  unsigned int v5; // ebx
  void *v6; // rcx
  unsigned int v9; // ebp
  unsigned __int16 *v10; // rax

  v5 = 0;
  v6 = *(void **)(a1 + 40);
  if ( v6 )
    Win32FreePool(v6);
  v9 = a2 + 1;
  v10 = (unsigned __int16 *)Win32AllocPool(2LL * v9, 2037609301LL, a3, a4);
  *(_QWORD *)(a1 + 40) = v10;
  if ( v10 )
  {
    StringCchCopyNW(v10, v9, a3, v9);
    *(_DWORD *)(a1 + 48) = v9;
    return 1;
  }
  return v5;
}
