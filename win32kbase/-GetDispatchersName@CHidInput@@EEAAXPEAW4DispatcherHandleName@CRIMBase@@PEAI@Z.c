void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 14;
  *(_OWORD *)a2 = xmmword_1C028A188;
  *((_OWORD *)a2 + 1) = xmmword_1C028A198;
  *((_OWORD *)a2 + 2) = xmmword_1C028A1A8;
  *((_QWORD *)a2 + 6) = 0x100000000FLL;
}
