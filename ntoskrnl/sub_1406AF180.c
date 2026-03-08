/*
 * XREFs of sub_1406AF180 @ 0x1406AF180
 * Callers:
 *     sub_1406AF110 @ 0x1406AF110 (sub_1406AF110.c)
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     sub_1406AF4BC @ 0x1406AF4BC (sub_1406AF4BC.c)
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 *     sub_1407559C8 @ 0x1407559C8 (sub_1407559C8.c)
 *     sub_140770F08 @ 0x140770F08 (sub_140770F08.c)
 *     sub_140773AA8 @ 0x140773AA8 (sub_140773AA8.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1406AF180(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // esi
  int v11; // ebx
  int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

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
              *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v11) + *(_QWORD *)(a1 + 16)),
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
  result = (unsigned int)v12;
  if ( a4 )
  {
    if ( v12 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(*(_DWORD *)a1 * v11) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
