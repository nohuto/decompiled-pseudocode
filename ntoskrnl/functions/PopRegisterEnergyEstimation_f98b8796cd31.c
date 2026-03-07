void __fastcall PopRegisterEnergyEstimation(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD), char a3)
{
  unsigned int v3; // ebx
  unsigned int *Pool2; // rax
  _DWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // r9d
  _DWORD *v8; // r8
  __int64 v9; // rdx

  PopComputeEnergy = a1;
  PopSnapEnergyCounters = a2;
  v3 = 2 - (a3 != 0);
  if ( !PpmComputeEnergyData )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, 56 * v3 + 8, 1884115024LL);
    PpmComputeEnergyData = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = v3;
      v5 = Pool2 + 12;
      v6 = v3;
      do
      {
        v7 = 0;
        v8 = v5;
        LODWORD(v9) = 25;
        do
        {
          *(v8 - 4) = v9;
          ++v7;
          v9 = (unsigned int)(v9 + 25);
          *v8++ = v7;
        }
        while ( (unsigned int)v9 < 0x7D );
        v5 += 14;
        --v6;
      }
      while ( v6 );
      PopDetermineBucketFrequencies(0LL, v9, v8);
    }
  }
}
