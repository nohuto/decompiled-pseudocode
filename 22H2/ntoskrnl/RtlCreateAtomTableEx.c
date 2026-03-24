/*
 * XREFs of RtlCreateAtomTableEx @ 0x14032D350
 * Callers:
 *     RtlCreateAtomTable @ 0x1406A6AF0 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpFreeAtom @ 0x1406862EC (RtlpFreeAtom.c)
 *     RtlpInitializeLockAtomTable @ 0x1406A6B0C (RtlpInitializeLockAtomTable.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x1406A6B1C (RtlpInitializeHandleTableForAtomTable.c)
 *     RtlpAllocateAtom @ 0x1406A6C84 (RtlpAllocateAtom.c)
 */

NTSTATUS __fastcall RtlCreateAtomTableEx(unsigned int a1, int a2, _QWORD *a3)
{
  int v3; // edi
  int v6; // ebp
  NTSTATUS result; // eax
  size_t v8; // rsi
  _DWORD *Atom; // rax
  _DWORD *v10; // rbx
  ULONGLONG v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = 0;
  if ( *a3 )
    return v3;
  v6 = 37;
  if ( a1 > 1 )
    v6 = a1;
  result = RtlULongLongMult(0x30uLL, (unsigned int)(v6 - 1), &v11);
  if ( result >= 0 )
  {
    v8 = v11 + 40;
    if ( v11 + 40 < v11 )
      return -1073741675;
    Atom = (_DWORD *)RtlpAllocateAtom(v11 + 40, 1416459329LL);
    v10 = Atom;
    if ( !Atom )
      return -1073741801;
    memset(Atom, 0, v8);
    v10[7] = v6;
    if ( (unsigned __int8)RtlpInitializeHandleTableForAtomTable(v10) )
    {
      RtlpInitializeLockAtomTable(v10);
      *v10 = 1836020801;
      v10[1] = 1;
      v10[6] = a2;
      *a3 = v10;
    }
    else
    {
      v3 = -1073741801;
      RtlpFreeAtom(v10);
    }
    return v3;
  }
  return result;
}
