AUTO_TGO *__fastcall AUTO_TGO::`scalar deleting destructor'(AUTO_TGO *this, char a2)
{
  AUTO_TGO::~AUTO_TGO(this);
  if ( (a2 & 1) != 0 )
    WdLogSingleEntry0(1LL);
  return this;
}
