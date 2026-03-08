/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C01816AC
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0181300 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01817A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004B3A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r8

  if ( !*a2 )
    WdLogSingleEntry0(1LL);
  v4 = (__int64)*a2;
  v5 = a1 + 3;
  v6 = (_QWORD *)a1[3];
  if ( v6 == a1 + 3 )
  {
    v8 = v6 - 1;
LABEL_16:
    if ( v4 && v6 != v5 )
    {
      while ( v8 )
      {
        if ( v8 == (_QWORD *)v4 )
        {
          WdLogSingleEntry1(1LL, 108LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_25;
        }
        v12 = (_QWORD *)v8[1];
        v8 = v12 - 1;
        if ( v12 == v5 )
          v8 = 0LL;
      }
    }
    v13 = (_QWORD *)a1[4];
    v14 = (_QWORD *)(v4 + 8);
    if ( (_QWORD *)*v13 != v5 )
      __fastfail(3u);
    *v14 = v5;
    v14[1] = v13;
    *v13 = v14;
    a1[4] = v14;
    ++a1[5];
LABEL_25:
    *a2 = 0LL;
    return 0LL;
  }
  v7 = v6 - 1;
  v8 = v6 - 1;
  if ( v6 == (_QWORD *)8 )
  {
LABEL_9:
    v10 = v6 - 1;
    while ( v10 )
    {
      if ( v10 == (_QWORD *)v4 )
        goto LABEL_28;
      v11 = (_QWORD *)v10[1];
      v10 = v11 - 1;
      if ( v11 == v5 )
        v10 = 0LL;
    }
    goto LABEL_16;
  }
  while ( *((_DWORD *)v7 + 6) != *(_DWORD *)(v4 + 24) )
  {
    v9 = (_QWORD *)v7[1];
    v7 = v9 - 1;
    if ( v9 == v5 )
      v7 = 0LL;
    if ( !v7 )
      goto LABEL_9;
  }
  if ( v7 == (_QWORD *)v4 )
  {
LABEL_28:
    WdLogSingleEntry2(2LL, *a2, a1);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
    return 3223192344LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, *(unsigned int *)(v4 + 24), v4, a1);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
    return 3223192370LL;
  }
}
