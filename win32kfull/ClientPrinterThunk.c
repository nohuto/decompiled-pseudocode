/*
 * XREFs of ClientPrinterThunk @ 0x1C02089FC
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C020800C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 */

__int64 __fastcall ClientPrinterThunk(_DWORD *a1, unsigned int a2, void *a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // ecx

  if ( IS_USERCRIT_OWNED_AT_ALL((__int64)a1) )
    return 0xFFFFFFFFLL;
  a1[2] = a4;
  a1[3] = 0;
  v10 = pppUserModeCallback(v8, a1, a2, a3, a4);
  v11 = -1;
  if ( v10 >= 0 )
    return 0;
  return v11;
}
