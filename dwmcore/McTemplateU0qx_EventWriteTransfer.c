/*
 * XREFs of McTemplateU0qx_EventWriteTransfer @ 0x1801E4EBC
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801E493C (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___ @ 0x180206CE0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x180206DB0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z @ 0x180206F20 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x180206FB0 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0qx_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  v11 = a3;
  v5 = &v11;
  v7 = 0;
  v6 = 4;
  va_copy(v8, va);
  v10 = 0;
  v9 = 8;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 3u, &v4);
}
