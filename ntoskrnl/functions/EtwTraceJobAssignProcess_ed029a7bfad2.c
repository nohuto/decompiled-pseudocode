void __fastcall EtwTraceJobAssignProcess(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // r9d
  __int128 v4; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+40h] [rbp-30h]
  int v6; // [rsp+48h] [rbp-28h]
  __int128 *v7; // [rsp+50h] [rbp-20h] BYREF
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]

  v5 = 0LL;
  v6 = 0;
  v4 = 0LL;
  EtwpCopyJobGuidSafe(&v4, a1);
  if ( v1 )
    LODWORD(v5) = *(_DWORD *)(v1 + 1452);
  else
    LODWORD(v5) = 0;
  v9 = 0;
  HIDWORD(v5) = v3;
  v6 = v2;
  v7 = &v4;
  v8 = 28;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x80000u, 0x723u, 0x501904u);
}
