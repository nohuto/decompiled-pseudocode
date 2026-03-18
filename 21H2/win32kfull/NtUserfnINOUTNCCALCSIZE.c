/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1C00E79C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  __int128 *v12; // rdi
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+68h] [rbp-A0h]
  __int128 v17; // [rsp+80h] [rbp-88h]
  __int128 v18; // [rsp+90h] [rbp-78h]
  __int128 v19; // [rsp+A0h] [rbp-68h]
  __int128 *v20; // [rsp+B0h] [rbp-58h]
  __int128 v21; // [rsp+B8h] [rbp-50h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v10 = (_BYTE *)a4;
  if ( a3 )
  {
    if ( a4 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[55] = v10[55];
    v17 = *(_OWORD *)a4;
    v18 = *(_OWORD *)(a4 + 16);
    v19 = *(_OWORD *)(a4 + 32);
    v20 = *(__int128 **)(a4 + 48);
    v11 = v20;
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[39] = v11[39];
    v12 = v20;
    v14 = *v20;
    v15 = v20[1];
    v16 = *((_QWORD *)v20 + 4);
    v20 = &v14;
  }
  else
  {
    if ( a4 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[15] = v10[15];
    v21 = *(_OWORD *)a4;
    v12 = 0LL;
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
  if ( a3 )
  {
    *(_OWORD *)a4 = v17;
    *(_OWORD *)(a4 + 16) = v18;
    *(_OWORD *)(a4 + 32) = v19;
    *(_QWORD *)(a4 + 48) = v12;
    *v12 = v14;
    v12[1] = v15;
    *((_QWORD *)v12 + 4) = v16;
  }
  else
  {
    *(_OWORD *)a4 = v21;
  }
  return result;
}
