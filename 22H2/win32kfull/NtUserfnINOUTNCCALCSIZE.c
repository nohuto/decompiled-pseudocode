/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1C00FD690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 *v8; // rdi
  _OWORD *v9; // rax
  __int128 *v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+68h] [rbp-80h]
  __int128 v15; // [rsp+80h] [rbp-68h]
  __int128 v16; // [rsp+90h] [rbp-58h]
  __int128 v17; // [rsp+A0h] [rbp-48h]
  __int128 *v18; // [rsp+B0h] [rbp-38h]
  __int128 v19; // [rsp+B8h] [rbp-30h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    if ( a4 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a4;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 48) = *(_QWORD *)(a4 + 48);
    v15 = *(_OWORD *)a4;
    v16 = *(_OWORD *)(a4 + 16);
    v17 = *(_OWORD *)(a4 + 32);
    v18 = *(__int128 **)(a4 + 48);
    v10 = v18;
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
    {
      *(_DWORD *)MmUserProbeAddress = 0;
      v10 = v18;
    }
    *v10 = *v10;
    v10[1] = v10[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v10 + 4);
    v8 = v18;
    v12 = *v18;
    v13 = v18[1];
    v14 = *((_QWORD *)v18 + 4);
    v18 = &v12;
  }
  else
  {
    v9 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v19 = *(_OWORD *)a4;
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
  if ( a3 )
  {
    *(_OWORD *)a4 = v15;
    *(_OWORD *)(a4 + 16) = v16;
    *(_OWORD *)(a4 + 32) = v17;
    *(_QWORD *)(a4 + 48) = v8;
    *v8 = v12;
    v8[1] = v13;
    *((_QWORD *)v8 + 4) = v14;
  }
  else
  {
    *(_OWORD *)a4 = v19;
  }
  return result;
}
