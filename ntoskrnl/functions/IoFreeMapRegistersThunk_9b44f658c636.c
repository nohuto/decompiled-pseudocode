void __fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  _QWORD *v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    IoFreeMapRegistersV2(v2, v3, v1);
  else
    IoFreeMapRegistersV3(v2, v3);
}
