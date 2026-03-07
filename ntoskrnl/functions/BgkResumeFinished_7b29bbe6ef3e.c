__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !qword_140D18150 )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  qword_140D18150 = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140D17C58 = 0;
  return result;
}
