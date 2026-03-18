/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x1409BBD10
 * Callers:
 *     RtlIdnToAscii @ 0x1409BBC20 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1409BBC50 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     IdnaMemAlloc @ 0x1405EC7E0 (IdnaMemAlloc.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1405ECB04 (RtlpNameprepAsciiRealWorker.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, const WCHAR *a2, unsigned int a3, void *a4, LONG *a5, char a6)
{
  PVOID v10; // rdi
  const WCHAR *v11; // rax
  WCHAR *v12; // rbx
  unsigned int v13; // esi
  char v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+48h] [rbp-20h]

  v10 = IdnaMemAlloc(0x3FEuLL);
  v11 = (const WCHAR *)IdnaMemAlloc(0x406uLL);
  v12 = (WCHAR *)v11;
  if ( v10 && v11 )
  {
    v13 = RtlpNameprepAsciiRealWorker(a1, a2, a3, a4, a5, a6, v10, v15, v11, v16);
  }
  else
  {
    v13 = -1073741801;
    if ( !v10 )
      goto LABEL_6;
  }
  ExFreePoolWithTag(v10, 0);
LABEL_6:
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v13;
}
