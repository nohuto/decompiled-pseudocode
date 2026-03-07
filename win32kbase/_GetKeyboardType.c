__int64 __fastcall GetKeyboardType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int16 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  unsigned __int16 v32; // cx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9

  v4 = 0;
  if ( (_DWORD)a1 )
  {
    v5 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      if ( !(_DWORD)v6 )
        return *(unsigned __int16 *)(SGDGetUserSessionState(v6, a2, a3, a4) + 12572);
      v7 = (unsigned int)(v6 - 2147483644);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 == 1 && *(_QWORD *)(SGDGetUserSessionState(v7, a2, a3, a4) + 13896) )
          return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 13896)
                                                         + 48LL)
                                             + 32LL)
                                 + 100LL);
        return 0LL;
      }
      if ( *(_QWORD *)(SGDGetUserSessionState(v7, a2, a3, a4) + 13896) )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 13896) + 48LL)
                                    + 32LL)
                        + 96LL);
        if ( v17 )
        {
          if ( v17 != 81 )
            return v17;
          return v4;
        }
      }
      return 0LL;
    }
    v18 = *(unsigned __int16 **)(SGDGetUserSessionState(v5, a2, a3, a4) + 13848);
    if ( *(_QWORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 13896) )
    {
      v28 = *(_QWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 13896);
      if ( *(_QWORD *)(*(_QWORD *)(v28 + 56) + 48LL) )
      {
        v28 = *(_QWORD *)(SGDGetUserSessionState(v28, v27, v29, v30) + 13896);
        v18 = *(unsigned __int16 **)(*(_QWORD *)(v28 + 56) + 48LL);
      }
      v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v28, v27, v29, v30) + 13896) + 56LL)
                                  + 32LL)
                      + 100LL);
    }
    else
    {
      LOBYTE(v31) = *(_BYTE *)(SGDGetUserSessionState(v24, v23, v25, v26) + 12569);
    }
    if ( v18 )
    {
      v32 = v18[1];
      if ( (v32 & 0x10) != 0 )
        return 0LL;
      if ( (v32 & 0x20) != 0 )
        return 2LL;
      v4 = *v18 << 8;
    }
    return v4 | v31 & 0xF;
  }
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13896) )
    return *(unsigned __int8 *)(SGDGetUserSessionState(v34, v33, v35, v36) + 12568);
  v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 13896) + 56LL) + 32LL);
  result = *(unsigned int *)(v34 + 96);
  if ( !(_DWORD)result || (_DWORD)result == 81 )
    return *(unsigned __int8 *)(SGDGetUserSessionState(v34, v33, v35, v36) + 12568);
  return result;
}
