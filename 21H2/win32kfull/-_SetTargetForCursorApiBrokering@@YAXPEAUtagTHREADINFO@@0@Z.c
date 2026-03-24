/*
 * XREFs of ?_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z @ 0x1C0007C7C
 * Callers:
 *     NtUserSetTargetForResourceBrokering @ 0x1C0007B60 (NtUserSetTargetForResourceBrokering.c)
 * Callees:
 *     <none>
 */

void __fastcall _SetTargetForCursorApiBrokering(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    *((_DWORD *)a1 + 308) |= 0x8000000u;
    *((_QWORD *)a1 + 186) = a2;
    *((_DWORD *)a2 + 308) &= ~0x8000000u;
    *((_QWORD *)a2 + 186) = a1;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 186);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 1488) = 0LL;
      *((_QWORD *)a1 + 186) = 0LL;
    }
    *((_DWORD *)a1 + 308) &= ~0x8000000u;
  }
}
