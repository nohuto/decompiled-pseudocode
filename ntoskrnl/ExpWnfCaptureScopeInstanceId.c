/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x14071A42C
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140719DF0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     SeCaptureSid @ 0x140710930 (SeCaptureSid.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  int v7; // ecx
  __int64 v8; // rcx
  __int64 SessionById; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a3;
  if ( !a2 )
  {
    *v5 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( !v11 )
    {
      v10 = SeCaptureSid(a2, a3, a3, a4, Tag, 0, (PSID *)a5);
      if ( v10 >= 0 )
        *v5 = *(_QWORD *)a5;
      return (unsigned int)v10;
    }
    if ( v11 == 1 )
    {
      v10 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)a2, 0x20666E57u, a5, 0LL, 0LL);
      if ( v10 >= 0 )
        *v5 = a5;
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  if ( (_BYTE)a3 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v8 = *(unsigned int *)v12;
  }
  else
  {
    v8 = *(unsigned int *)a2;
  }
  *(_DWORD *)(a5 + 8) = v8;
  SessionById = MmGetSessionById(v8, a5);
  *(_QWORD *)a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *v5 = a5 + 8;
  return 0;
}
