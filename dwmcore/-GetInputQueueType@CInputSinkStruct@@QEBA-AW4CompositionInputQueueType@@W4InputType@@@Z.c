__int64 __fastcall CInputSinkStruct::GetInputQueueType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+24h] [rbp-24h]
  unsigned int v13; // [rsp+34h] [rbp-14h]

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 && (v4 = v3 - 1) != 0 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 && (v9 = v6 - 1) != 0 )
        {
          v7 = 0;
          if ( v9 == 1 )
          {
            v10 = *(_QWORD *)(a1 + 64);
            if ( v10 )
            {
              v11 = 24;
              v12 = 0LL;
              v13 = 0;
              if ( (int)NtQueryCompositionInputSink(v10, &v11) >= 0 )
                return v13;
            }
          }
        }
        else
        {
          return *(unsigned int *)(a1 + 76);
        }
      }
      else
      {
        return *(unsigned int *)(a1 + 88);
      }
    }
    else
    {
      return *(unsigned int *)(a1 + 84);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
