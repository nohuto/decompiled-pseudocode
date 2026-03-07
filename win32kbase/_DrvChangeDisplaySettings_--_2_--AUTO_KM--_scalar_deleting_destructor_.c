AUTO_TGO *__fastcall DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_(AUTO_TGO *a1, char a2)
{
  AUTO_TGO::~AUTO_TGO(a1);
  if ( (a2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return a1;
}
