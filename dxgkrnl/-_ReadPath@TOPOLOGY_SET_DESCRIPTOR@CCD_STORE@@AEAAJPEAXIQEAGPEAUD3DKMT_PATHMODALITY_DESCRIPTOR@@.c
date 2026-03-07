__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        unsigned __int16 *const a4,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a5)
{
  __int64 v7; // rbp
  int RegistryValues; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v15; // eax

  v7 = a3;
  RegistryValues = CcdReadRegistryValues(a2, a4, &unk_1C013A120, 13LL, a5);
  v9 = *(unsigned int *)a5;
  *(_QWORD *)a5 = v9;
  v10 = RegistryValues;
  if ( RegistryValues < 0 )
  {
    WdLogSingleEntry4(3LL, RegistryValues, a2, v7, a5);
  }
  else
  {
    if ( (v9 & 0x100) != 0 )
    {
      v11 = CcdReadRegistryValues(a2, a4, &unk_1C013A4E0, 6LL, a5);
      v10 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry4(3LL, v11, a2, v7, a5);
        v15 = CcdReadRegistryValues(a2, 0LL, &unk_1C013A6A0, 8LL, a5);
        if ( v15 < 0 )
        {
          WdLogSingleEntry3(2LL, v15, a2, v7);
          *(_QWORD *)a5 &= ~0x100uLL;
        }
        if ( (*(_QWORD *)a5 & 0x100LL) != 0 )
          *(_QWORD *)a5 |= 0x20000uLL;
        v10 = 0;
      }
      v9 = *(_QWORD *)a5;
      if ( (*(_QWORD *)a5 & 0x100LL) != 0 )
      {
        v12 = *((_QWORD *)a5 + 12);
        *((_DWORD *)a5 + 29) = 0;
        *((_QWORD *)a5 + 13) = v12;
      }
    }
    if ( (v9 & 0x800000) != 0 )
    {
      v13 = CcdReadRegistryValues(a2, a4, &unk_1C013A000, 5LL, a5);
      v10 = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry4(3LL, v13, a2, v7, a5);
        *(_QWORD *)a5 &= ~0x800000uLL;
        return 0;
      }
      else if ( *((_DWORD *)a5 + 44) == *((_DWORD *)a5 + 42) || *((_DWORD *)a5 + 45) == *((_DWORD *)a5 + 43) )
      {
        *(_QWORD *)a5 &= ~0x800000uLL;
      }
    }
  }
  return v10;
}
