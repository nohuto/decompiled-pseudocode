/*
 * XREFs of sub_180047E7C @ 0x180047E7C
 * Callers:
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 * Callees:
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180047E7C(_QWORD *a1, int a2, int a3, int a4)
{
  unsigned __int32 v6; // esi
  int v7; // eax
  int v8; // ebx
  void *v9; // rcx
  int v10; // eax
  void *v11; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  LPVOID v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  int v18; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h]
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  if ( (unsigned int)dword_18019C448 > 4 && (byte_18019C458 & 0x10) != 0 && (qword_18019C460 & 0x10) == qword_18019C460 )
  {
    v18 = a2;
    v20 = a1[3];
    sub_1800512F4((unsigned int)&dword_18019C448, (unsigned int)&unk_180169C11, a3, a4, (__int64)&v20, (__int64)&v18);
  }
  v6 = 3;
  if ( a2 != 3 )
    v6 = 0;
  v7 = sub_180047F60(a1);
  pv = 0LL;
  v15 = 0LL;
  v16 = 1;
  v8 = sub_180047DDC(a1, 0, v7 != 0, v6, &v15);
  if ( v16 )
  {
    v9 = pv;
    pv = v15;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( v8 < 0 )
  {
    v13 = (unsigned int)v8;
    v14 = 8942LL;
  }
  else
  {
    v10 = sub_180048018(a1, v6, pv, 0LL);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    v13 = (unsigned int)v10;
    v14 = 8944LL;
  }
  sub_18004BD84(retaddr, v14, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v13);
LABEL_11:
  v11 = pv;
  pv = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)v8;
}
