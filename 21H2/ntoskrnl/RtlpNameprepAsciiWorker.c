/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1409167F0
 * Callers:
 *     RtlIdnToAscii @ 0x140916700 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x140916730 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     IdnaMemAlloc @ 0x14058D3C0 (IdnaMemAlloc.c)
 *     RtlpNameprepAsciiRealWorker @ 0x14058D6E4 (RtlpNameprepAsciiRealWorker.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, wchar_t *a2, unsigned int a3, void *a4, LONG *a5, char a6)
{
  wchar_t *v10; // rdi
  PVOID v11; // rax
  void *v12; // rbx
  unsigned int v13; // esi
  char v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+48h] [rbp-20h]

  v10 = (wchar_t *)IdnaMemAlloc(0x3FEuLL);
  v11 = IdnaMemAlloc(0x406uLL);
  v12 = v11;
  if ( v10 && v11 )
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, v10, v15, v11, v16);
  else
    v13 = -1073741801;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v13;
}
