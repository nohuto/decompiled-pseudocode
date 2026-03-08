/*
 * XREFs of EditionPointerActivate @ 0x1C0146940
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 */

void __fastcall EditionPointerActivate(
        __int64 a1,
        __int16 a2,
        unsigned __int64 a3,
        const struct tagPOINTEREVENTINT *a4)
{
  int v4; // [rsp+20h] [rbp-18h]

  xxxPointerActivateInternal(*(struct tagWND **)(a1 + 80), a2, a3, a4, v4);
}
