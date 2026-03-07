__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
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
        v14 = 1004;
LABEL_10:
        UserSetLastError(v14);
        goto LABEL_11;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v12 = xxxPaintMenuBar(v13, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_11:
        ThreadUnlock1(v16, v15, v17);
        goto LABEL_12;
      }
    }
    v14 = 87;
    goto LABEL_10;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
