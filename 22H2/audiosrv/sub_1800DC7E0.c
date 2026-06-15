/*
 * XREFs of sub_1800DC7E0 @ 0x1800DC7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 __fastcall sub_1800DC7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v9; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  char v17; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v9 = -2004287487;
    v10 = 2333;
LABEL_7:
    sub_18004BD84((int)retaddr, v10, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v9);
    goto LABEL_17;
  }
  v11 = *(_QWORD *)(a1 + 192);
  if ( !v11 )
  {
    v9 = -2004287487;
    v10 = 2334;
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(a1 + 432) )
  {
    v9 = -2147024809;
    v10 = 2336;
    goto LABEL_7;
  }
  v19 = 0LL;
  v16 = 0LL;
  v17 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v11 + 8) + 128LL))(v11 + 8, &v16);
  if ( v17 )
    sub_1800D2EA8(&v19, v16);
  if ( v9 >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, bool))(*(_QWORD *)v19 + 96LL))(
            v19,
            *(_QWORD *)(*(_QWORD *)(a1 + 192) + 56LL),
            a2,
            a3,
            a4,
            *(_DWORD *)(a1 + 552) == 3);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v9 = 0;
      goto LABEL_16;
    }
    v12 = v14;
    v13 = 2343;
  }
  else
  {
    v12 = v9;
    v13 = 2340;
  }
  sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
LABEL_16:
  sub_18000F708(&v19);
LABEL_17:
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v9;
}
