__int64 __fastcall IopDmaInitialize(__int64 a1, int a2)
{
  qword_140C5C0F8 = (__int64)IopIrqUnpackRequirement;
  qword_140C5C100 = (__int64)IopDmaPackResource;
  qword_140C5C108 = (__int64)IopDmaUnpackResource;
  qword_140C5C110 = (__int64)IopDmaScoreRequirement;
  qword_140C5C190 = (__int64)IopDmaOverrideConflict;
  return ArbInitializeArbiterInstance((unsigned int)&IopRootDmaArbiter, a2, 4, (unsigned int)L"RootDMA");
}
