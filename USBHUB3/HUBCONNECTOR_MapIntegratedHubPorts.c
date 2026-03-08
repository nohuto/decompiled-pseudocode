/*
 * XREFs of HUBCONNECTOR_MapIntegratedHubPorts @ 0x1C0082838
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0082A18 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1C0081CF0 (HUBCONNECTOR_RegisterPort.c)
 */

__int64 __fastcall HUBCONNECTOR_MapIntegratedHubPorts(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // si
  unsigned __int16 v4; // bp
  unsigned __int16 v5; // di
  __int64 v6; // rcx
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = *(_WORD *)(a1 + 288);
  v4 = *(_WORD *)(a1 + 290);
  v5 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
LABEL_2:
    if ( v2 <= v4 )
    {
      for ( result = *(_QWORD *)(a1 + 2360); ; result = *(_QWORD *)result )
      {
        v6 = result - 248;
        if ( a1 + 2360 == result )
          break;
        if ( *(_WORD *)(v6 + 200) == v5 )
        {
          if ( result != 248 )
          {
            v7 = *(_QWORD *)(a1 + 280);
            *(_OWORD *)(v6 + 1368) = *(_OWORD *)v7;
            *(_OWORD *)(v6 + 1384) = *(_OWORD *)(v7 + 16);
            *(_OWORD *)(v6 + 1400) = *(_OWORD *)(v7 + 32);
            *(_QWORD *)(v6 + 1416) = *(_QWORD *)(v7 + 48);
            *(_DWORD *)(v6 + 1392) = v2;
            result = *(unsigned int *)(v6 + 204);
            if ( (result & 1) == 0 || (result = HUBCONNECTOR_RegisterPort(v6), (int)result >= 0) )
            {
              ++v5;
              ++v2;
              if ( v5 <= *(_WORD *)(a1 + 48) )
                goto LABEL_2;
            }
          }
          return result;
        }
      }
    }
  }
  return result;
}
