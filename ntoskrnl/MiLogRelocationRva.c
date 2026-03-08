/*
 * XREFs of MiLogRelocationRva @ 0x1407F4A00
 * Callers:
 *     MiLogRelocationFaults @ 0x1407F457C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1407F4604 (MiParseComAndCetHeaders.c)
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x1407F5190 (MiCaptureImageCfgContext.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     PfLogFileDataAccess @ 0x14028C67C (PfLogFileDataAccess.c)
 *     PfSnLogPageFault @ 0x14028D4BC (PfSnLogPageFault.c)
 *     MiOffsetToProtos @ 0x140331B90 (MiOffsetToProtos.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int16 v6; // di
  unsigned int *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)v7[9] << 9);
    if ( (PfSnNumActiveTraces || dword_140D0BE98) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v5 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140D0BE98 )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( PfSnNumActiveTraces && v10 )
      {
        do
        {
          PfSnLogPageFault(a3, v11, 2u);
          LODWORD(v11) = v11 + 4096;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
