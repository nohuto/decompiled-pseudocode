__int64 __fastcall PiDqObjectActionQueueEntryCreate(volatile signed __int32 *a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1483763280LL);
  *a2 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = _InterlockedIncrement64(&PiDqSequenceNumber);
    _InterlockedIncrement(a1);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
