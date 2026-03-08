/*
 * XREFs of xxxSendTransformableMessage @ 0x1C012EE0C
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        int a5)
{
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1, a5);
}
