/*
 * XREFs of RtlGetSessionProperties @ 0x1409B92D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlGetSessionProperties(int a1, unsigned int *a2)
{
  __int64 v4; // rdx
  char *v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // eax
  _BYTE v24[624]; // [rsp+20h] [rbp-4E8h] BYREF
  char v25; // [rsp+290h] [rbp-278h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( a1 == -1 || !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = 4LL;
    *a2 = 0;
    v5 = &v25;
    v6 = v24;
    do
    {
      v7 = v6[1];
      *(_OWORD *)v5 = *v6;
      v8 = v6[2];
      *((_OWORD *)v5 + 1) = v7;
      v9 = v6[3];
      *((_OWORD *)v5 + 2) = v8;
      v10 = v6[4];
      *((_OWORD *)v5 + 3) = v9;
      v11 = v6[5];
      *((_OWORD *)v5 + 4) = v10;
      v12 = v6[6];
      *((_OWORD *)v5 + 5) = v11;
      v13 = v6[7];
      v6 += 8;
      *((_OWORD *)v5 + 6) = v12;
      v5 += 128;
      *((_OWORD *)v5 - 1) = v13;
      --v4;
    }
    while ( v4 );
    v14 = v6[1];
    *(_OWORD *)v5 = *v6;
    v15 = v6[2];
    *((_OWORD *)v5 + 1) = v14;
    v16 = v6[3];
    *((_OWORD *)v5 + 2) = v15;
    v17 = v6[4];
    *((_OWORD *)v5 + 3) = v16;
    v18 = v6[5];
    *((_OWORD *)v5 + 4) = v17;
    v19 = v6[6];
    *((_OWORD *)v5 + 5) = v18;
    *((_OWORD *)v5 + 6) = v19;
    Blink = PsGetCurrentServerSiloGlobals()[82].Blink;
    v22 = v21;
    LOBYTE(v22) = LODWORD(Blink[1].Blink) == a1;
    *a2 = v22;
  }
  return v21;
}
