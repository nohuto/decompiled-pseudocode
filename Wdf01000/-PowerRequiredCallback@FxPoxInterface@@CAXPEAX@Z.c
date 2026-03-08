/*
 * XREFs of ?PowerRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C0010300
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0010236 (-PowerRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerRequiredCallbackWorker(Context, 1u);
}
