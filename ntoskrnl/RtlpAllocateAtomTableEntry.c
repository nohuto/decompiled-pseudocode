/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x140355098
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     RtlpAllocateAtom @ 0x1407DBAB0 (RtlpAllocateAtom.c)
 *     RtlpFreeAtom @ 0x1407DC628 (RtlpFreeAtom.c)
 */

__int64 __fastcall RtlpAllocateAtomTableEntry(unsigned int a1, __int64 *a2, char a3)
{
  unsigned __int64 v4; // rcx
  __int64 Atom; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  int LowBoxId; // ebp
  __int64 v10; // rax
  __int64 v12; // rcx

  v4 = a1 + 44LL;
  if ( v4 >= 0x2C )
  {
    Atom = RtlpAllocateAtom(v4, 1097692225LL);
    v7 = Atom;
    if ( Atom )
    {
      *(_QWORD *)Atom = 0LL;
      *(_WORD *)(Atom + 36) = 1;
      *(_WORD *)(Atom + 38) = a3 & 2;
      v8 = Atom + 16;
      *(_QWORD *)(Atom + 24) = Atom + 16;
      *(_QWORD *)(Atom + 16) = Atom + 16;
      *(_DWORD *)(Atom + 32) = 0;
      LowBoxId = RtlpQueryLowBoxId();
      if ( !LowBoxId )
      {
        v10 = v8;
LABEL_5:
        *a2 = v10;
        return v7;
      }
      v10 = RtlpAllocateAtom(24LL, 1282241601LL);
      if ( v10 )
      {
        *(_DWORD *)(v10 + 20) = 1;
        *(_DWORD *)(v10 + 16) = LowBoxId;
        v12 = *(_QWORD *)v8;
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
          __fastfail(3u);
        *(_QWORD *)v10 = v12;
        *(_QWORD *)(v10 + 8) = v8;
        *(_QWORD *)(v12 + 8) = v10;
        *(_QWORD *)v8 = v10;
        goto LABEL_5;
      }
      RtlpFreeAtom(v7);
    }
  }
  return 0LL;
}
