/*
 * XREFs of GreMultiUserSetDisplayDriverName @ 0x1C01533F4
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0153490 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 */

__int64 __fastcall GreMultiUserSetDisplayDriverName(__int64 a1, int a2, const unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v8; // ebp
  unsigned __int16 *v9; // rax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    Win32FreePool(v5);
  v8 = a2 + 1;
  v9 = (unsigned __int16 *)Win32AllocPool(2LL * v8, 2037609301LL);
  *(_QWORD *)(a1 + 40) = v9;
  if ( v9 )
  {
    StringCchCopyNW(v9, v8, a3, v8);
    *(_DWORD *)(a1 + 48) = v8;
    return 1;
  }
  return v4;
}
