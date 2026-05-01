/*
 * XREFs of ?InvokeAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x1803FDDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewHost::InvokeAnimationFinished(CSnapAssistViewHost *this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
}
