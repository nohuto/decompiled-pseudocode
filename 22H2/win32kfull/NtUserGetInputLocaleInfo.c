/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C01186E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rax
  ULONG64 v11; // rcx
  __int128 v13; // [rsp+38h] [rbp-40h]
  __int128 v14; // [rsp+48h] [rbp-30h]

  v4 = EnterSharedCrit(0LL, 1LL);
  v6 = *(_QWORD *)(v4 + 440);
  v7 = 0;
  if ( a1 )
  {
    v8 = 0LL;
    v9 = *(_QWORD *)(v4 + 440);
    if ( !v6 )
    {
LABEL_17:
      UserSetLastError(6LL, v5, v6);
      goto LABEL_13;
    }
    do
    {
      if ( *(_QWORD *)(v6 + 40) == a1 )
      {
        if ( *(int *)(v6 + 32) >= 0 )
          goto LABEL_5;
        v8 = v6;
      }
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 != v9 );
    v6 = v8;
  }
LABEL_5:
  if ( !v6 )
    goto LABEL_17;
  v10 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  if ( *v10 == 32 )
  {
    *(_QWORD *)&v13 = 32LL;
    LODWORD(v14) = *(_DWORD *)(v6 + 112);
    DWORD1(v14) = *(unsigned __int16 *)(v6 + 72);
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v6 + 64);
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(v6 + 40);
    *a2 = v13;
    a2[1] = v14;
    v7 = 1;
  }
  else
  {
    UserSetLastError(87LL, v5, v6);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v11);
  return v7;
}
