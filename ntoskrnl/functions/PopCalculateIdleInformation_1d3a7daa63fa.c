unsigned __int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r14d
  int v5; // r15d
  unsigned __int64 v6; // r13
  unsigned __int64 PlatformStateResidency; // r11
  unsigned __int64 result; // rax
  int v9; // r12d
  unsigned int v10; // ebp
  unsigned __int64 *v11; // rsi
  int v12; // edi
  unsigned __int64 v14; // [rsp+68h] [rbp+10h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    v3 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v6 = 0LL;
  PlatformStateResidency = PpmQueryPlatformStateResidency((unsigned int)dword_140CF7A00);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  result = (unsigned int)dword_140CF7A00;
  v9 = 0;
  v10 = 0;
  if ( v4 )
  {
    v11 = (unsigned __int64 *)(v3 + 56);
    v12 = dword_140CF7A00;
    do
    {
      v14 = PopQpcFrequency;
      result = PpmConvertTime(*v11, PopQpcFrequency, 0xF4240uLL);
      v1 += result;
      if ( v12 != -1 && v10 == v12 )
      {
        result = PpmConvertTime(*v11, v14, 0xF4240uLL);
        v9 = *((_DWORD *)v11 - 6);
        v6 = result;
      }
      ++v10;
      v11 += 127;
    }
    while ( v10 < v4 );
    v2 = a1;
  }
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v6;
  *(_QWORD *)(v2 + 16) = PlatformStateResidency;
  *(_DWORD *)(v2 + 24) = v9;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
