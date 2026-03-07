__int64 __fastcall IidGetDeviceIdBufferSize(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *a2 = 0LL;
  if ( !a1 || (unsigned int)(*(_DWORD *)a1 - 1) > 4 )
    return 3221225485LL;
  *a2 = 24LL;
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      if ( *(_QWORD *)(a1 + 16) )
        *a2 = 2LL * *(unsigned __int16 *)(a1 + 14) + 24;
      return 0LL;
    case 2:
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        result = 0LL;
        v5 = -1LL;
        do
          ++v5;
        while ( *(_BYTE *)(v4 + v5) );
        v6 = v5 + 25;
      }
      else
      {
        result = 3221225485LL;
        v6 = 0LL;
      }
      *a2 = v6;
      break;
    case 5:
      return 0LL;
    default:
      *a2 = 0LL;
      return 3221225659LL;
  }
  return result;
}
