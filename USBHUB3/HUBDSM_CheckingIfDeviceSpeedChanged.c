__int64 __fastcall HUBDSM_CheckingIfDeviceSpeedChanged(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  unsigned int v3; // ecx
  __int16 v4; // cx
  unsigned int v5; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_DWORD *)(v1 + 172);
  if ( v2 == 3 )
  {
    return 4061;
  }
  else
  {
    v4 = *(_WORD *)(*(_QWORD *)(v1 + 8) + 184LL);
    if ( (v4 & 0x400) != 0 )
    {
      v3 = 4061;
      if ( v2 != 2 )
        return 4089;
    }
    else if ( (v4 & 0x200) != 0 )
    {
      return v2 != 0 ? 4089 : 4061;
    }
    else
    {
      v5 = 4089;
      if ( v2 == 1 )
        return 4061;
      return v5;
    }
  }
  return v3;
}
