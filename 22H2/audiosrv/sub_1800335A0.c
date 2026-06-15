/*
 * XREFs of sub_1800335A0 @ 0x1800335A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E68F0 @ 0x1800E68F0 (sub_1800E68F0.c)
 *     sub_1800E69D4 @ 0x1800E69D4 (sub_1800E69D4.c)
 *     sub_1800E6AB4 @ 0x1800E6AB4 (sub_1800E6AB4.c)
 */

__int64 __fastcall sub_1800335A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v10; // eax
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+20h] [rbp-99h]
  unsigned __int16 **v22; // [rsp+28h] [rbp-91h]
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-79h]
  __int64 v26; // [rsp+48h] [rbp-71h] BYREF
  __int64 v27; // [rsp+50h] [rbp-69h] BYREF
  __int64 v28; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v30; // [rsp+68h] [rbp-51h]
  unsigned __int16 *v31; // [rsp+70h] [rbp-49h] BYREF
  int v32; // [rsp+78h] [rbp-41h]
  int v33; // [rsp+7Ch] [rbp-3Dh]
  void *v34; // [rsp+80h] [rbp-39h]
  int v35; // [rsp+88h] [rbp-31h]
  int v36; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v37; // [rsp+90h] [rbp-29h]
  __int64 v38; // [rsp+98h] [rbp-21h]
  __int64 *v39; // [rsp+A0h] [rbp-19h]
  __int64 v40; // [rsp+A8h] [rbp-11h]
  __int64 *v41; // [rsp+B0h] [rbp-9h]
  __int64 v42; // [rsp+B8h] [rbp-1h]
  void *retaddr; // [rsp+108h] [rbp+4Fh]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 288LL))(*(_QWORD *)(a1 + 192));
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2593LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v10);
    return v11;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 40) + 24LL))(
            *(_QWORD *)(a1 + 40),
            a3,
            a4,
            a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      sub_18004BD84(
        retaddr,
        2595LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v12);
      return v13;
    }
    else
    {
      v14 = 0LL;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
      {
        Context = &qword_18019E828;
        qword_18019E828 = (__int64)off_1801462A0;
        qword_18019E840 = (__int64)&unk_18019C388;
        atexit(sub_1800B6240);
        sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
        InitOnceComplete(&InitOnce, 0, &qword_18019E828);
      }
      v15 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        v17 = *(_QWORD *)(a1 + 192);
        v26 = v16;
        v27 = v17;
        v41 = &v26;
        v42 = 8LL;
        v39 = &v27;
        v18 = 0LL;
        if ( a1 != 8 )
          v18 = a1;
        v40 = 8LL;
        v28 = v18;
        v37 = &v28;
        v29[1] = 4;
        v31 = *(unsigned __int16 **)(v15 + 8);
        v38 = 8LL;
        v29[0] = 184549376;
        v30 = 0LL;
        v32 = *v31;
        v34 = &unk_180167670;
        v33 = 2;
        v19 = *(_QWORD *)(v15 + 32);
        v35 = 70;
        v36 = 1;
        v25 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
        v22 = &v31;
        v21 = 5;
        EtwEventWriteTransfer(v19, v29, 0LL);
      }
      if ( a1 != 8 )
        v14 = a1;
      *(_QWORD *)(a6 + 48) = v14;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 8LL))(a1 - 8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 136LL))(a2) )
        sub_1800E6AB4(a1 - 8, 1LL);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2) )
        sub_1800E68F0(a1 - 8, 1LL);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2) )
        sub_1800E69D4(a1 - 8, 1LL);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
        ++*(_DWORD *)(a1 + 112);
      sub_180033810(a1 - 8, a2, a6, a5, v21, v22);
      return 0LL;
    }
  }
}
