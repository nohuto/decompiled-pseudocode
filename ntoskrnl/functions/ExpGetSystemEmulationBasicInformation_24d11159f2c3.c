__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rsi
  int Group; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  int v9; // r9d
  int v10; // eax
  int v11; // eax

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[5];
  v3 = KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25];
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
  {
    LODWORD(v5) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = qword_140D1EFE8[Group];
    v6 = v5;
  }
  v7 = (unsigned int)v5 | HIDWORD(v6);
  *(_QWORD *)(a1 + 48) = v7;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages((unsigned __int16)v3);
  v9 = -1;
  v10 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v10 = NumberOfPhysicalPages;
  *(_DWORD *)(a1 + 12) = v10;
  v11 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v3) + 17024LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v3) + 17024LL);
  *(_DWORD *)(a1 + 16) = v11;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v3) + 17032LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v3) + 17032LL);
  *(_DWORD *)(a1 + 20) = v9;
  return 0LL;
}
