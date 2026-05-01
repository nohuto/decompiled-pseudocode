/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18005DE20
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18003E070 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180040E40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 *i; // rcx
  __int64 v6; // rbx

  v2 = *((_QWORD *)this + 4);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  for ( i = (__int64 *)*((_QWORD *)this + 3); ; ++i )
  {
    v6 = *i;
    if ( *(_DWORD *)(*i + 8) == a2 )
      break;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  if ( v3 < v2 )
  {
    if ( v3 != v2 - 1 )
    {
      memmove_0(i, i + 1, 8 * (v2 - v3) - 8);
      v2 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = v2 - 1;
  }
  if ( *(_DWORD *)(v6 + 12) != 5 )
    --*((_DWORD *)this + 14);
  return (struct CDelayIAMOperations::COperation *)v6;
}
