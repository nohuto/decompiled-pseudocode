/*
 * XREFs of Simulator_TestNotifyRet @ 0x1C00499A8
 * Callers:
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x1C0048A7C (AMLIRegEventHandler.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C0048F10 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotifyRet(_DWORD *Argument1, int a2)
{
  if ( g_SimulatorCallbackObject )
  {
    Argument1[18] = a2;
    Argument1[2] = 2;
    ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
    return (unsigned int)Argument1[18];
  }
  else
  {
    __debugbreak();
    return 3221225473LL;
  }
}
