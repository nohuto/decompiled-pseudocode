char __fastcall VslpIumPhase0InitializeNtKd(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ecx

  if ( (_BYTE)KdDebuggerEnabled )
  {
    *(_BYTE *)(a2 + 24) = 1;
    v2 = *(_QWORD *)(a1 + 240);
    v3 = *(_QWORD *)(v2 + 2800);
    if ( v3 )
    {
      LODWORD(v2) = *(_DWORD *)(v3 + 220);
      *(_DWORD *)(a2 + 28) = v2;
      if ( !*(_DWORD *)(v3 + 220) && *(_DWORD *)v3 <= 0xFFu )
      {
        *(_DWORD *)(a2 + 32) = 2;
        *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v3 + 8);
        *(_BYTE *)(a2 + 40) = *(_BYTE *)v3;
        v4 = *(_DWORD *)(v3 + 4);
        LOBYTE(v2) = v4 & 0x1F;
        *(_BYTE *)(a2 + 41) = v4 & 0x1F;
        *(_BYTE *)(a2 + 42) = (v4 >> 5) & 7;
      }
    }
  }
  else
  {
    *(_BYTE *)(a2 + 24) = 0;
  }
  return v2;
}
