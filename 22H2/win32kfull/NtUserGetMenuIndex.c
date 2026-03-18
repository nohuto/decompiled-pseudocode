/*
 * XREFs of NtUserGetMenuIndex @ 0x1C01D25F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  signed int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // edi

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHmenu(a1);
  v10 = 0;
  v11 = v5;
  if ( !v5 || (v8 = ValidateHmenu(a2)) == 0 )
  {
LABEL_8:
    v12 = v10;
    goto LABEL_9;
  }
  v12 = -1;
  v6 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 44LL);
  if ( (_DWORD)v6 )
  {
    v9 = *(_QWORD *)(v11 + 88);
    do
    {
      v7 = 96LL * v10;
      if ( *(_QWORD *)(v7 + v9 + 16) == v8 )
        goto LABEL_8;
    }
    while ( ++v10 < (unsigned int)v6 );
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v12;
}
