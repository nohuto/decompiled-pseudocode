/*
 * XREFs of ?HKInsertHashElement@@YAXPEAUtagHOTKEY@@@Z @ 0x1C003B0EC
 * Callers:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HKInsertHashElement(struct tagHOTKEY *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *((_BYTE *)a1 + 36) & 0x7F;
  *((_QWORD *)a1 + 6) = *(_QWORD *)(SGDGetUserSessionState(a1) + 8 * v2 + 12736);
  *(_QWORD *)(SGDGetUserSessionState(v3) + 8 * v2 + 12736) = a1;
}
