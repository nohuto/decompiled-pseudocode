__int64 __fastcall MiGetImageProtoProtection(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  unsigned int SessionId; // eax

  v2 = *(_QWORD *)(a1 + 72);
  v3 = 0;
  v6 = 0LL;
  while ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 34) & 2) != 0 && (v8 = *(_QWORD *)v2, (*(_DWORD *)(*(_QWORD *)v2 + 56LL) & 0x8000000) != 0) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v6 = *(_QWORD *)(MiGetSharedProtos(v8, SessionId, v2) + 72);
    }
    else
    {
      v6 = *(_QWORD *)(v2 + 8);
    }
    if ( a2 >= v6 && a2 < v6 + 8LL * *(unsigned int *)(v2 + 44) )
      break;
    v2 = *(_QWORD *)(v2 + 16);
  }
  if ( (__int64)(a2 - v6) >> 3 < (unsigned __int64)(*(_DWORD *)(v2 + 44) - (*(_DWORD *)(v2 + 52) & 0x3FFFFFFFu)) )
  {
    v3 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
    if ( v3 == 7 )
      return (*(unsigned __int16 *)(v2 + 32) >> 1) & 0x1F;
  }
  return v3;
}
