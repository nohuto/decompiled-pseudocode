/*
 * XREFs of sub_180036290 @ 0x180036290
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180036290(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-51h]
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-31h]
  unsigned __int16 *v20; // [rsp+70h] [rbp-21h]
  int v21; // [rsp+78h] [rbp-19h]
  int v22; // [rsp+7Ch] [rbp-15h]
  void *v23; // [rsp+80h] [rbp-11h]
  int v24; // [rsp+88h] [rbp-9h]
  int v25; // [rsp+8Ch] [rbp-5h]
  __int64 *v26; // [rsp+90h] [rbp-1h]
  __int64 v27; // [rsp+98h] [rbp+7h]
  __int64 *v28; // [rsp+A0h] [rbp+Fh]
  __int64 v29; // [rsp+A8h] [rbp+17h]
  void *retaddr; // [rsp+E8h] [rbp+57h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 176LL))(a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_18004BD84(
      retaddr,
      2482LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v7);
    return v8;
  }
  else
  {
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
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v16 = a3;
      v28 = &v16;
      v17 = a2;
      v26 = &v17;
      v18[1] = 4;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      v20 = v10;
      v29 = 8LL;
      v27 = 8LL;
      v18[0] = 184549376;
      v19 = 0LL;
      v21 = *v10;
      v23 = &unk_180167792;
      v22 = 2;
      v24 = 57;
      v25 = 1;
      v15 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
      EtwEventWriteTransfer(v11, v18, 0LL);
    }
    return 0LL;
  }
}
