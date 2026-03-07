char __fastcall MiDetachAndUnlockWorkingSet(__int64 a1)
{
  char result; // al
  _OWORD v2[3]; // [rsp+20h] [rbp-48h] BYREF

  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result )
  {
    if ( result == 1 )
      return MiDetachSessionGlobal(*(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 17000LL);
  }
  else
  {
    result = a1 + 0x80;
    if ( KeGetCurrentThread()->Process != (_KPROCESS *)(a1 - 1664) )
    {
      memset(v2, 0, sizeof(v2));
      return KiUnstackDetachProcess(v2, 1LL);
    }
  }
  return result;
}
