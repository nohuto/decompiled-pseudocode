/*
 * XREFs of DestroyWindowStation @ 0x1C01150D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004F094 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
    v4 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      v3 = grpWinStaList;
      do
      {
        v5 = v3;
        if ( v1 == v3 )
          break;
        v4 = (_QWORD *)(v3 + 8);
        v5 = *(_QWORD *)(v3 + 8);
        v3 = v5;
      }
      while ( v5 );
      if ( v5 )
      {
        UnlockObjectAssignment(v4);
        *v4 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
    }
    *(_DWORD *)(v1 + 64) |= 0x100u;
    if ( !v6 )
      UserSessionSwitchLeaveCrit(v3);
  }
  return 0LL;
}
