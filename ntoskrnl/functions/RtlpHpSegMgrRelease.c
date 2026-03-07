char __fastcall RtlpHpSegMgrRelease(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  _WORD *v7; // rsi
  unsigned __int64 v8; // r15
  unsigned int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  _WORD *v13; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v6) = *(_DWORD *)a1;
  v3 = a2;
  v13 = 0LL;
  v4 = (unsigned int)-(int)v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 13) & 7;
  v12 = v4;
  v14 = a2;
  if ( !(_BYTE)v6 )
  {
LABEL_12:
    if ( v3 )
    {
      v11 = *(_OWORD *)(a1 + 40);
      LOBYTE(v6) = RtlpHpFreeVA(&v14, &v12, 0x8000, &v11);
    }
    return v6;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_8:
    LOBYTE(v6) = RtlpHpQueryVA(v3, a2, &v13, 0LL);
    v7 = v13;
    v8 = (unsigned __int64)&v13[v4 >> 21];
    v9 = 0;
    if ( (unsigned __int64)v13 < v8 )
    {
      do
      {
        LOWORD(v6) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v6) = RtlpHpSegMgrCommit(a1, v3, v9, 512, -(v6 & 0x7FF), 0x4000, 0);
        ++v7;
        v9 += 512;
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    goto LABEL_12;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(a1, v3, &v12);
  v14 = v6;
  v3 = v6;
  if ( v6 )
  {
    v4 = v12;
    goto LABEL_8;
  }
  return v6;
}
