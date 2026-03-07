__int64 __fastcall NtUserGetMenuIndex(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  signed int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r8
  unsigned int v10; // edi
  unsigned int v11; // edx

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHmenu(a1);
  v7 = 0;
  v8 = v5;
  if ( !v5 || (v9 = ValidateHmenu(a2)) == 0 )
  {
LABEL_7:
    v10 = v7;
    goto LABEL_8;
  }
  v10 = -1;
  v11 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 44LL);
  if ( v11 )
  {
    do
    {
      v6 = 96LL * v7;
      if ( *(_QWORD *)(v6 + *(_QWORD *)(v8 + 88) + 16) == v9 )
        goto LABEL_7;
    }
    while ( ++v7 < v11 );
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v10;
}
