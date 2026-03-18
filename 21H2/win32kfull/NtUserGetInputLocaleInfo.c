/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C0107BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rax
  ULONG64 v12; // rcx
  __int128 v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+48h] [rbp-30h]

  v3 = a2;
  v5 = EnterSharedCrit(a1, a2, a3);
  v7 = *(_QWORD *)(v5 + 440);
  v8 = 0;
  if ( a1 )
  {
    v9 = 0LL;
    v10 = *(_QWORD *)(v5 + 440);
    if ( !v7 )
    {
LABEL_17:
      UserSetLastError(6LL, v6);
      goto LABEL_13;
    }
    do
    {
      if ( *(_QWORD *)(v7 + 40) == a1 )
      {
        if ( *(int *)(v7 + 32) >= 0 )
          goto LABEL_5;
        v9 = v7;
      }
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v7 != v10 );
    v7 = v9;
  }
LABEL_5:
  if ( !v7 )
    goto LABEL_17;
  v11 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  if ( *v11 == 32 )
  {
    *(_QWORD *)&v14 = 32LL;
    LODWORD(v15) = *(_DWORD *)(v7 + 112);
    DWORD1(v15) = *(unsigned __int16 *)(v7 + 72);
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(v7 + 64);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    *((_QWORD *)&v14 + 1) = *(_QWORD *)(v7 + 40);
    *v3 = v14;
    v3[1] = v15;
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6);
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
