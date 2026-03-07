void __fastcall EtwTraceXSchedulerPriorityUpdate(__int64 a1, char a2, char a3, char a4, char *a5)
{
  int v5; // r10d
  char v6; // al
  char v7; // al
  int v8; // [rsp+30h] [rbp-30h] BYREF
  char v9; // [rsp+34h] [rbp-2Ch]
  char v10; // [rsp+35h] [rbp-2Bh]
  char v11; // [rsp+36h] [rbp-2Ah]
  char v12; // [rsp+37h] [rbp-29h]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  int *v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+4Ch] [rbp-14h]

  v5 = 0;
  v8 = *(_DWORD *)(a1 + 1232);
  v9 = a2;
  v14 = 0;
  v11 = a5[2];
  v13 = *((_DWORD *)a5 + 1);
  v6 = *a5;
  v10 = a4;
  v12 = a3;
  if ( (v6 & 1) != 0 )
  {
    v5 = 1;
    v14 = 1;
  }
  if ( (v6 & 2) != 0 )
  {
    v5 |= 2u;
    v14 = v5;
  }
  if ( (v6 & 4) != 0 )
  {
    v5 |= 8u;
    v14 = v5;
  }
  if ( (v6 & 8) != 0 )
  {
    v5 |= 0x10u;
    v14 = v5;
  }
  if ( (v6 & 0x10) != 0 )
  {
    v5 |= 0x20u;
    v14 = v5;
  }
  v7 = a5[1];
  if ( (v7 & 1) != 0 )
  {
    v5 |= 0x100u;
    v14 = v5;
  }
  if ( (v7 & 2) != 0 )
    v14 = v5 | 0x200;
  v17 = 0;
  v15 = &v8;
  v16 = 16;
  EtwTraceKernelEvent((__int64)&v15, 1u, 0xA0000020, 0xF73u, 0x400A02u);
}
