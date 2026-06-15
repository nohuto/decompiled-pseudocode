/*
 * XREFs of sub_1800F61F8 @ 0x1800F61F8
 * Callers:
 *     sub_1800DC6A0 @ 0x1800DC6A0 (sub_1800DC6A0.c)
 * Callees:
 *     sub_18001B8D0 @ 0x18001B8D0 (sub_18001B8D0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800F5ED4 @ 0x1800F5ED4 (sub_1800F5ED4.c)
 *     sub_1800F6794 @ 0x1800F6794 (sub_1800F6794.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F61F8(__int64 a1, int a2, _QWORD **a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = a1;
  EnterCriticalSection(&stru_18019EF98);
  if ( byte_18019EF90 )
  {
    if ( a2 < 0 )
    {
      v9 = sub_18001B8D0(v5, a3, &v15, &v14, &stru_18019EF98);
      v6 = v9;
      if ( v9 < 0 )
      {
        v8 = 263;
LABEL_10:
        v7 = v9;
        goto LABEL_11;
      }
      ++*(_DWORD *)(200LL * (int)v14 + v15 + 156);
      sub_1800F5ED4(200LL * (int)v14, a2, (_DWORD *)(200LL * (int)v14 + v15 + 176));
      v10 = 200LL * (int)v14;
      v11 = v15;
      if ( !*(_DWORD *)(v10 + v15 + 148) )
      {
        *(_DWORD *)(v10 + v15 + 148) = 1;
        v11 = v15;
      }
      v9 = sub_1800F6794(&byte_18019EF90, v11);
      v6 = v9;
      if ( v9 < 0 )
      {
        v8 = 272;
        goto LABEL_10;
      }
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = -2147418113;
  v7 = -2147418113;
  v8 = 257;
LABEL_11:
  sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v7);
LABEL_13:
  LeaveCriticalSection(&stru_18019EF98);
  return v6;
}
