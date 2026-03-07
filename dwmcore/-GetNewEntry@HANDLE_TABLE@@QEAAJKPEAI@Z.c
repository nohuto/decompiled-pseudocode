__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // eax
  unsigned int v8; // edi
  char *v9; // r9
  int v10; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rcx

  v3 = 0;
  if ( dword_1803E0B2C >= 0x400
    || (v12 = HANDLE_TABLE::Resize((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, 0x400u), v3 = v12, v12 >= 0) )
  {
    *a3 = 0;
    v5 = dword_1803E0B30;
    v6 = Size;
    v7 = dword_1803E0B30;
    v8 = dword_1803E0B2C;
    v9 = (char *)lpMem;
    while ( *(_DWORD *)((char *)lpMem + (unsigned int)(Size * v7)) )
    {
      v14 = v5 + 1;
      v5 = 1;
      if ( v14 != dword_1803E0B2C )
        v5 = v14;
      if ( v5 == dword_1803E0B30 )
      {
        v5 = 0;
        break;
      }
      v7 = v5;
    }
    v10 = v5 + 1;
    if ( v5 + 1 == dword_1803E0B2C )
      v10 = 1;
    dword_1803E0B30 = v10;
    if ( !v5 )
    {
      v15 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, dword_1803E0B2C);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x154u, 0LL);
        return v3;
      }
      v9 = (char *)lpMem;
      v6 = Size;
      v5 = v8;
      dword_1803E0B30 = v8 + 1;
    }
    *(_DWORD *)&v9[v6 * v5] = 89;
    *a3 = v5;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x11Eu, 0LL);
  }
  return v3;
}
