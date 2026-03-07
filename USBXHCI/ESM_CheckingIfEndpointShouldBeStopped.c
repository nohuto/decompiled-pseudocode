__int64 __fastcall ESM_CheckingIfEndpointShouldBeStopped(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  __int64 v4; // rsi
  unsigned int v5; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 37) )
  {
    v4 = *(_QWORD *)(v1 + 136);
    v5 = 1;
    for ( *(_DWORD *)(v4 + 20) = 0; v5 <= *(_DWORD *)(v4 + 8); ++v5 )
    {
      v2 = TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(104LL * (v5 - 1) + *(_QWORD *)(v1 + 136) + 48));
      if ( v2 )
        break;
    }
  }
  else
  {
    v2 = TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(v1 + 88));
  }
  return v2 != 0 ? 33 : 21;
}
