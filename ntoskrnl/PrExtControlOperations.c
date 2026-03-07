__int64 __fastcall PrExtControlOperations(int a1, __int64 a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  unsigned int (__fastcall *ExportedRoutineByName)(__int64); // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int64 v15; // rdx
  _OWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 - 1;
  if ( !v4 )
  {
    v7 = 0;
    if ( a2 && a3 == 12 )
    {
      PatchConfig = a2;
      PatchConfigFound = 0;
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
    if ( a2 && a3 == 1 )
    {
      SelfhostEnabled = *(_BYTE *)a2;
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( a3 == 44 )
    {
      v7 = 0;
      if ( a2 )
      {
        MCUpdateRegistryData = *(_OWORD *)a2;
        xmmword_140C14490 = *(_OWORD *)(a2 + 16);
        qword_140C144A0 = *(_QWORD *)(a2 + 32);
        dword_140C144A8 = *(_DWORD *)(a2 + 40);
        return v7;
      }
    }
    return (unsigned int)-1073741811;
  }
  v7 = 0;
  v8 = v6 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        ExportedRoutineByName = (unsigned int (__fastcall *)(__int64))RtlFindExportedRoutineByName(
                                                                        a2,
                                                                        "UcpUpdateControls");
        if ( ExportedRoutineByName )
        {
          v11 = 1LL;
          return ExportedRoutineByName(v11);
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( a3 != 40 || !a2 )
      return (unsigned int)-1073741811;
    v12 = *(_OWORD *)a2;
    v13 = *(unsigned int *)(a2 + 36);
    v14 = *(_OWORD *)(a2 + 16);
    v15 = *(unsigned int *)(a2 + 32);
    v17[0] = v12;
    v17[1] = v14;
    MicrocodeSetProcMcLog(v17, v15, v13);
  }
  ExportedRoutineByName = (unsigned int (__fastcall *)(__int64))RtlFindExportedRoutineByName(a2, "UcpUpdateControls");
  if ( ExportedRoutineByName )
  {
    v11 = 0LL;
    return ExportedRoutineByName(v11);
  }
  return v7;
}
