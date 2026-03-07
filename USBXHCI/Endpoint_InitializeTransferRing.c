__int64 __fastcall Endpoint_InitializeTransferRing(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *((_BYTE *)a1 + 37) )
  {
    v5 = *a1;
    if ( _bittest64((const signed __int64 *)(v5 + 336), 0x2Cu) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[17] + 32) + 16LL) + 16LL * a2;
      v7 = *(_QWORD *)(v5 + 336);
      if ( (v7 & 0x1800000000LL) != 0 )
      {
        if ( (v7 & 0x1000000000LL) != 0 )
        {
          if ( (v7 & 0x800000000LL) == 0 )
            *(_DWORD *)(v6 + 12) &= 0xFF000000;
        }
        else
        {
          *(_DWORD *)(v6 + 8) = (unsigned __int8)*(_DWORD *)(v6 + 8);
        }
      }
      else
      {
        *(_DWORD *)(v6 + 8) &= 0xFF000000;
      }
    }
    v3 = *(_QWORD *)(104LL * (a2 - 1) + a1[17] + 48);
  }
  else
  {
    v3 = a1[11];
  }
  return TR_InitializeTransferRing(v3);
}
