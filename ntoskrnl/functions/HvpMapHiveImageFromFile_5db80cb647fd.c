__int64 __fastcall HvpMapHiveImageFromFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]
  unsigned int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v17 = 0;
  v4 = 0x200000;
  v11 = 0;
  P = 0LL;
  v15 = 0;
  v10 = BugCheckParameter2;
  v12 = 4096;
  if ( a4 < 0x200000 )
    v4 = a4;
  v16 = a4;
  v14 = v4;
  while ( 1 )
  {
    P = (PVOID)ExAllocatePool2(256LL, v4, 1867074883LL);
    if ( P )
      break;
    v4 = ((v14 >> 1) + 4095) & 0xFFFFF000;
    v14 = v4;
    if ( v4 < 0x10000 )
      return (unsigned int)-1073741801;
  }
  v8 = HvpMapHiveImage(BugCheckParameter2, v6, 0, v7, (__int64)&v10);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v8;
}
