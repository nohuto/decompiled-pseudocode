__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  int **v9; // r14
  int v10; // edi
  char *v11; // rcx
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v14[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v15; // [rsp+80h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  _QWORD v18[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char v23; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a3;
  v7 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    v18[1] = 0LL;
    v15 = 0LL;
    v19 = 256;
    v16 = 0LL;
    v17 = 0;
    v18[0] = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v14[1] = *(unsigned __int16 *)(v13[0] + 12LL);
    v14[0] = 22;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v15, (struct XDCOBJ *)v13, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = (int **)(a2 + 48);
        while ( 1 )
        {
          v10 = *((_DWORD *)v9 - 10);
          v11 = &v23;
          if ( ((30 * v10 + 7) & 0xFFFFFFF8) > 0xC0 )
            v11 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)v13,
                                *((_DWORD *)v9 - 12),
                                *((_DWORD *)v9 - 11),
                                *((_DWORD *)v9 - 6),
                                (struct tagRECT *)((char *)v9 - 20),
                                (unsigned __int16 *)*(v9 - 4),
                                v10,
                                *v9,
                                *(unsigned __int8 *)(*(_QWORD *)(v13[0] + 976LL) + 213LL),
                                v11,
                                a4,
                                (const struct RFONTOBJ::Tag *)v14) )
            break;
          v9 += 7;
          if ( (unsigned __int64)(v9 - 6) >= v8 )
            goto LABEL_13;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v7;
}
