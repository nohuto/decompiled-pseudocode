void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // eax
  _OWORD *v6; // r10
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  bool v10; // cc
  unsigned int v11; // r9d
  _OWORD *v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+3Ch] [rbp-44h]
  _OWORD *v15; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-38h]
  int v17; // [rsp+4Ch] [rbp-34h]
  _OWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( a3 )
    v5 = *a3;
  else
    v5 = 0;
  v6 = v18;
  if ( a3 )
    v6 = a3;
  *(_DWORD *)v6 = v5 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v6 + 1) = dword_140C6F2C8;
  *((_QWORD *)v6 + 1) = qword_140C6F2B0 + qword_140C6F2B8;
  *((_QWORD *)v6 + 2) = qword_140C6F2C0;
  v7 = dword_140C6F2CC;
  v8 = dword_140C6F2CC;
  *((_DWORD *)v6 + 6) = dword_140C6F2CC;
  v9 = dword_140C6F2D0;
  v10 = v7 <= dword_140C6F2D0;
  *((_DWORD *)v6 + 7) = dword_140C6F2D0;
  if ( !v10 )
    v8 = v9;
  *((_DWORD *)v6 + 6) = v8;
  if ( v6 == v18 )
  {
    if ( a1 && a2 )
    {
      v14 = 0;
      v11 = *a2;
      v12 = v6;
      v13 = 32;
      EtwTraceSiloDcEvent((__int64)&v12, 1u, a1, v11, 0x27Cu, 0x401802u);
    }
    else
    {
      v17 = 0;
      v15 = v6;
      v16 = 32;
      EtwTraceKernelEvent((__int64)&v15, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
