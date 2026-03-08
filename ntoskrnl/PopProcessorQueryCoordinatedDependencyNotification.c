/*
 * XREFs of PopProcessorQueryCoordinatedDependencyNotification @ 0x14058A9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopProcessorQueryCoordinatedDependencyNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned __int8 (__fastcall *v5)(_QWORD, __int64, __int64); // rax
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 && (v5 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(v2 + 104)) != 0LL )
  {
    if ( v5(*(_QWORD *)(a1 + 72), 30LL, a2) )
    {
      v6 = *(_QWORD *)(a2 + 16);
      if ( v6 )
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v6 + 192);
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
  return v3;
}
