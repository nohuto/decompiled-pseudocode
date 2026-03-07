void __fastcall HUBCONNECTOR_MapExternalHubPorts(__int64 a1)
{
  unsigned __int16 v2; // bx
  _QWORD **v3; // rsi
  _QWORD *i; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = 1;
  if ( *(_WORD *)(a1 + 48) )
  {
    v3 = (_QWORD **)(a1 + 2360);
LABEL_3:
    for ( i = *v3; ; i = (_QWORD *)*i )
    {
      v5 = (__int64)(i - 31);
      if ( v3 == i )
        break;
      if ( *(_WORD *)(v5 + 200) == v2 )
      {
        if ( i != (_QWORD *)248 )
        {
          v6 = *(_QWORD *)(a1 + 280);
          *(_OWORD *)(v5 + 1368) = *(_OWORD *)v6;
          *(_OWORD *)(v5 + 1384) = *(_OWORD *)(v6 + 16);
          *(_OWORD *)(v5 + 1400) = *(_OWORD *)(v6 + 32);
          *(_QWORD *)(v5 + 1416) = *(_QWORD *)(v6 + 48);
          *(_DWORD *)(v5 + 4LL * (unsigned __int16)++*(_WORD *)(v5 + 1388) + 1392) = v2;
          if ( ((*(_DWORD *)(v5 + 204) & 1) == 0 || (int)HUBCONNECTOR_RegisterPort(v5) >= 0)
            && ++v2 <= *(_WORD *)(a1 + 48) )
          {
            goto LABEL_3;
          }
        }
        return;
      }
    }
  }
}
