/*
 * XREFs of sub_1407E3440 @ 0x1407E3440
 * Callers:
 *     WbFindWarbirdProcess @ 0x1407E1754 (WbFindWarbirdProcess.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 *     sub_1407E1B90 @ 0x1407E1B90 (sub_1407E1B90.c)
 *     WbFindHeapExecutedBlock @ 0x1407E1FE0 (WbFindHeapExecutedBlock.c)
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 *     sub_140A0F874 @ 0x140A0F874 (sub_140A0F874.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1407E3440(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // esi
  int v6; // edi
  int v11; // ebx
  int v12; // ebp
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
        goto LABEL_9;
    }
    v12 = 0;
  }
LABEL_9:
  if ( a5 )
    *a5 = v11;
  result = (unsigned int)v12;
  if ( a4 )
  {
    if ( v12 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
