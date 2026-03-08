/*
 * XREFs of KeAddSystemServiceTable @ 0x14083A320
 * Callers:
 *     <none>
 * Callees:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x14083A484 (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

char __fastcall KeAddSystemServiceTable(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  int v6; // r9d
  int *v7; // r11
  int v8; // edx
  __int64 v9; // rax
  unsigned int v11; // ebx
  int v12; // r9d
  int *v13; // r11
  int v14; // edx
  __int64 v15; // rax

  if ( a5 == 1 )
  {
    v11 = 0;
    if ( !(_QWORD)xmmword_140E018E0 && !(_QWORD)xmmword_140D1F160 )
    {
      *(_QWORD *)&xmmword_140D1F160 = a1;
      LODWORD(xmmword_140D1F170) = a3;
      *((_QWORD *)&xmmword_140D1F170 + 1) = a4;
      PsRegisterSyscallProviderServiceTableMetadata(1LL);
      v12 = (unsigned int)&xmmword_140D1F160 + xmmword_140D1F160 + KiTableInformation;
      if ( (_DWORD)xmmword_140D1F170 )
      {
        v13 = (int *)xmmword_140D1F160;
        do
        {
          v14 = *v13;
          v15 = *v13++;
          v12 = ++v11 * ((v14 + *(_DWORD *)((v15 >> 4) + xmmword_140D1F160)) ^ v12);
        }
        while ( v11 < (unsigned int)xmmword_140D1F170 );
      }
      KiTableInformation += 2 * v12;
      return 1;
    }
  }
  else if ( a5 == 2 )
  {
    v5 = 0;
    if ( !(_QWORD)xmmword_140D1F2E0 )
    {
      *((_QWORD *)&KeServiceDescriptorTableFilter + 4) = a1;
      *((_DWORD *)&KeServiceDescriptorTableFilter + 12) = a3;
      *((_QWORD *)&KeServiceDescriptorTableFilter + 7) = a4;
      v6 = (unsigned int)&xmmword_140D1F2E0 + xmmword_140D1F2E0 + KiTableInformation;
      if ( (_DWORD)xmmword_140D1F2F0 )
      {
        v7 = (int *)xmmword_140D1F2E0;
        do
        {
          v8 = *v7;
          v9 = *v7++;
          v6 = ++v5 * ((v8 + *(_DWORD *)((v9 >> 4) + xmmword_140D1F2E0)) ^ v6);
        }
        while ( v5 < (unsigned int)xmmword_140D1F2F0 );
      }
      KiTableInformation += 2 * v6;
      return 1;
    }
  }
  return 0;
}
