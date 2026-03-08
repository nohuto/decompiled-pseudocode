/*
 * XREFs of ?vSolidFillRectWithCallback@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C03058F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSolidFillRectWithCallback(
        struct _RECTL *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5)
{
  void (__fastcall *v5)(unsigned __int8 *, _QWORD, struct _RECTL *); // rbp
  __int64 v8; // rsi

  if ( a2 )
  {
    v5 = (void (__fastcall *)(unsigned __int8 *, _QWORD, struct _RECTL *))*((_QWORD *)a3 + 1);
    v8 = a2;
    do
    {
      v5(a3, a5, a1++);
      --v8;
    }
    while ( v8 );
  }
}
