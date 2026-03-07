char __fastcall KeLeaveCriticalRegionThread(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (*(_WORD *)(a1 + 484))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 && !*(_WORD *)(a1 + 486) )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
