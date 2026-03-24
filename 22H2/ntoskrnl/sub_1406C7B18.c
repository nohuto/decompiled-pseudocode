/*
 * XREFs of sub_1406C7B18 @ 0x1406C7B18
 * Callers:
 *     sub_1405D7328 @ 0x1405D7328 (sub_1405D7328.c)
 *     sub_140667ED4 @ 0x140667ED4 (sub_140667ED4.c)
 *     sub_14068787C @ 0x14068787C (sub_14068787C.c)
 *     sub_14068BA0C @ 0x14068BA0C (sub_14068BA0C.c)
 *     sub_1406C7464 @ 0x1406C7464 (sub_1406C7464.c)
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 *     sub_1406C7AB4 @ 0x1406C7AB4 (sub_1406C7AB4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1406C7B18(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_8;
    }
    v12 = 0;
  }
LABEL_8:
  if ( a5 )
    *a5 = v11;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  return (unsigned int)v12;
}
