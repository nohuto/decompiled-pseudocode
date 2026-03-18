/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00A6F40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00A70D8 (_ChangeWindowMessageFilterEx.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rcx
  struct tagWND *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 *v18; // rcx
  ULONG64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]

  HIDWORD(v20) = 0;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v9 )
  {
    v14 = 0;
    goto LABEL_17;
  }
  *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v21;
  *((_QWORD *)&v21 + 1) = v9;
  HMLockObject(v9);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*((_QWORD *)v9 + 2) + 424LL) )
  {
    v17 = 5LL;
    goto LABEL_19;
  }
  v11 = *((_QWORD *)v9 + 5);
  if ( *(char *)(v11 + 20) < 0 || *(char *)(v11 + 19) < 0 )
  {
    v17 = 1400LL;
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
    v17 = 87LL;
LABEL_19:
    v14 = 0;
    UserSetLastError(v17, v10);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v20) = 8;
LABEL_10:
    v14 = ChangeWindowMessageFilterEx(v9, a2);
    if ( v14 && a4 )
    {
      v13 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v13 > MmUserProbeAddress )
      {
        v13 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v20;
    }
    goto LABEL_16;
  }
  v18 = a4;
  v19 = (ULONG64)(a4 + 1);
  if ( a4 + 1 < a4 || v19 > MmUserProbeAddress )
    v18 = (__int64 *)MmUserProbeAddress;
  v20 = *v18;
  if ( (unsigned int)*v18 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL, v19);
  v14 = 0;
LABEL_16:
  ThreadUnlock1(v13, v12, v15);
LABEL_17:
  UserSessionSwitchLeaveCrit(v8);
  return v14;
}
