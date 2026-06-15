/*
 * XREFs of sub_1800F6478 @ 0x1800F6478
 * Callers:
 *     sub_180050620 @ 0x180050620 (sub_180050620.c)
 *     sub_1800DC750 @ 0x1800DC750 (sub_1800DC750.c)
 * Callees:
 *     sub_18001B8D0 @ 0x18001B8D0 (sub_18001B8D0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800F5ED4 @ 0x1800F5ED4 (sub_1800F5ED4.c)
 *     sub_1800F6794 @ 0x1800F6794 (sub_1800F6794.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F6478(__int64 a1, int a2, _QWORD **a3, double a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD v15[2]; // [rsp+20h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v17; // [rsp+50h] [rbp+10h] BYREF

  v17 = a1;
  EnterCriticalSection(&stru_18019EF98);
  v15[1] = &stru_18019EF98;
  if ( byte_18019EF90 )
  {
    v10 = sub_18001B8D0(v6, a3, v15, &v17);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v11 = 200LL * (int)v17;
      if ( a2 >= 0 )
      {
        *(double *)(v11 + v15[0] + 168) = a4 + *(double *)(v11 + v15[0] + 168);
      }
      else
      {
        ++*(_DWORD *)(v11 + v15[0] + 164);
        sub_1800F5ED4(200LL * (int)v17, a2, (_DWORD *)(200LL * (int)v17 + v15[0] + 176LL));
      }
      v12 = 200LL * (int)v17;
      v13 = v15[0];
      if ( !*(_DWORD *)(v12 + v15[0] + 148) )
      {
        *(_DWORD *)(v12 + v15[0] + 148) = 1;
        v13 = v15[0];
      }
      v10 = sub_1800F6794(&byte_18019EF90, v13);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v7 = 0;
        goto LABEL_15;
      }
      v9 = 336;
    }
    else
    {
      v9 = 314;
    }
    v8 = v10;
  }
  else
  {
    v7 = -2147418113;
    v8 = -2147418113;
    v9 = 312;
  }
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v8);
LABEL_15:
  LeaveCriticalSection(&stru_18019EF98);
  return v7;
}
