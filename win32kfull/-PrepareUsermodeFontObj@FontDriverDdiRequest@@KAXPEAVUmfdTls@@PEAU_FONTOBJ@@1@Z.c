void __fastcall FontDriverDdiRequest::PrepareUsermodeFontObj(
        struct UmfdTls *a1,
        struct _FONTOBJ *a2,
        struct _FONTOBJ *a3)
{
  ULONG ulStyleSize; // eax

  a3->iUniq = a2->iUniq;
  a3->iFace = a2->iFace;
  a3->cxMax = a2->cxMax;
  a3->flFontType = a2->flFontType;
  a3->iTTUniq = a2->iTTUniq;
  a3->iFile = *(_QWORD *)a2->iFile;
  a3->sizLogResPpi = a2->sizLogResPpi;
  ulStyleSize = a2->ulStyleSize;
  a3->pvConsumer = 0LL;
  a3->ulStyleSize = ulStyleSize;
  a3->pvProducer = a2->pvProducer;
  *((_QWORD *)a1 + 5) = a2;
}
