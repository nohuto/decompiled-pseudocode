/*
 * XREFs of IsHandleEntrySecure @ 0x1C00D6650
 * Callers:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C0077D40 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned int v7; // r8d
  __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // ecx

  v2 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - (__int64)qword_1C02D0E08) >> 5);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v7 = 0;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_WORD *)&unk_1C028159C + 12 * *(unsigned __int8 *)(a2 + 24));
  if ( (v8 & 2) != 0 )
  {
    v10 = v2[v5 + 1];
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 0LL;
    v9 = v2[v5 + 1];
    if ( !v9 )
      return 0LL;
    v10 = *(_QWORD *)(v9 + 424);
  }
  if ( v10 )
  {
    if ( *(PVOID *)v10 == gpepCSRSS )
      return 1LL;
    v11 = CurrentProcessWin32Process[95];
    if ( *(_QWORD *)(v10 + 760) == v11 )
      return 1LL;
    v13 = *(_QWORD **)(v11 + 56);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v11 + 48);
      if ( v14 )
      {
        while ( *v13 != a1 )
        {
          ++v7;
          ++v13;
          if ( v7 >= v14 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
