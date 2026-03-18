/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C005CF18
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C005AEE0 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C005CA00 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1C005CD5C (--0IOCPDispatcher@@IEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1C005CE7C (--0CRIMBase@@IEAA@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
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
