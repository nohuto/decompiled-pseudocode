int __fastcall PopPlTraceLogPowerPlane(unsigned __int16 *a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int16 *v2; // rbx
  __int64 **v3; // r12
  unsigned __int64 v5; // rsi
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  _QWORD *v9; // r15
  unsigned __int16 *v10; // rcx
  int v11; // edx
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int16 *v17; // [rsp+58h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v18[2]; // [rsp+68h] [rbp-A0h] BYREF
  int *v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  __int64 *v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  __int64 *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h] BYREF
  int *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  int *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  unsigned __int16 *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v1 = &retaddr;
  v2 = a1 + 24;
  v3 = (__int64 **)(a1 + 4);
  LOWORD(v14) = 0;
  v17 = a1 + 24;
  if ( (unsigned int)dword_140C03928 <= 5 )
  {
    v17 = a1 + 24;
  }
  else
  {
    LOWORD(v13) = 1;
    v19 = &v13;
    v20 = 2LL;
    v21 = &v24;
    v23 = *v3;
    v24 = *a1;
    v15 = *(_DWORD *)v2;
    v25 = (__int64 *)&v15;
    v16 = *((_DWORD *)a1 + 7);
    v27 = (__int64 *)&v16;
    v22 = 2LL;
    v26 = 4LL;
    v28 = 4LL;
    LODWORD(v1) = tlgWriteEx_EtwWriteEx(
                    (__int64)&dword_140C03928,
                    (unsigned __int8 *)&word_140031D5E,
                    0LL,
                    1u,
                    0,
                    0,
                    7u,
                    v18);
  }
  v5 = 0LL;
  if ( *(_QWORD *)v2 )
  {
    do
    {
      v6 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * v5);
      LOWORD(v14) = 4;
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        LOWORD(v13) = 1;
        v19 = &v13;
        v20 = 2LL;
        v21 = &v24;
        v23 = (__int64 *)*((_QWORD *)v6 + 1);
        v24 = *v6;
        v25 = &v28;
        v27 = *v3;
        v28 = *a1;
        v16 = *((_DWORD *)v6 + 18);
        v29 = (__int64 *)&v16;
        v15 = *((_DWORD *)v6 + 8);
        v31 = &v15;
        v33 = &v14;
        v35 = v6 + 18;
        v22 = 2LL;
        v26 = 2LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 2LL;
        v36 = 32LL;
        tlgWriteEx_EtwWriteEx((__int64)&dword_140C03928, (unsigned __int8 *)&dword_140031DBC, 0LL, 1u, 0, 0, 0xBu, v18);
      }
      v1 = *(_UNKNOWN ***)v2;
      ++v5;
    }
    while ( v5 < *(_QWORD *)v2 );
    v7 = 0LL;
    if ( v1 )
    {
      do
      {
        v1 = (_UNKNOWN **)*((_QWORD *)a1 + 7);
        v8 = 0LL;
        v9 = v1[v7];
        if ( v9[9] )
        {
          do
          {
            v1 = (_UNKNOWN **)v9[10];
            v10 = (unsigned __int16 *)v1[v8];
            v11 = v10[12];
            LOWORD(v14) = v10[12];
            if ( (unsigned int)dword_140C03928 > 5 )
            {
              v21 = (__int64 *)v10;
              v19 = &v13;
              LOWORD(v13) = 1;
              v23 = &v26;
              v25 = (__int64 *)v9[1];
              v26 = *(unsigned __int16 *)v9;
              v27 = &v30;
              v29 = *v3;
              v30 = *a1;
              v31 = &v14;
              v33 = (int *)(v10 + 16);
              v20 = 2LL;
              v34 = (unsigned int)(8 * v11);
              v22 = 16LL;
              v24 = 2LL;
              v28 = 2LL;
              v32 = 2LL;
              LODWORD(v1) = tlgWriteEx_EtwWriteEx(
                              (__int64)&dword_140C03928,
                              (unsigned __int8 *)&byte_140031CD1,
                              0LL,
                              1u,
                              0,
                              0,
                              0xAu,
                              v18);
            }
            ++v8;
          }
          while ( v8 < v9[9] );
          v2 = v17;
        }
        ++v7;
      }
      while ( v7 < *(_QWORD *)v2 );
    }
  }
  return (int)v1;
}
