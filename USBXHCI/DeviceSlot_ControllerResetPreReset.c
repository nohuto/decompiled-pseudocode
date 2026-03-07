void __fastcall DeviceSlot_ControllerResetPreReset(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rbp

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    v4 = *(_QWORD *)(v3 + 8LL * i);
    if ( v4 )
    {
      v5 = v4 + 176;
      v6 = 31LL;
      do
      {
        if ( *(_QWORD *)v5 )
          ESM_AddEvent((KSPIN_LOCK *)(*(_QWORD *)v5 + 296LL), 15);
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
}
