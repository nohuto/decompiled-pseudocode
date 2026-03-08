/*
 * XREFs of ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400023E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002400 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 */

__int64 __fastcall CDwmAppHost::s_LpcCommandHandler(
        struct IPortMessage *a1,
        const struct PORT_CONTEXT *a2,
        const struct PORT_CONTEXT *a3,
        int *a4)
{
  return CDwmAppHost::ProcessLPCCommand(a1, a1, a3, (int *)a3, a4);
}
