_QWORD *__fastcall CMegaRectBatchCommand::CMegaRectBatchCommand(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        __int64 a5)
{
  CRenderingBatchCommand::CRenderingBatchCommand(a1, 4LL, a2, a3, LODWORD(a4), a5);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  return a1;
}
