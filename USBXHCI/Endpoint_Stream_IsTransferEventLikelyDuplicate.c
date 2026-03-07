char __fastcall Endpoint_Stream_IsTransferEventLikelyDuplicate(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  char result; // al
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v9; // rcx

  result = 0;
  v4 = 1;
  *a3 = 0;
  v6 = *(_QWORD *)(a2 + 136);
  if ( *(_DWORD *)(v6 + 8) )
  {
    do
    {
      v9 = *(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(a2 + 136) + 48);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)(v9 + 32) + 80LL))(v9, *a1, a3);
      if ( result )
        break;
      ++v4;
    }
    while ( v4 <= *(_DWORD *)(v6 + 8) );
  }
  return result;
}
