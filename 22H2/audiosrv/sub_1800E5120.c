/*
 * XREFs of sub_1800E5120 @ 0x1800E5120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E5120(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  sub_1800461B8(&v9);
  v4 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 80))(*(_QWORD *)(a1 + 80), &unk_18015E450, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v6 = v9;
    }
    *a2 = v6;
    v5 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 790, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v4);
  }
  sub_1800461B8(&v9);
  return v5;
}
