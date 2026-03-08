/*
 * XREFs of PopProcessorIdleSelectNotification @ 0x14058A730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopTranslateDependencyArray @ 0x14058AADC (PopTranslateDependencyArray.c)
 */

__int64 __fastcall PopProcessorIdleSelectNotification(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned __int8 (__fastcall *v5)(ULONG_PTR, __int64, ULONG_PTR); // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // r14

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 && (v5 = *(unsigned __int8 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))(v2 + 104)) != 0LL )
  {
    v6 = *(_QWORD *)(a1 + 72);
    v7 = *(_QWORD *)(a2 + 24);
    if ( v5(v6, 3LL, a2) )
      PopTranslateDependencyArray(v6, a2, 0x700uLL, *(_DWORD *)(a2 + 16), v7);
    else
      return (unsigned int)-1073741637;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
