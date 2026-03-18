/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C004F6D0
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilterEx @ 0x1C004F868 (_ChangeWindowMessageFilterEx.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagWND *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-38h]
  __int128 v22; // [rsp+38h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-10h]

  HIDWORD(v21) = 0;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v12 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v12 )
  {
    v16 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v22;
  *((_QWORD *)&v22 + 1) = v12;
  HMLockObject(v12);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*((_QWORD *)v12 + 2) + 424LL) )
  {
    v19 = 5LL;
    goto LABEL_19;
  }
  v13 = *((_QWORD *)v12 + 5);
  if ( *(char *)(v13 + 20) < 0 || *(char *)(v13 + 19) < 0 )
  {
    v19 = 1400LL;
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
    v19 = 87LL;
LABEL_19:
    v16 = 0;
    UserSetLastError(v19);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v21) = 8;
LABEL_10:
    v16 = ChangeWindowMessageFilterEx(v12, a2);
    if ( v16 && a4 )
    {
      v15 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v15 > MmUserProbeAddress )
      {
        v15 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v21;
    }
    goto LABEL_16;
  }
  v20 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  v21 = *v20;
  if ( (unsigned int)*v20 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v16 = 0;
LABEL_16:
  ThreadUnlock1(v15, v14, v17);
LABEL_17:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v16;
}
