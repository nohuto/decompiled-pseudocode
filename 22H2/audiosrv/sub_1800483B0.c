/*
 * XREFs of sub_1800483B0 @ 0x1800483B0
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_1800720A4 @ 0x1800720A4 (sub_1800720A4.c)
 * Callees:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004D600 @ 0x18004D600 (sub_18004D600.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180125838 @ 0x180125838 (sub_180125838.c)
 */

__int64 __fastcall sub_1800483B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // r14d
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-49h]
  __int128 v12; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall **v14)(); // [rsp+68h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 (__fastcall ***v17)(); // [rsp+A0h] [rbp+37h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  char v19; // [rsp+D8h] [rbp+6Fh] BYREF

  v3 = a3;
  v4 = a2;
  if ( !a2 )
  {
    v6 = 7135LL;
LABEL_3:
    sub_18004BD84(
      retaddr,
      v6,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147500035LL);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v6 = 7136LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 188) )
  {
    sub_180125838(a1 + 1768, *(_QWORD *)(a1 + 24));
  }
  else
  {
    sub_1800271DC((unsigned __int64 *)a1, &v12);
    v19 = 0;
    *(_QWORD *)v13 = a1;
    v8 = *(_QWORD *)qword_18019F760;
    *(_OWORD *)&v13[8] = v12;
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(v8 + 48))(qword_18019F760, &v19);
    v10 = v9;
    if ( v9 < 0 )
    {
      sub_18004BD84(
        retaddr,
        7161LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v9);
      return v10;
    }
    v14 = off_180154CC8;
    v16 = *(_QWORD *)&v13[16];
    v17 = &v14;
    v11 = *(_QWORD *)(a1 + 40);
    v15 = *(_OWORD *)v13;
    sub_18004997C(a1 + 1768, a1, v4, v3, v11, (__int64)&v19, (__int64)&v14);
    sub_18004D600(a1, 14LL);
  }
  return 0LL;
}
