void sub_1400022DC()
{
  PVOID v0; // rbx

  v0 = P;
  if ( P )
  {
    sub_1400021C4(P);
    ExFreePool(v0);
    P = 0LL;
  }
}
