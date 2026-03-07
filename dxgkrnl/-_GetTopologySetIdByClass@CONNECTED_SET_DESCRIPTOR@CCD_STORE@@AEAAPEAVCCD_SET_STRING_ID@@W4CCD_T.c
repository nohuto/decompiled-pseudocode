__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  v3 = a2;
  switch ( a2 )
  {
    case 1:
      v6 = 56LL;
      break;
    case 2:
      v6 = 64LL;
      break;
    case 4:
      v6 = 72LL;
      break;
    case 8:
      v6 = 80LL;
      break;
    default:
      if ( a2 != 15 )
        WdLogSingleEntry1(1LL, a2);
      v6 = 88LL;
      break;
  }
  if ( !*(_QWORD *)(v6 + a1) && a3 )
  {
    v7 = operator new[](0x38uLL, 0x63644356u, 256LL);
    if ( v7 )
    {
      *(_DWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_WORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 40) = 0LL;
      *(_QWORD *)(v6 + a1) = v7;
    }
    else
    {
      *(_QWORD *)(v6 + a1) = 0LL;
      WdLogSingleEntry4(6LL, 56LL, v3, a1, *(_QWORD *)(a1 + 96));
    }
  }
  return *(_QWORD *)(v6 + a1);
}
