/*
 * XREFs of ObCreateObject @ 0x1407023B0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071E360 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094798C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A5AC (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  char *v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
