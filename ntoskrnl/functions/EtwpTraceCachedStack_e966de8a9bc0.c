void __fastcall EtwpTraceCachedStack(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  unsigned __int16 v4; // r10
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 *v10; // [rsp+30h] [rbp-B8h] BYREF
  int v11; // [rsp+38h] [rbp-B0h]
  _DWORD v12[33]; // [rsp+3Ch] [rbp-ACh]
  __int64 v13; // [rsp+108h] [rbp+20h] BYREF

  v13 = a4;
  v12[0] = 0;
  v10 = &v13;
  v4 = 1;
  v11 = 8;
  do
  {
    v7 = 32;
    if ( *(_DWORD *)(a4 + 32) < 0x20u )
      v7 = *(_DWORD *)(a4 + 32);
    v8 = 2LL * v4++;
    v12[2 * v8] = 0;
    (&v10)[v8] = (__int64 *)(a4 + 40);
    v12[2 * v8 - 1] = 8 * v7;
    a4 = *(_QWORD *)(a4 + 16);
  }
  while ( a4 );
  v9 = 4195842;
  if ( a3 == 6180 )
    v9 = 4194306;
  EtwpLogKernelEvent((__int64)&v10, a1, a2, v4, a3, v9);
}
