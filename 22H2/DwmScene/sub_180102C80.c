/*
 * XREFs of sub_180102C80 @ 0x180102C80
 * Callers:
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 *     sub_1801041B0 @ 0x1801041B0 (sub_1801041B0.c)
 * Callees:
 *     sub_18006ADAC @ 0x18006ADAC (sub_18006ADAC.c)
 *     sub_1800DB9B0 @ 0x1800DB9B0 (sub_1800DB9B0.c)
 *     sub_1800DBC74 @ 0x1800DBC74 (sub_1800DBC74.c)
 *     sub_1800DBD34 @ 0x1800DBD34 (sub_1800DBD34.c)
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180102C80(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF

  v7 = a2;
  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  *(_QWORD *)&v14 = a1 + 8;
  sub_1801168B8(a1 + 8, a2);
  *(_DWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = a5;
  sub_18006ADAC(a5, a1 + 32);
  sub_1800DB9B0(a1 + 216);
  if ( sub_1800DBC74() )
  {
    v14 = 0LL;
    v9 = a4[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = a4[1];
    }
    *(_QWORD *)&v14 = *a4;
    *((_QWORD *)&v14 + 1) = v9;
    v15 = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a3[1];
    }
    *(_QWORD *)&v15 = *a3;
    *((_QWORD *)&v15 + 1) = v10;
    sub_1800DBD34((_QWORD *)(a1 + 32), &v15, &v14);
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (volatile signed __int32 *)a4[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
