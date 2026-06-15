/*
 * XREFs of sub_180115BB8 @ 0x180115BB8
 * Callers:
 *     sub_180115D60 @ 0x180115D60 (sub_180115D60.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_1800DC664 @ 0x1800DC664 (sub_1800DC664.c)
 *     sub_1801155A0 @ 0x1801155A0 (sub_1801155A0.c)
 *     sub_180115A5C @ 0x180115A5C (sub_180115A5C.c)
 *     sub_180115AC0 @ 0x180115AC0 (sub_180115AC0.c)
 */

__int64 __fastcall sub_180115BB8(unsigned int a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  const wchar_t *v23; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v23 = sub_1801155A0(a1);
    sub_1800B7704((__int64)&dword_18019C4B8, byte_180169BB7, v4, v5, (void **)&v23);
  }
  v6 = *(_QWORD *)(a2 + 12) - 0x11D093EF6994AD04LL;
  if ( *(_QWORD *)(a2 + 12) == 0x11D093EF6994AD04LL )
    v6 = *(_QWORD *)(a2 + 20) + 0x69CEDD365FFF335DLL;
  if ( !v6 )
    goto LABEL_12;
  v7 = *(_QWORD *)(a2 + 12) - 0x4B33EDE803B80E5ALL;
  if ( *(_QWORD *)(a2 + 12) == 0x4B33EDE803B80E5ALL )
    v7 = *(_QWORD *)(a2 + 20) - 0xC7C44EE36C51A7LL;
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_QWORD *)(a2 + 12) - 0x4FA665AC9F2F7B66LL;
  if ( *(_QWORD *)(a2 + 12) == 0x4FA665AC9F2F7B66LL )
    v8 = *(_QWORD *)(a2 + 20) - 0x1393B8783C12E48ALL;
  if ( !v8 )
  {
LABEL_12:
    if ( *(_DWORD *)(a2 + 4) != 5 )
    {
      v13 = 783;
      goto LABEL_32;
    }
    v9 = a1 - 0x8000;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
              v13 = 778;
LABEL_32:
              sub_1800DC664(
                (int)retaddr,
                v13,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                0x80070078);
              return 0LL;
            }
            v14 = sub_180115A5C(a2);
            if ( v14 < 0 )
            {
              v15 = v14;
              v16 = 775;
LABEL_30:
              sub_18006D26C(
                (int)retaddr,
                v16,
                (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
                v15);
            }
          }
          else
          {
            v17 = sub_180115A5C(a2);
            if ( v17 < 0 )
            {
              v15 = v17;
              v16 = 772;
              goto LABEL_30;
            }
          }
        }
      }
      else
      {
        v18 = sub_180115AC0(2, (unsigned int *)a2);
        if ( v18 < 0 )
        {
          v15 = v18;
          v16 = 769;
          goto LABEL_30;
        }
      }
    }
    else
    {
      v19 = sub_180115AC0(0, (unsigned int *)a2);
      v20 = v19;
      if ( v19 >= 0 )
        v20 = 0;
      else
        sub_18004BD84((int)retaddr, 536, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp", v19);
      if ( v20 < 0 )
      {
        v15 = v20;
        v16 = 764;
        goto LABEL_30;
      }
    }
  }
  return 0LL;
}
