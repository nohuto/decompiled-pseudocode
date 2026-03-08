/*
 * XREFs of VfHalAllocateMapRegisters @ 0x140AC3D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ADD_MAP_REGISTERS @ 0x140AC1180 (ADD_MAP_REGISTERS.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfHalAllocateMapRegisters(int a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rsi
  __int64 RealDmaAdapter; // rdi
  int MapRegisters; // r14d
  __int64 AdapterInformationInternal; // rdi
  __int64 MapRegisterFile; // rax

  v5 = a3;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !VfRealHalAllocateMapRegisters )
    return 3221225473LL;
  MapRegisters = VfRealHalAllocateMapRegisters(RealDmaAdapter, a2, (unsigned int)v5, a4);
  if ( MapRegisters >= 0 )
  {
    AdapterInformationInternal = ViGetAdapterInformationInternal(RealDmaAdapter);
    if ( AdapterInformationInternal )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          if ( ViDoubleBufferDma
            && !*(_BYTE *)(AdapterInformationInternal + 73)
            && (MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, a2)) != 0 )
          {
            *(_QWORD *)(MapRegisterFile + 48) = *a4;
            *a4 = MapRegisterFile;
          }
          else if ( !*a4 )
          {
            *a4 = -559026163LL;
          }
          ADD_MAP_REGISTERS(AdapterInformationInternal, a2, 1);
          a4 += 2;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return (unsigned int)MapRegisters;
}
