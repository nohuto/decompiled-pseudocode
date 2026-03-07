__int64 PpmUpdateArchitecturalEfficiencyClass()
{
  unsigned int v0; // esi
  char v1; // bp
  unsigned __int8 v2; // al
  unsigned int v3; // r14d
  char v4; // bl
  unsigned __int8 v5; // di
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // cl
  unsigned int i; // edi
  __int64 Prcb; // rax
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi

  v0 = KeNumberProcessors_0;
  v1 = 0;
  if ( (unsigned int)KeNumberProcessors_0 <= 0x800 )
  {
    v2 = 0;
    v3 = 0;
    v4 = -1;
    if ( !(_DWORD)KeNumberProcessors_0 )
      goto LABEL_9;
    do
    {
      v5 = v4;
      v6 = v2;
      v2 = *(_BYTE *)(KeGetPrcb(v3) + 34125);
      v7 = v2;
      if ( v6 > v2 )
        v2 = v6;
      if ( v5 < v7 )
        v7 = v5;
      ++v3;
      v4 = v7;
    }
    while ( v3 < v0 );
    if ( v2 != v7 )
    {
LABEL_9:
      if ( KeGetCurrentPrcb()->CpuVendor == 1 )
        PpmHeteroArchFavoredCoreEnabled = 1;
      for ( i = 0; i < v0; *(_BYTE *)(Prcb + 34059) = *(_BYTE *)(Prcb + 34125) != (unsigned __int8)v4 )
      {
        Prcb = KeGetPrcb(i);
        if ( *(_BYTE *)(Prcb + 34125) != v4 )
          v1 = 1;
        ++i;
      }
    }
  }
  result = (unsigned int)PpmHeteroMultiCoreClassesRegValue;
  if ( PpmHeteroMultiCoreClassesRegValue == -1 )
    result = (unsigned __int8)v1 >= 2u;
  v11 = 0;
  for ( PpmHeteroMultiCoreClassesEnabled = result; v11 < v0; ++v11 )
  {
    result = KeGetPrcb(v11);
    v14 = result;
    if ( *(_BYTE *)(result + 34059) )
    {
      result = KeIsMultiCoreClassesEnabled(v13, v12);
      if ( !(_DWORD)result )
        *(_BYTE *)(v14 + 34059) = 1;
      if ( !PoDetectedHeteroSystem )
        PoDetectedHeteroSystem = 1;
    }
  }
  return result;
}
