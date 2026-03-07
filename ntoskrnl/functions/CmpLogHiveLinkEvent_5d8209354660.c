void __fastcall CmpLogHiveLinkEvent(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+50h] [rbp-20h]
  int v10; // [rsp+54h] [rbp-1Ch]
  __int64 v11; // [rsp+80h] [rbp+10h] BYREF

  v11 = a1;
  v8[0] = 8LL;
  v6 = 0;
  v7 = &v11;
  v3 = 1;
  v4 = *((_QWORD *)a2 + 1);
  if ( v4 )
  {
    v3 = 2;
    v9 = *a2;
    v8[1] = v4;
    v10 = 0;
  }
  v5 = 2LL * v3;
  v8[v5 - 1] = &v6;
  v8[v5] = 2LL;
  EtwTraceKernelEvent((__int64)&v7, v3 + 1, 0x41000000u, 0x926u, 0x501902u);
}
