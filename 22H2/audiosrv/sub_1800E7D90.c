/*
 * XREFs of sub_1800E7D90 @ 0x1800E7D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E7D90(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 *j; // rbx
  __int64 **v8; // rax
  __int64 *i; // rax
  __int64 *v10; // rcx
  unsigned int v11; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *a3 = 0LL;
  j = **(__int64 ***)(a1 + 56);
  while ( j != *(__int64 **)(a1 + 56) )
  {
    if ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)j[8] + 152LL))(j[8], a2, a3) >= 0 )
    {
      v11 = 0;
      goto LABEL_15;
    }
    v8 = (__int64 **)j[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v10 = *v8;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
        j = v10;
    }
  }
  v11 = -2005139430;
LABEL_15:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v11;
}
