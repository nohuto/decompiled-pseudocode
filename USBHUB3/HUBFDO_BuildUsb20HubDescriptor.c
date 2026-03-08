/*
 * XREFs of HUBFDO_BuildUsb20HubDescriptor @ 0x1C000E3B4
 * Callers:
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C007996C (HUBFDO_IoctlGetNodeInformation.c)
 *     WMI_QueryInstanceHubNodeInfo @ 0x1C008BA80 (WMI_QueryInstanceHubNodeInfo.c)
 * Callees:
 *     memset @ 0x1C0044FC0 (memset.c)
 */

char __fastcall HUBFDO_BuildUsb20HubDescriptor(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx

  LOBYTE(v4) = (unsigned __int8)memset(a2, 0, 0x47uLL);
  if ( *(_BYTE *)(a1 + 240) )
  {
    if ( *(_DWORD *)(a1 + 256) == 1 || *(_DWORD *)(a1 + 256) == 2 )
    {
      *a2 = *(_OWORD *)(a1 + 1180);
      a2[1] = *(_OWORD *)(a1 + 1196);
      a2[2] = *(_OWORD *)(a1 + 1212);
      a2[3] = *(_OWORD *)(a1 + 1228);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(a1 + 1244);
      *((_WORD *)a2 + 34) = *(_WORD *)(a1 + 1248);
      LOBYTE(v4) = *(_BYTE *)(a1 + 1250);
      *((_BYTE *)a2 + 70) = v4;
    }
    else if ( *(_DWORD *)(a1 + 256) == 3 )
    {
      *(_WORD *)a2 = 10505;
      v7 = *(unsigned __int8 *)(a1 + 48);
      *((_BYTE *)a2 + 2) = v7;
      v8 = v7;
      v9 = 0;
      *(_WORD *)((char *)a2 + 3) = *(_WORD *)(a1 + 1183) & 0x1F;
      *((_BYTE *)a2 + 5) = *(_BYTE *)(a1 + 1185);
      LOBYTE(v4) = *(_BYTE *)(a1 + 1186);
      *((_BYTE *)a2 + 6) = v4;
      v10 = (v8 >> 3) + 1;
      if ( v10 )
      {
        v4 = 0LL;
        do
        {
          *((_BYTE *)a2 + v4 + 7) = 0;
          ++v9;
          *((_BYTE *)a2 + v10 + v4 + 7) = -1;
          v4 = v9;
        }
        while ( v9 < v10 );
      }
    }
  }
  else
  {
    *(_WORD *)a2 = 10505;
    v5 = 0;
    LOBYTE(v4) = *(_BYTE *)(a1 + 48);
    *((_BYTE *)a2 + 2) = v4;
    *((_BYTE *)a2 + 5) = 2;
    v6 = ((unsigned __int64)(unsigned __int8)v4 >> 3) + 1;
    if ( (unsigned __int64)(unsigned __int8)v4 >> 3 != -1LL )
    {
      v4 = 0LL;
      do
      {
        *((_BYTE *)a2 + v4 + 7) = 0;
        ++v5;
        *((_BYTE *)a2 + v6 + v4 + 7) = -1;
        v4 = v5;
      }
      while ( v5 < v6 );
    }
  }
  return v4;
}
