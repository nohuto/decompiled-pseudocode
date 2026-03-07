void __fastcall IopPerfLogCallEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  _DWORD *v11; // [rsp+58h] [rbp-18h] BYREF
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v8 = 0LL;
  v3 = *(_QWORD *)(a2 + 184);
  v6[0] = *(unsigned __int8 *)(v3 - 72);
  v6[1] = *(unsigned __int8 *)(v3 - 71);
  v4 = *(_DWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v3 - 72) + 112);
  v9 = a2;
  v10 = a3;
  if ( (v4 & 8) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 )
      v5 = *(_QWORD *)(v5 + 192);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 192);
  }
  v8 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 24) )
      v5 = *(_QWORD *)(v5 + 24);
    v8 = v5;
  }
  v13 = 0;
  v11 = v6;
  v12 = 36;
  EtwTraceKernelEvent((__int64)&v11, 1u, 0x20000010u, 0x122u, 0x401802u);
}
