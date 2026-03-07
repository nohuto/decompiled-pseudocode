__int64 __fastcall CCpuClipAntialiasBatchCommand::CCpuClipAntialiasBatchCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        __int64 a5)
{
  CRenderingBatchCommand::CRenderingBatchCommand(a1, 5LL, a2, a3, LODWORD(a4), a5);
  *(_DWORD *)(a1 + 176) = 0;
  return a1;
}
