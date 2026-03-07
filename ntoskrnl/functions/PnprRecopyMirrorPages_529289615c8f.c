__int64 PnprRecopyMirrorPages()
{
  __int64 Number; // rcx
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r8d
  int v5; // eax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax

  Number = KeGetPcr()->Prcb.Number;
  PnprGetStackLimits((char **)(PnprContext + 216 + 8 * Number), PnprContext + 16600 + 8 * Number);
  v1 = PnprContext;
  v2 = 0LL;
  if ( *(_DWORD *)(PnprContext + 176) )
  {
    while ( 1 )
    {
      v3 = PnprRecopyAddress(
             *(_QWORD *)(v1 + 8 * v2 + 216),
             *(_DWORD *)(v1 + 8 * v2 + 16600) - (unsigned int)*(_QWORD *)(v1 + 8 * v2 + 216));
      if ( v3 < 0 )
        break;
      if ( (_DWORD)v2 != *(_DWORD *)(PnprContext + 180) )
      {
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 144) + 24 * v2));
        if ( v3 < 0 )
        {
          v10 = 5619;
          goto LABEL_17;
        }
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 136) + 24 * v2));
        if ( v3 < 0 )
        {
          v10 = 5627;
          goto LABEL_17;
        }
      }
      v1 = PnprContext;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(PnprContext + 176) )
        goto LABEL_7;
    }
    v10 = 5603;
LABEL_17:
    v11 = PnprContext;
    v12 = *(_DWORD *)(PnprContext + 33272);
    if ( !v12 )
      v12 = v10;
    *(_DWORD *)(PnprContext + 33272) = v12;
    v13 = *(_DWORD *)(v11 + 33276);
    if ( !v13 )
      v13 = 1;
    *(_DWORD *)(v11 + 33276) = v13;
    return (unsigned int)v3;
  }
  else
  {
LABEL_7:
    v4 = PnprRecopyAddress(v1, 0x8238u);
    if ( v4 >= 0 )
    {
      v4 = PnprCopyReservedMapping();
      if ( v4 >= 0 )
        return 0LL;
      v5 = 5651;
    }
    else
    {
      v5 = 5639;
    }
    v6 = PnprContext;
    v7 = *(_DWORD *)(PnprContext + 33272);
    if ( !v7 )
      v7 = v5;
    *(_DWORD *)(PnprContext + 33272) = v7;
    v8 = *(_DWORD *)(v6 + 33276);
    if ( !v8 )
      v8 = 1;
    *(_DWORD *)(v6 + 33276) = v8;
    return (unsigned int)v4;
  }
}
