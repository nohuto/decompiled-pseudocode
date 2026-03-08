/*
 * XREFs of PopProcessorQueryPlatformStateNotification @ 0x14058AA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopTranslateDependencyArray @ 0x14058AADC (PopTranslateDependencyArray.c)
 */

__int64 __fastcall PopProcessorQueryPlatformStateNotification(__int64 a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ULONG_PTR v5; // rsi
  unsigned __int8 (__fastcall *v7)(_QWORD, _QWORD, ULONG_PTR); // rax
  __int64 v8; // r14
  __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v3 && (v7 = *(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR))(v3 + 104)) != 0LL )
  {
    v8 = a2 + 40;
    if ( v7(*(_QWORD *)(a1 + 72), a3 != 0 ? 22 : 19, a2) )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v9 + 192);
      PopTranslateDependencyArray(v5, a2, 0x703uLL, *(_DWORD *)(a2 + 28), v8);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
