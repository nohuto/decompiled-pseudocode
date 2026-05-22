/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18007DB1C
 * Callers:
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x18007D314 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ??0FlickRecognizer@@QEAA@XZ @ 0x18018384C (--0FlickRecognizer@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
