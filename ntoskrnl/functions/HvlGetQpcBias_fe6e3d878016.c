__int64 HvlGetQpcBias()
{
  return *((_QWORD *)HvlpReferenceTscPage + 3);
}
