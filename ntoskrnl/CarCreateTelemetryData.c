__int64 __fastcall CarCreateTelemetryData(_QWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  int v9; // ebx
  void *Pool2; // rax

  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 1240LL, 1316118851LL);
    *a1 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x4D8uLL);
      v9 = CarInitializeTelemetryData(*a1, a2, a3, a4, a5);
      if ( v9 < 0 )
        CarDeleteTelemetryData(a1);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
