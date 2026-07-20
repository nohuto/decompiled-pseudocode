/*
 * XREFs of GetSystemTimeAndBias @ 0x14000ECF4
 * Callers:
 *     SmpGetTime @ 0x1400171B4 (SmpGetTime.c)
 * Callees:
 *     RtlpGetNtDllProcAddress @ 0x14000EDE0 (RtlpGetNtDllProcAddress.c)
 */

__int64 __fastcall GetSystemTimeAndBias(_QWORD *a1)
{
  char v1; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // r9d

  v1 = dword_140027E88;
  if ( dword_140027E88 == -1 )
  {
    if ( RtlpGetNtDllProcAddress() )
    {
      dword_140027E88 = 1;
      v1 = 1;
    }
    else
    {
      dword_140027E88 = 0;
      v1 = 0;
    }
  }
  if ( v1 && (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v3 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 144LL);
    v4 = v3 + 588;
    v5 = v3 + 592;
  }
  else
  {
    v5 = 2147352608LL;
    v4 = 2147353180LL;
  }
  while ( 1 )
  {
    v6 = *(_DWORD *)v4;
    if ( (*(_DWORD *)v4 & 1) == 0 )
    {
      while ( HIDWORD(*(_QWORD *)v5) != *(_DWORD *)(v5 + 8) )
        _mm_pause();
      *a1 = *(_QWORD *)v5;
      while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
        _mm_pause();
      if ( v6 == *(_DWORD *)v4 )
        break;
    }
    _mm_pause();
  }
  return MEMORY[0x7FFE0014];
}
