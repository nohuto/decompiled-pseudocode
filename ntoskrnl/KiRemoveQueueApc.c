/*
 * XREFs of KiRemoveQueueApc @ 0x1402F742C
 * Callers:
 *     KeRemoveQueueApc @ 0x1402F7360 (KeRemoveQueueApc.c)
 *     KiSchedulerApc @ 0x140353560 (KiSchedulerApc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiRemoveQueueApc(__int64 a1)
{
  char v1; // r8
  _QWORD *v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdx
  _QWORD *v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r9

  v1 = *(_BYTE *)(a1 + 82);
  if ( v1 )
  {
    v3 = (_QWORD *)(a1 + 16);
    v4 = *(char *)(a1 + 81);
    v5 = *(_QWORD *)(a1 + 8) + 152LL;
    *(_BYTE *)(a1 + 82) = 0;
    v6 = *(_QWORD **)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 24);
    if ( v6[1] != a1 + 16 || (_QWORD *)*v7 != v3 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    if ( v7 == v6 )
    {
      v8 = v5 + 16 * v4;
      if ( *v3 == v8 && *(_QWORD *)(a1 + 24) == v8 )
      {
        if ( (_BYTE)v4 )
          *(_BYTE *)(v5 + 42) &= ~2u;
        else
          *(_BYTE *)(v5 + 41) = 0;
      }
    }
  }
  return v1;
}
