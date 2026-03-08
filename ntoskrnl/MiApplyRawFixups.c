/*
 * XREFs of MiApplyRawFixups @ 0x140A45280
 * Callers:
 *     MiPerformFixups @ 0x14069F3D0 (MiPerformFixups.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiDoSingleFixup @ 0x140A45404 (MiDoSingleFixup.c)
 */

__int64 __fastcall MiApplyRawFixups(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r8
  ULONG_PTR v6; // r9
  _WORD *v8; // r10
  __int64 result; // rax
  __int64 v10; // rbx
  ULONG_PTR BugCheckParameter4; // r10
  int v12; // r11d

  v4 = (_DWORD *)(a3 & 0xFFFFFFFFFFFFFFFEuLL);
  v6 = a2;
  v8 = v4 + 2;
  result = *v4 & 0xFFF;
  if ( (unsigned int)(v4[1] - 8) >> 1 )
  {
    v10 = (unsigned int)result;
    do
    {
      result = MiDoSingleFixup(v6 + v10 + (*v8 & 0xFFF), *v8 >> 12, a4);
      if ( !(_DWORD)result )
        KeBugCheckEx(0x1Au, 0x30uLL, BugCheckParameter2, v6, BugCheckParameter4);
      v8 = (_WORD *)(BugCheckParameter4 + 2);
    }
    while ( v12 );
  }
  return result;
}
