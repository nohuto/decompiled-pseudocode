__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(char *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  char v4; // r15
  unsigned __int64 v5; // r13
  unsigned int v7; // esi
  unsigned __int64 v8; // r12
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // dx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // edx
  unsigned __int16 v15; // r14
  __int64 v16; // rsi
  unsigned __int16 i; // dx
  int v18; // r9d
  __int64 v19; // rcx
  int v20; // eax
  unsigned __int16 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 RecentEvents; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v28; // ebx
  DXGDIAGNOSTICS **v29; // r15
  __int64 v30; // r14
  DXGDIAGNOSTICS *v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int16 v36; // [rsp+28h] [rbp-B1h]
  unsigned int v37; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v38[2]; // [rsp+38h] [rbp-A1h] BYREF
  _DWORD v39[9]; // [rsp+48h] [rbp-91h]
  __int64 v40; // [rsp+6Ch] [rbp-6Dh]
  _DWORD v41[28]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = a4 + 21;
  v8 = a2;
  if ( a2 <= 4 * (unsigned __int64)(2 * v7) )
    return 0LL;
  v10 = 0;
  if ( a1 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      ++v11;
      *(_QWORD *)&a1[8 * v12] = 0LL;
      v12 = v11;
    }
    while ( v11 < v7 );
    *(_DWORD *)a1 = v7;
  }
  v13 = 8 * v7;
  v14 = 8;
  v15 = 0;
  if ( v13 + 8 > v5 )
  {
    v14 = 0;
  }
  else if ( a1 )
  {
    *(_DWORD *)&a1[v13] = 2;
    v15 = 1;
    a1[v13 + 4] = word_1C013B49C;
    a1[v13 + 5] = 0;
    *((_DWORD *)a1 + 2) = v13;
    *((_DWORD *)a1 + 3) = 9;
  }
  v16 = (unsigned int)(v14 + v13);
  memset(v41, 0, sizeof(v41));
  if ( (int)DpiGetDbgInfoAdapters(v41) >= 0 )
  {
    for ( i = 0; i < 7u; ++i )
    {
      if ( (unsigned int)v16 >= (unsigned int)v5 )
        break;
      v18 = v41[4 * i];
      if ( !v18 )
        break;
      if ( v16 + 16 <= v5 )
      {
        ++v15;
        if ( a1 )
        {
          *(_DWORD *)&a1[v16 + 4] = v41[4 * i + 1];
          *(_DWORD *)&a1[v16 + 8] = v41[4 * i + 2];
          v19 = 2LL * v15;
          v20 = (*(_DWORD *)&a1[v16 + 12] ^ v41[4 * i + 3]) & 3;
          *(_DWORD *)&a1[v16] = v18;
          *(_DWORD *)&a1[v16 + 12] ^= v20;
          *(_DWORD *)&a1[4 * v19] = v16;
          *(_DWORD *)&a1[4 * v19 + 4] = i + 32;
        }
        v16 = (unsigned int)(v16 + 16);
      }
    }
  }
  v21 = v15 + 1;
  if ( a1 )
  {
    a1[v16] ^= (a1[v16] ^ TdrGatherPowerTriage()) & 3;
    v22 = 2LL * v21;
    *(_DWORD *)&a1[4 * v22] = v16;
    v16 = (unsigned int)(v16 + 8);
    *(_DWORD *)&a1[4 * v22 + 4] = 48;
  }
  v39[0] = 1;
  v39[1] = 32;
  v39[2] = 32;
  v39[6] = 32;
  v39[8] = 32;
  v39[3] = 64;
  v39[4] = 64;
  v39[5] = 64;
  v39[7] = 64;
  v40 = 64LL;
  do
  {
    if ( (unsigned int)v16 >= (unsigned int)v5 )
      break;
    if ( v4 )
      v23 = 0xFFFFFFFFLL;
    else
      v23 = (unsigned int)v39[v10];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v10, v23, 0LL, 0LL);
    if ( v16 + RecentEvents < RecentEvents || v16 + RecentEvents > v8 )
      LODWORD(RecentEvents) = v5 - v16;
    if ( (_DWORD)RecentEvents )
    {
      ++v21;
      if ( a1 )
      {
        if ( a3 )
          v25 = -1;
        else
          v25 = v39[v10];
        LODWORD(RecentEvents) = WdLogGetRecentEvents(v10, v25, &a1[(unsigned int)v16], (unsigned int)RecentEvents);
        v26 = 2LL * v21;
        *(_DWORD *)&a1[4 * v26] = v16;
        *(_DWORD *)&a1[4 * v26 + 4] = v10 + 16;
      }
      v16 = (unsigned int)(RecentEvents + v16);
      v8 = v5;
    }
    v4 = a3;
    ++v10;
  }
  while ( v10 < 0xBu );
  v36 = v21;
  if ( a4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v28 = 0;
    v29 = (DXGDIAGNOSTICS **)v38;
    v38[0] = *((_QWORD *)Global + 116);
    v38[1] = *((_QWORD *)Global + 117);
    v30 = 2LL;
    do
    {
      v31 = *v29;
      v32 = *((unsigned int *)*v29 + 4);
      if ( (unsigned int)v16 + v32 >= v32 && (unsigned int)v16 + v32 <= v5 )
      {
        if ( a1 )
        {
          v37 = *((_DWORD *)*v29 + 4);
          if ( (int)DXGDIAGNOSTICS::ReadDiagnostics(
                      v31,
                      (unsigned __int8 *)&a1[(unsigned int)v16 + (unsigned __int64)v28],
                      &v37,
                      0xFFFFFFFF) >= 0 )
            v28 += v37;
        }
        else
        {
          v28 += v32;
        }
      }
      ++v29;
      --v30;
    }
    while ( v30 );
    if ( a1 )
    {
      if ( v28 )
      {
        v33 = 2LL * (unsigned __int16)(v36 + 1);
        *(_DWORD *)&a1[4 * v33] = v16;
        *(_DWORD *)&a1[4 * v33 + 4] = 177;
      }
    }
    LODWORD(v16) = v28 + v16;
  }
  return (unsigned int)v16;
}
