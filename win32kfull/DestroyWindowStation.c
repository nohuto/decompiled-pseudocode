/*
 * XREFs of DestroyWindowStation @ 0x1C00DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 *i; // rdi
  __int64 v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
    for ( i = (__int64 *)grpWinStaList; ; i = (__int64 *)(v5 + 8) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( v1 == v5 )
      {
        UnlockObjectAssignment(i);
        *i = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
        break;
      }
    }
    *(_DWORD *)(v1 + 64) |= 0x100u;
    if ( !v6 )
      UserSessionSwitchLeaveCrit(v3);
  }
  return 0LL;
}
