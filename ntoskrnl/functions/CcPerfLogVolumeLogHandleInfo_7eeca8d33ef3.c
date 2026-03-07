void __fastcall CcPerfLogVolumeLogHandleInfo(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+3Ch] [rbp-34h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  __int64 *v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]

  v10 = a5;
  v11 = a6;
  v7 = a1;
  v9 = a3;
  v12 = a4;
  v6 = (a2 & 1) != 0;
  v8 = v6;
  if ( (a2 & 2) != 0 )
  {
    v6 |= 2u;
    v8 = v6;
  }
  if ( (a2 & 4) != 0 )
  {
    v6 |= 4u;
    v8 = v6;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v6 |= 0x10u;
    v8 = v6;
  }
  if ( (a2 & 8) != 0 )
    v8 = v6 | 8;
  v15 = 0;
  v13 = &v7;
  v14 = 40;
  EtwTraceKernelEvent((__int64)&v13, 1u, 0x80020000, 0x160Du, 0x401902u);
}
