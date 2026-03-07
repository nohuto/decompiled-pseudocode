__int64 __fastcall IvtGetDomainId(__int64 a1, __int64 a2)
{
  __int64 ScalableModePasidTables; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( !*(_BYTE *)(a1 + 320) )
    return (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                                    + 16 * ((unsigned __int64)(unsigned int)a2 >> 8))
                                        + 16LL * (unsigned __int8)a2
                                        + 8) >> 8);
  ScalableModePasidTables = IvtGetScalableModePasidTables(a1, a2);
  if ( ScalableModePasidTables )
  {
    if ( *(_DWORD *)(ScalableModePasidTables + 32) )
    {
      v4 = *(_QWORD *)(ScalableModePasidTables + 56);
      if ( (*(_QWORD *)v4 & 1) != 0 )
      {
        v5 = *(_QWORD *)v4 & 0x1C0LL;
        if ( v5 == 128 || v5 == 256 )
          return (unsigned __int16)*(_DWORD *)(v4 + 8);
      }
    }
  }
  return v3;
}
