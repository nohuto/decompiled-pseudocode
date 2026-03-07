DXGAUTOPUSHLOCKFASTEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        DXGAUTOPUSHLOCKFASTEXCLUSIVE *this,
        struct DXGPUSHLOCKFAST *a2)
{
  DXGAUTOPUSHLOCKFASTEXCLUSIVE *result; // rax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  *((_QWORD *)a2 + 1) = KeGetCurrentThread();
  result = this;
  *((_BYTE *)this + 8) = 1;
  return result;
}
