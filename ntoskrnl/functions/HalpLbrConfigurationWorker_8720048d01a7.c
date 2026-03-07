__int64 __fastcall HalpLbrConfigurationWorker(int a1, unsigned __int8 a2)
{
  ULONG_PTR v3; // rdi
  int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 result; // rax

  v3 = a2;
  HalpLbrSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = a1 | 0x1C4;
  if ( (a1 & 0x200) == 0 )
    v4 = a1;
  if ( HalpArchLbrSupported )
  {
    v5 = (2 * ((v4 & 1) == 0) + 8323084) & 0xFFFFFFFB;
    if ( (v4 & 2) == 0 )
      v5 = 2 * ((v4 & 1) == 0) + 8323084;
    v6 = v5 & 0xFFFEFFFF;
    if ( (v4 & 4) == 0 )
      v6 = v5;
    v7 = v6 & 0xFFF7FFFF;
    if ( (v4 & 8) == 0 )
      v7 = v6;
    v8 = v7 & 0xFFEFFFFF;
    if ( (v4 & 0x10) == 0 )
      v8 = v7;
    v9 = v8 & 0xFFDFFFFF;
    if ( (v4 & 0x20) == 0 )
      v9 = v8;
    v10 = v9 & 0xFFFBFFFF;
    if ( (v4 & 0x40) == 0 )
      v10 = v9;
    v11 = v10 & 0xFFFDFFFF;
    if ( (v4 & 0x80u) == 0 )
      v11 = v10;
    v12 = v11 & 0xFFBFFFFF;
    if ( (v4 & 0x100) == 0 )
      v12 = v11;
    v13 = v12 & 0xFFFFFFF7;
    if ( (v4 & 0x200) != 0 )
      v13 = v12;
    HalpLbrCtlFlags = v13;
  }
  else
  {
    HalpLbrSelectFlags = v4;
  }
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpLbrConfigureProcessor, v3);
  while ( 1 )
  {
    result = (unsigned int)HalpLbrSyncBarrier;
    if ( HalpLbrSyncBarrier <= 0 )
      break;
    _mm_pause();
  }
  return result;
}
