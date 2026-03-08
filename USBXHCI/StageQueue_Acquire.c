/*
 * XREFs of StageQueue_Acquire @ 0x1C001227C
 * Callers:
 *     Bulk_Stage_Acquire @ 0x1C001224C (Bulk_Stage_Acquire.c)
 *     Isoch_Stage_Acquire @ 0x1C0045208 (Isoch_Stage_Acquire.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall StageQueue_Acquire(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  unsigned int v3; // r10d
  int v4; // ecx
  __int64 v5; // rax
  unsigned __int8 *v6; // r9

  v1 = a1[2];
  v3 = a1[1];
  if ( v1 == (_BYTE)v3 )
    return 0LL;
  v4 = a1[3];
  v5 = v4 * (unsigned int)*a1;
  a1[2] = v1 + 1;
  v6 = &a1[v5 + 16];
  a1[3] = (v4 + 1) % v3;
  return v6;
}
