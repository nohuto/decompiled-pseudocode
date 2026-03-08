/*
 * XREFs of Bulk_Stage_Initialize @ 0x1C001262C
 * Callers:
 *     Bulk_Stage_Acquire @ 0x1C001224C (Bulk_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_Stage_Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a2 + 16) = a2 + 8;
  *(_QWORD *)(a2 + 8) = a2 + 8;
  *(_QWORD *)a2 = a1;
  *(_QWORD *)(a2 + 32) = a2 + 24;
  *(_QWORD *)(a2 + 24) = a2 + 24;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  *(_BYTE *)(a2 + 44) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(v2 + 176);
  *(_DWORD *)(a2 + 104) = *(_DWORD *)(v2 + 192);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(v2 + 176);
  result = *(unsigned int *)(v2 + 192);
  *(_DWORD *)(a2 + 120) = result;
  *(_DWORD *)(a2 + 160) = 0;
  if ( *(_BYTE *)(v2 + 280) )
  {
    result = a2 + 168;
    *(_QWORD *)(a2 + 184) = 0LL;
    *(_DWORD *)(a2 + 168) = 1;
    *(_QWORD *)(a2 + 56) = a2 + 168;
    *(_DWORD *)(a2 + 192) = 0;
  }
  *(_OWORD *)(a2 + 128) = 0LL;
  *(_OWORD *)(a2 + 144) = 0LL;
  return result;
}
