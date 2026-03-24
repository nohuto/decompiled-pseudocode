/*
 * XREFs of NtUserPaintMenuBar @ 0x1C0101FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxPaintMenuBar @ 0x1C0102100 (xxxPaintMenuBar.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v19;
    *((_QWORD *)&v19 + 1) = v10;
    HMLockObject(v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v18 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v12 = xxxPaintMenuBar(v13, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_8:
        ThreadUnlock1(v16);
        goto LABEL_9;
      }
    }
    v18 = 87LL;
LABEL_12:
    UserSetLastError(v18, v14, v15);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
