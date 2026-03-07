bool KiIsRecoveryPossibleOnCurrentStack()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 NestingLevel; // al

  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  return NestingLevel < 2u
      && (NestingLevel != 1 || CurrentPrcb->DpcRoutineActive)
      && (_DWORD)KiBugCheckData != 127
      && (_DWORD)KiBugCheckData != 251
      && (_DWORD)KiBugCheckData != 265
      && (_DWORD)KiBugCheckData != 273
      && (_DWORD)KiBugCheckData != 313
      && (_DWORD)KiBugCheckData != 395
      && (_DWORD)KiBugCheckData != 456
      && (_DWORD)KiBugCheckData != 131073;
}
