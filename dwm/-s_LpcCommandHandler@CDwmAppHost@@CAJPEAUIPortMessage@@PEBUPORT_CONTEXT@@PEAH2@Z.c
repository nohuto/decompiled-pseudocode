__int64 __fastcall CDwmAppHost::s_LpcCommandHandler(
        struct IPortMessage *a1,
        const struct PORT_CONTEXT *a2,
        const struct PORT_CONTEXT *a3,
        int *a4)
{
  return CDwmAppHost::ProcessLPCCommand(a1, a1, a3, (int *)a3, a4);
}
