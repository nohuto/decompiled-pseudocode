/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C003F290
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilterEx @ 0x1C003F428 (_ChangeWindowMessageFilterEx.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  ULONG64 v11; // rcx
  int v12; // ebx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int128 v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-10h]

  HIDWORD(v16) = 0;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( !v9 )
  {
    v12 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v17;
  *((_QWORD *)&v17 + 1) = v9;
  HMLockObject(v9);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) )
  {
    v14 = 5LL;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(v9 + 40);
  if ( *(char *)(v10 + 20) < 0 || *(char *)(v10 + 19) < 0 )
  {
    v14 = 1400LL;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v14 = 87LL;
LABEL_19:
    v12 = 0;
    UserSetLastError(v14);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v16) = 8;
LABEL_10:
    v12 = ChangeWindowMessageFilterEx((struct tagWND *)v9, a2);
    if ( v12 && a4 )
    {
      v11 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v11 > MmUserProbeAddress )
      {
        v11 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v16;
    }
    goto LABEL_16;
  }
  v15 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  v16 = *v15;
  if ( (unsigned int)*v15 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v12 = 0;
LABEL_16:
  ThreadUnlock1(v11);
LABEL_17:
  UserSessionSwitchLeaveCrit(v8);
  return v12;
}
