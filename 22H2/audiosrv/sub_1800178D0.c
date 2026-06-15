/*
 * XREFs of sub_1800178D0 @ 0x1800178D0
 * Callers:
 *     sub_1800178A0 @ 0x1800178A0 (sub_1800178A0.c)
 * Callees:
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800178D0(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  int v14; // r9d
  _QWORD *v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rax
  __int128 v20; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v7 = sub_18006A18C(56LL, &unk_18019F848);
  v8 = v7;
  if ( v7 )
  {
    v20 = *a3;
    v9 = *((_DWORD *)a3 + 4);
    sub_180017B10(v7, a2, 4LL);
    *(_QWORD *)v8 = off_180146798;
    *(_OWORD *)(v8 + 32) = v20;
    *(_DWORD *)(v8 + 48) = v9;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_29;
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 8) - 16LL) )
  {
    (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
LABEL_29:
    v6 = -2147024882;
    sub_18005E8F8("CAudioSrv::QueueOnDeviceWorkItem", 1751LL, 2147942414LL);
    return v6;
  }
  if ( !*(_QWORD *)(a1 + 200) )
  {
    (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
    return v6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  v6 = 0;
  v10 = *(_QWORD *)(a1 + 160);
  if ( !*(_QWORD *)(a1 + 184) )
  {
    v11 = *(unsigned int *)(a1 + 192);
    if ( *(_DWORD *)(a1 + 192) )
    {
      if ( v11 == 10 )
        v12 = 0x1999999999999999LL;
      else
        v12 = 0xFFFFFFFFFFFFFFFFuLL / v11;
      if ( v12 < 0x18 )
        goto LABEL_26;
      v11 *= 24LL;
    }
    if ( ~v11 >= 8 )
    {
      v13 = (_QWORD *)o_malloc(v11 + 8);
      if ( v13 )
      {
        *v13 = *(_QWORD *)(a1 + 176);
        *(_QWORD *)(a1 + 176) = v13;
        v14 = *(_DWORD *)(a1 + 192) - 1;
        v15 = &v13[3 * (unsigned int)v14 + 1];
        while ( v14 >= 0 )
        {
          *v15 = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 184) = v15;
          v15 -= 3;
          --v14;
        }
        goto LABEL_17;
      }
    }
LABEL_26:
    sub_1800B8610(2147942414LL);
  }
LABEL_17:
  v16 = *(__int64 **)(a1 + 184);
  v17 = *v16;
  v16[2] = v8;
  *(_QWORD *)(a1 + 184) = v17;
  v16[1] = v10;
  *v16 = 0LL;
  ++*(_QWORD *)(a1 + 168);
  v18 = *(__int64 ***)(a1 + 160);
  if ( v18 )
    *v18 = v16;
  else
    *(_QWORD *)(a1 + 152) = v16;
  *(_QWORD *)(a1 + 160) = v16;
  if ( a1 != -112 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(qword_18019E640, *(_QWORD *)(a1 + 200));
  return v6;
}
