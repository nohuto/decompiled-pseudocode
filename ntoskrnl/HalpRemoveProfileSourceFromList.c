/*
 * XREFs of HalpRemoveProfileSourceFromList @ 0x140505E80
 * Callers:
 *     EmonRemoveProfileSource @ 0x14051BF80 (EmonRemoveProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x140527A10 (Amd64RemoveProfileSource.c)
 * Callees:
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     HalpGetProfileDescriptor @ 0x1403781E0 (HalpGetProfileDescriptor.c)
 */

char __fastcall HalpRemoveProfileSourceFromList(int *a1, __int64 a2, _QWORD *a3)
{
  int v3; // ecx
  __int64 *v4; // r10
  __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  char result; // al
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  *a3 = 0LL;
  v3 = *a1;
  v11 = 0LL;
  if ( (int)HalpGetProfileDescriptor(v3, a2, &v11) < 0 )
    return 0;
  v6 = v11;
  v7 = 0;
  *v4 = v11;
  if ( v6 != -32 )
    v7 = *(_WORD *)(v6 + 34);
  if ( (unsigned int)KiSubtractAffinityEx((unsigned __int16 *)(v6 + 32), (char *)(v5 + 8), (_BYTE *)(v6 + 32), v7) )
    return 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v8 + 8) != v6 + 8 || (v9 = *(_QWORD **)(v6 + 16), *v9 != v6 + 8) )
    __fastfail(3u);
  *v9 = v8;
  result = 1;
  *(_QWORD *)(v8 + 8) = v9;
  return result;
}
