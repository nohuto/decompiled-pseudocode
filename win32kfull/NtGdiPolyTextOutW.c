__int64 __fastcall NtGdiPolyTextOutW(__int64 a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  char *v8; // r15
  ULONG64 v9; // rdx
  unsigned int i; // ecx
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // r12
  char *v20; // r11
  unsigned int j; // ebx
  char *v22; // r9
  unsigned int v23; // r10d
  char *v24; // r14
  unsigned int k; // ebx
  __int64 v26; // rax
  size_t v27; // rax
  char *v28; // r14
  __int64 v29; // rax
  __int64 v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+48h] [rbp-90h]
  char *v33; // [rsp+58h] [rbp-80h]
  _BYTE v34[104]; // [rsp+70h] [rbp-68h] BYREF

  v6 = 1;
  v7 = 56 * a3;
  v8 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v6 = 0;
  }
  else
  {
    if ( 56LL * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (ULONG64)&a2[56 * a3];
      if ( v9 > MmUserProbeAddress || v9 < (unsigned __int64)a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v11 = 56LL * i;
      v12 = *(int *)&a2[v11 + 8];
      v13 = v7;
      v7 += 2 * v12;
      if ( v12 > 0x1388000 || v7 < v13 )
        goto LABEL_24;
      if ( *(_QWORD *)&a2[v11 + 48] )
      {
        v14 = 4 * v12;
        if ( (*(_DWORD *)&a2[v11 + 24] & 0x2000) != 0 )
        {
          if ( (unsigned int)(2 * v12) > 0x9C4000 )
            v6 = 0;
          v14 = 8 * v12;
        }
        else if ( v12 > 0x9C4000 )
        {
          v6 = 0;
        }
        v15 = v7;
        v7 += v14;
        if ( !v6 || v7 < v15 )
          goto LABEL_24;
      }
      if ( (_DWORD)v12 && !*(_QWORD *)&a2[v11 + 16] )
      {
LABEL_24:
        v6 = 0;
        break;
      }
    }
  }
  if ( v6 && v7 )
  {
    if ( v7 <= 0x2710000 )
      v8 = (char *)AllocFreeTmpBuffer(v7);
    if ( v8 )
    {
      memmove(v8, a2, 56LL * a3);
      v19 = &v8[56 * a3];
      v20 = &v8[v7];
      v33 = v20;
      for ( j = 0; j < a3; ++j )
      {
        v18 = 56LL * j;
        v31 = v18;
        v16 = *(unsigned int *)&v8[v18 + 8];
        if ( (_DWORD)v16 )
        {
          v22 = *(char **)&v8[v18 + 48];
          if ( v22 )
          {
            v16 = (unsigned int)(4 * v16);
            v17 = 56LL * j;
            v23 = *(_DWORD *)&v8[v17 + 8];
            if ( (*(_DWORD *)&v8[v18 + 24] & 0x2000) != 0 )
            {
              if ( v23 > 0x4E2000 )
                v6 = 0;
              v16 = (unsigned int)(2 * v16);
            }
            else if ( v23 > 0x9C4000 )
            {
              v6 = 0;
            }
            v18 = (unsigned int)v16;
            v24 = &v19[v16];
            if ( !v6 || v24 < v19 || v24 > v20 )
            {
LABEL_62:
              v6 = 0;
              goto LABEL_63;
            }
            if ( &v22[v16] < v22 || (unsigned __int64)&v22[v16] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v19, v22, (unsigned int)v16);
            *(_QWORD *)&v8[v31 + 48] = v19;
            v19 = v24;
            v20 = v33;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v26 = 56LL * k;
        v32 = v26;
        v17 = *(unsigned int *)&v8[v26 + 8];
        if ( (_DWORD)v17 )
        {
          v16 = *(_QWORD *)&v8[v26 + 16];
          if ( !v16 )
            goto LABEL_62;
          v27 = (unsigned int)(2 * v17);
          v18 = v27;
          v28 = &v19[v27];
          if ( (unsigned int)v17 > 0x1388000 || v28 < v19 || v28 > v20 )
            goto LABEL_62;
          if ( v16 + v27 < v16 || v16 + v27 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v19, (const void *)v16, v27);
          *(_QWORD *)&v8[v32 + 16] = v19;
          v19 = v28;
          v20 = v33;
        }
      }
LABEL_63:
      if ( v6 )
      {
        v29 = SGDGetSessionState(v17);
        EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v34, *(struct Gre::Full::SESSION_GLOBALS **)(v29 + 32));
        v6 = GrePolyTextOutW(a1, v8, a3, a4);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
      }
      FreeTmpBuffer(v8, v16, v18);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
