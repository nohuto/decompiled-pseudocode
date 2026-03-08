/*
 * XREFs of MiCloneImageVad @ 0x140660B9C
 * Callers:
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 *     MiCopyForkedFixupVad @ 0x140A453A0 (MiCopyForkedFixupVad.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int SessionId; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v3 & 0x200000) == 0 && (v3 & 0x70) == 0x20 && (v3 & 0x400000) != 0 )
  {
    v6 = 1;
    MiCopyForkedFixupVad(a2, a3);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 368LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x8000000) == 0 )
    return 0LL;
  SessionId = MmGetSessionIdEx(a1);
  result = MiCreatePerSessionProtos(v5, SessionId);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 )
    --*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 368LL);
  return result;
}
