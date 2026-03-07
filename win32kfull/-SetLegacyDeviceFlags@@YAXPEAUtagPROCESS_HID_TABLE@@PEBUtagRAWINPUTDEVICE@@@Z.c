void __fastcall SetLegacyDeviceFlags(struct tagPROCESS_HID_TABLE *a1, const struct tagRAWINPUTDEVICE *a2)
{
  int v3; // eax
  int v4; // r8d
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // r8d

  v3 = *((_DWORD *)a2 + 1) & 0xF0;
  if ( (!v3 || v3 == 48) && *(_WORD *)a2 == 1 )
  {
    if ( *((_WORD *)a2 + 1) == 6 )
    {
      v4 = 0;
      if ( v3 == 48 )
        v4 = 32;
      v5 = *((_DWORD *)a1 + 25) & 0xFFFFFFDF | v4;
      *((_DWORD *)a1 + 25) = v5;
      v6 = v5 ^ (*((_DWORD *)a2 + 1) ^ v5) & 0x200;
      *((_DWORD *)a1 + 25) = v6;
      v7 = v6 ^ (*((_DWORD *)a2 + 1) ^ v6) & 0x400;
      *((_DWORD *)a1 + 25) = v7;
      v8 = ((unsigned __int16)v7 ^ (unsigned __int16)(*((_DWORD *)a2 + 1) >> 2)) & 0x1000;
LABEL_7:
      *((_DWORD *)a1 + 25) = v7 ^ v8;
      return;
    }
    if ( *((_WORD *)a2 + 1) == 2 )
    {
      v9 = 0;
      if ( v3 == 48 )
        v9 = 2;
      v10 = *((_DWORD *)a1 + 25) & 0xFFFFFFFD | v9;
      *((_DWORD *)a1 + 25) = v10;
      v7 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(*((_DWORD *)a2 + 1) >> 1)) & 0x100;
      *((_DWORD *)a1 + 25) = v7;
      v8 = ((unsigned __int16)v7 ^ (unsigned __int16)(*((_DWORD *)a2 + 1) >> 4)) & 0x800;
      goto LABEL_7;
    }
  }
}
