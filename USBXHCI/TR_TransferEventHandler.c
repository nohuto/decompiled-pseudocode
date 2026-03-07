char __fastcall TR_TransferEventHandler(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 88LL))();
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1 || (*(_DWORD *)a1 & 3u) - 2 > 1 )
    {
      return 0;
    }
    else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1((__int64 *)a1, 0LL, a3, a4);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1((__int64 *)a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
