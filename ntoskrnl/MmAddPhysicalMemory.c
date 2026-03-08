/*
 * XREFs of MmAddPhysicalMemory @ 0x140A2A460
 * Callers:
 *     WheapClearPoison @ 0x140A05870 (WheapClearPoison.c)
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x140A2919C (MiAddPhysicalMemoryChunks.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  LONGLONG QuadPart; // rax
  LONGLONG v4; // rdx
  unsigned int v5; // r8d
  unsigned __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rax
  NTSTATUS result; // eax
  LONGLONG v10; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v11; // [rsp+48h] [rbp+10h] BYREF

  QuadPart = StartAddress->QuadPart;
  v4 = NumberOfBytes->QuadPart;
  v5 = 0;
  v6 = 0LL;
  v11 = v4;
  v10 = QuadPart;
  v7 = QuadPart;
  if ( (QuadPart & 0xFFF) != 0 )
  {
    if ( (QuadPart & 1) != 0 )
    {
      v7 = QuadPart & 0xFFFFFFFE;
      LODWORD(v10) = QuadPart & 0xFFFFFFFE;
    }
    v5 = (QuadPart & 1) << 9;
    if ( (v7 & 6) != 0 )
    {
      if ( (v7 & 2) != 0 )
      {
        if ( (v7 & 4) != 0 )
          return -1073741811;
        v6 = 512LL;
      }
      else
      {
        v6 = 0x40000LL;
      }
      v8 = (v6 << 12) - 1;
      if ( (v8 & v4) != 0 )
        return -1073741811;
      LODWORD(v10) = v7 & 0xFFFFFFF9;
      if ( (v8 & v10) != 0 )
        return -1073741811;
    }
  }
  result = MiAddPhysicalMemoryChunks(MiSystemPartition, (unsigned __int64 *)&v10, &v11, v6, v5, 0);
  if ( result >= 0 )
    NumberOfBytes->QuadPart = v11;
  return result;
}
