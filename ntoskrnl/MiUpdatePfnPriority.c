char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // ecx
  int v3; // r8d
  ULONG_PTR v4; // r9
  unsigned int v5; // r10d
  int v6; // edx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r8

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  if ( v6 != PfnPriority && (v5 >= PfnPriority || v3 && (PfnPriority <= 5 || *(__int64 *)(v4 + 40) >= 0)) )
  {
    v8 = *(_BYTE *)(v4 + 34) & 7;
    if ( v8 == 2 )
    {
      if ( PfnPriority
        || (v9 = *(_QWORD *)(v4 + 16), (v9 & 0x400) != 0)
        || (v10 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
            (*(_DWORD *)(v10 + 4) & 0x80u) != 0)
        || (v9 & 4) == 0
        || (unsigned __int16)v9 >> 12 != *(_DWORD *)(v10 + 1188) )
      {
        MiRelinkStandbyPage(v4, v5);
      }
    }
    else if ( v8 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v5 >= PfnPriority )
    {
      *(_BYTE *)(v4 + 35) ^= (*(_BYTE *)(v4 + 35) ^ v5) & 7;
      if ( PfnPriority < 5 )
      {
        v1 = -1;
        if ( v5 == 5 )
          return 0;
      }
      else if ( v5 < 5 )
      {
        return 7;
      }
    }
  }
  return v1;
}
