/*
 * XREFs of NeedGlobalLock @ 0x1C00524B8
 * Callers:
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 * Callees:
 *     <none>
 */

bool __fastcall NeedGlobalLock(_DWORD *a1)
{
  int v1; // r8d
  bool v2; // dl
  __int64 v4; // rax
  __int16 v5; // cx
  _QWORD *v6; // r10

  v1 = a1[5];
  v2 = 0;
  if ( (v1 & 0x80000010) != 0 )
    goto LABEL_8;
  v4 = *(_QWORD *)a1;
  v5 = *(_WORD *)(*(_QWORD *)a1 + 66LL);
  if ( v5 != 130 )
  {
    if ( v5 != 132 )
      return v2;
    v6 = *(_QWORD **)(v4 + 96);
    if ( (*(_DWORD *)(*(_QWORD *)(*v6 + 96LL) + 20LL) & 0x10) == 0
      && (*(_DWORD *)(*(_QWORD *)(v6[1] + 96LL) + 20LL) & 0x10) == 0 )
    {
      return v2;
    }
LABEL_8:
    v2 = 1;
LABEL_9:
    a1[5] = v1 | 0x80000000;
    return v2;
  }
  v2 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL) + 20LL) & 0x10) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL) + 20LL) & 0x10) != 0 )
    goto LABEL_9;
  return v2;
}
