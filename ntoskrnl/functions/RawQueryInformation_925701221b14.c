__int64 __fastcall RawQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  BOOLEAN v6; // al
  __int64 v7; // rdx
  unsigned int v8; // ebx

  v6 = RawBeginOperation(a1, *(_QWORD *)(a3 + 48));
  v7 = 0LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( *(_DWORD *)(a3 + 8) >= 8u )
      {
        v8 = 0;
        v7 = 8LL;
        **(_QWORD **)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 104LL);
        *(_DWORD *)(a3 + 8) -= 8;
      }
      else
      {
        v8 = -2147483643;
      }
      *(_QWORD *)(a2 + 56) = v7;
    }
    else
    {
      v8 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v8 = -1073741202;
  }
  *(_DWORD *)(a2 + 48) = v8;
  IofCompleteRequest((PIRP)a2, 1);
  return v8;
}
