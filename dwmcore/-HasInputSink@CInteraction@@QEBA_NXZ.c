/*
 * XREFs of ?HasInputSink@CInteraction@@QEBA_NXZ @ 0x180032158
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteraction::HasInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 13);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 64);
  return v2 != 0;
}
