void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140C709D0 = a1;
  dword_140C709F0 = a2;
  stru_140C709E0.SizeOfBitMap = a2;
  stru_140C709E0.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C709E0);
}
