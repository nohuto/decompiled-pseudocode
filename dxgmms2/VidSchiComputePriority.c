/*
 * XREFs of VidSchiComputePriority @ 0x1C00ACEB0
 * Callers:
 *     VidSchSetPriorityContext @ 0x1C00ACE20 (VidSchSetPriorityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputePriority(__int64 a1, int a2, int a3, char a4, _DWORD *a5)
{
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // eax

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 2536) & 2) != 0 )
  {
    *a5 = KeQueryPriorityThread(KeGetCurrentThread());
    return 0LL;
  }
  v9 = 7;
  if ( a2 <= 7 )
  {
    v9 = a2;
    if ( a2 < -7 )
      v9 = -7;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  v11 = dword_1C005506C[15 * *(int *)(v10 + 24) + v9];
  *a5 = v11;
  if ( v11 < 0x1E
    || a3
    || *(_BYTE *)(v10 + 2633)
    || (*(_DWORD *)(*(_QWORD *)(v10 + 8) + 424LL) & 2) != 0
    || SeSinglePrivilegeCheck((LUID)14LL, 1) )
  {
    if ( (*(_DWORD *)(v8 + 2536) & 0x400) != 0 && (a4 & 1) != 0 && *a5 < 0x10u )
      *a5 = 16;
    return 0LL;
  }
  return 3221225506LL;
}
