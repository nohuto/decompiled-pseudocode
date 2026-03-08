/*
 * XREFs of ExpGetSystemBasicInformation @ 0x1402DCC68
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140768AB0 (MmGetNumberOfPhysicalPages.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  __int64 v2; // rsi
  int Group; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  int v6; // r9d
  int v7; // eax
  int v8; // eax

  v2 = KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25];
  Group = KeGetCurrentPrcb()->Group;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)Group >= LOWORD(KeActiveProcessors[0]) )
    v4 = 0LL;
  else
    v4 = qword_140D1EFE8[Group];
  *(_QWORD *)(a1 + 48) = v4;
  *(_BYTE *)(a1 + 56) = (0x101010101010101LL
                       * ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v4 - ((v4 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v4 - ((v4 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages((unsigned __int16)v2);
  v6 = -1;
  v7 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v7 = NumberOfPhysicalPages;
  *(_DWORD *)(a1 + 12) = v7;
  v8 = -1;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v2) + 17024LL) <= 0xFFFFFFFFuLL )
    v8 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v2) + 17024LL);
  *(_DWORD *)(a1 + 16) = v8;
  if ( *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v2) + 17032LL) <= 0xFFFFFFFFuLL )
    v6 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * v2) + 17032LL);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
