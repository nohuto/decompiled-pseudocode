/*
 * XREFs of sub_180112944 @ 0x180112944
 * Callers:
 *     sub_1801112AC @ 0x1801112AC (sub_1801112AC.c)
 *     sub_180112490 @ 0x180112490 (sub_180112490.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_180113270 @ 0x180113270 (sub_180113270.c)
 *     sub_1801133F8 @ 0x1801133F8 (sub_1801133F8.c)
 * Callees:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_180112774 @ 0x180112774 (sub_180112774.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180112944(__int64 a1, _BYTE *a2, int a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  int v8; // edi
  int v9; // esi
  _BYTE *v10; // r14
  LPVOID v11; // r8
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+28h]
  LPVOID pv; // [rsp+88h] [rbp+48h] BYREF

  ppv = 0LL;
  sub_1800CB144((__int64 *)&ppv);
  v6 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = 0;
    while ( 2 )
    {
      v9 = 0;
      v10 = a2;
      do
      {
        if ( *v10 )
        {
          pv = 0LL;
          v14 = 0LL;
          if ( (int)sub_18000DF70(a1, 0, v8, v9, 0LL, (__int64)&v14) >= 0 )
          {
            sub_18002A504(&pv, 0LL);
            (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv);
          }
          v11 = &unk_18015C744;
          if ( pv )
            v11 = pv;
          v12 = sub_180112774(v8, v9, (__int64)v11, a3);
          v7 = v12;
          if ( v12 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              107,
              (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
              v12);
            if ( pv )
              CoTaskMemFree(pv);
            sub_18000F708(&v14);
            goto LABEL_17;
          }
          if ( pv )
            CoTaskMemFree(pv);
          sub_18000F708(&v14);
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 9 );
      ++v8;
      a2 += 9;
      if ( v8 < 2 )
        continue;
      break;
    }
    v7 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 84, (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp", v6);
  }
LABEL_17:
  sub_18000F708((__int64 *)&ppv);
  return v7;
}
