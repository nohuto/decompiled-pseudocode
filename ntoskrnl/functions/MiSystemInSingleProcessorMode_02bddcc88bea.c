bool MiSystemInSingleProcessorMode()
{
  return !(_DWORD)InitializationPhase || (KiBugCheckActive & 3) != 0 || qword_140C67B08 == (_QWORD)KeGetCurrentThread();
}
