/*
 * XREFs of sub_140643B78 @ 0x140643B78
 * Callers:
 *     sub_1405D7328 @ 0x1405D7328 (sub_1405D7328.c)
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 *     sub_140605F04 @ 0x140605F04 (sub_140605F04.c)
 *     sub_1406069DC @ 0x1406069DC (sub_1406069DC.c)
 *     sub_1406434C4 @ 0x1406434C4 (sub_1406434C4.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     sub_140643B14 @ 0x140643B14 (sub_140643B14.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140643B78(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
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
