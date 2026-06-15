/*
 * XREFs of sub_1800DBBD0 @ 0x1800DBBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DD840 @ 0x1800DD840 (sub_1800DD840.c)
 */

__int64 __fastcall sub_1800DBBD0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v7 = -2004287487;
    v8 = 2289;
LABEL_17:
    sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v7);
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v7 = -2004287487;
    v8 = 2290;
    goto LABEL_17;
  }
  v9 = sub_1800DD840(a1, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 216LL);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3);
      if ( v12 == -2005139384 )
        v12 = -2147024809;
      v7 = v12;
      if ( v12 >= 0 )
        v7 = 0;
      else
        sub_18004BD84((int)retaddr, 534, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v12);
      if ( v7 >= 0 )
      {
        v7 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v7 = -2147024809;
      sub_18004BD84((int)retaddr, 524, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024809);
    }
    v8 = 2296;
    goto LABEL_17;
  }
  v7 = -2005139336;
  if ( v9 != -2005139336 )
  {
    sub_18004BD84((int)retaddr, 2291, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v9);
    v7 = v10;
  }
LABEL_19:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
