__int64 __fastcall IopCheckGetQuotaBufferValidity(unsigned int *a1, int a2, _QWORD *a3)
{
  int v4; // edi
  int v5; // esi
  unsigned int *v6; // rbx
  ULONG v7; // eax
  __int64 v8; // rcx
  int v9; // eax

  v4 = a2;
  v5 = (int)a1;
  v6 = a1;
  if ( a2 >= 20 )
  {
    while ( RtlValidSid(v6 + 2) )
    {
      v7 = RtlLengthSid(v6 + 2);
      v8 = *v6;
      v9 = v7 + 8;
      if ( !(_DWORD)v8 )
      {
        if ( v4 - v9 < 0 )
          break;
        return 0LL;
      }
      if ( v9 <= (int)v8 && (v8 & 3) == 0 )
      {
        v4 -= v8;
        if ( v4 >= 0 )
        {
          v6 = (unsigned int *)((char *)v6 + v8);
          if ( v4 >= 20 )
            continue;
        }
      }
      break;
    }
  }
  *a3 = (unsigned int)((_DWORD)v6 - v5);
  return 3221226086LL;
}
