__int64 __fastcall RtlSetSystemGlobalData(int a1, _QWORD *a2, int a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 CurrentServerSilo; // rax
  _QWORD *v15; // rcx
  int v16; // ecx

  if ( a1 > 14 )
  {
    v10 = a1 - 15;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return 3221225485LL;
            if ( a3 == 8 )
            {
              *(_QWORD *)(MmWriteableSharedUserData + 952) = *a2;
              return 0LL;
            }
          }
          else if ( a3 == 2 )
          {
            *(_WORD *)(MmWriteableSharedUserData + 966) = *(_WORD *)a2;
            return 0LL;
          }
        }
        else if ( a3 == 1 )
        {
          *(_BYTE *)(MmWriteableSharedUserData + 966) = *(_BYTE *)a2;
          return 0LL;
        }
      }
      else if ( a3 == 1 )
      {
        *(_BYTE *)(MmWriteableSharedUserData + 967) = *(_BYTE *)a2;
        return 0LL;
      }
    }
    else if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 48) = *(_WORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  if ( a1 == 14 )
  {
    if ( a3 == 4 )
    {
      v16 = *(_DWORD *)a2;
      if ( (*(_DWORD *)a2 & 0x40000000) != 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v16 & 0xBFFFFFFF);
        return 0LL;
      }
      if ( v16 < 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), v16 & 0x7FFFFFFF);
        return 0LL;
      }
    }
    return 3221225990LL;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    if ( a3 == 8 )
    {
      *(_QWORD *)(MmWriteableSharedUserData + 592) = *a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v5 = v4 - 3;
  if ( !v5 )
  {
    if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 44) = *(_WORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 == 2 )
    {
      *(_WORD *)(MmWriteableSharedUserData + 46) = *(_WORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v7 )
  {
    if ( a3 == 4 )
    {
      if ( PsIsCurrentThreadInServerSilo(v7, (__int64)a2) )
      {
        CurrentServerSilo = PsGetCurrentServerSilo();
        v15 = &PspHostSiloGlobals;
        if ( CurrentServerSilo )
          v15 = *(_QWORD **)(CurrentServerSilo + 1488);
        *(_DWORD *)(v15[165] + 584LL) = *(_DWORD *)a2;
      }
      else
      {
        *(_DWORD *)(MmWriteableSharedUserData + 576) = *(_DWORD *)a2;
      }
      return 0LL;
    }
    return 3221225990LL;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    if ( a3 == 1 )
    {
      *(_BYTE *)(MmWriteableSharedUserData + 724) = *(_BYTE *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  if ( v8 == 3 )
  {
    if ( a3 == 4 )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 740) = *(_DWORD *)a2;
      return 0LL;
    }
    return 3221225990LL;
  }
  return 3221225485LL;
}
