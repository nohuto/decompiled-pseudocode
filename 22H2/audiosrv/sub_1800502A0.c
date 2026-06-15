/*
 * XREFs of sub_1800502A0 @ 0x1800502A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E68F0 @ 0x1800E68F0 (sub_1800E68F0.c)
 *     sub_1800E69D4 @ 0x1800E69D4 (sub_1800E69D4.c)
 *     sub_1800E6AB4 @ 0x1800E6AB4 (sub_1800E6AB4.c)
 */

__int64 __fastcall sub_1800502A0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 v16; // rcx
  _QWORD *v17; // r15
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-E0h]
  unsigned __int16 **v22; // [rsp+28h] [rbp-D8h]
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  _BYTE v31[1264]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v32; // [rsp+560h] [rbp+460h] BYREF
  int v33; // [rsp+568h] [rbp+468h]
  int v34; // [rsp+56Ch] [rbp+46Ch]
  void *v35; // [rsp+570h] [rbp+470h]
  int v36; // [rsp+578h] [rbp+478h]
  int v37; // [rsp+57Ch] [rbp+47Ch]
  __int64 *v38; // [rsp+580h] [rbp+480h]
  __int64 v39; // [rsp+588h] [rbp+488h]
  __int64 *v40; // [rsp+590h] [rbp+490h]
  __int64 v41; // [rsp+598h] [rbp+498h]
  __int64 *v42; // [rsp+5A0h] [rbp+4A0h]
  __int64 v43; // [rsp+5A8h] [rbp+4A8h]
  void *retaddr; // [rsp+5E8h] [rbp+4E8h]

  v2 = *(__int64 **)(a1 + 40);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  if ( v7 < 0 )
    sub_18006D26C(
      retaddr,
      2625LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v7);
  v8 = 0LL;
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
    v10 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
    v11 = *(_QWORD *)(a1 + 192);
    v26 = v10;
    v27 = v11;
    v42 = &v26;
    v43 = 8LL;
    v40 = &v27;
    v12 = 0LL;
    if ( a1 != 8 )
      v12 = a1;
    v41 = 8LL;
    v28 = v12;
    v38 = &v28;
    v29[1] = 4;
    v32 = *(unsigned __int16 **)(v9 + 8);
    v39 = 8LL;
    v29[0] = 184549376;
    v30 = 0LL;
    v33 = *v32;
    v35 = &unk_18016761C;
    v34 = 2;
    v13 = *(_QWORD *)(v9 + 32);
    v36 = 72;
    v37 = 1;
    LODWORD(v23) = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    v22 = &v32;
    v21 = 5;
    EtwEventWriteTransfer(v13, v29, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 136))(a2) )
    sub_1800E6AB4(a1 - 8, 0xFFFFFFFFLL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 144))(a2) )
    sub_1800E68F0(a1 - 8, 0xFFFFFFFFLL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 152))(a2) )
    sub_1800E69D4(a1 - 8, 0xFFFFFFFFLL);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 2 )
    --*(_DWORD *)(a1 + 112);
  v14 = *a2;
  v23 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v14 + 120))(a2, &v23);
  v15 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 72))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v16 = *(_QWORD *)(a1 + 176);
  v17 = *(_QWORD **)(a1 + 168);
  if ( v17 != (_QWORD *)v16 )
  {
    do
    {
      if ( (__int64 *)*v17 == a2 )
        break;
      ++v17;
    }
    while ( v17 != (_QWORD *)v16 );
    if ( v17 != (_QWORD *)v16 )
    {
      v18 = v17 + 1;
      v19 = (v16 - (unsigned __int64)(v17 + 1) + 7) >> 3;
      if ( (unsigned __int64)(v17 + 1) > v16 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( (__int64 *)*v18 != a2 )
            *v17++ = *v18;
          ++v18;
          ++v8;
        }
        while ( v8 != v19 );
      }
    }
  }
  memmove(v17, *(const void **)(a1 + 176), 0LL);
  *(_QWORD *)(a1 + 176) = v17;
  memset(v31, 0, sizeof(v31));
  (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(*a2 + 112))(a2, v31, 0LL);
  if ( a1 != -128 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned __int16 **))(*(_QWORD *)v23 + 200LL))(
    v23,
    2LL,
    0xFFFFFFFFLL,
    v15,
    v21,
    v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return 0LL;
}
