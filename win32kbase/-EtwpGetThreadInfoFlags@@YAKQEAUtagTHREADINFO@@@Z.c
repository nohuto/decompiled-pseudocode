int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  __int64 v1; // r8
  int v3; // r9d
  int v4; // r8d
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rcx
  int result; // eax

  v1 = *((_QWORD *)a1 + 159);
  v3 = ((int)v1 < 0) + 2;
  if ( (v1 & 0x100000000LL) == 0 )
    v3 = (*((_QWORD *)a1 + 159) & 0x80000000LL) != 0;
  if ( (v1 & 0x200000000LL) != 0 )
    v3 |= 4u;
  v4 = *((_DWORD *)a1 + 122);
  v5 = v3 | 8;
  if ( !*((_DWORD *)a1 + 227) )
    v5 = v3;
  v6 = v5 | 0x10;
  if ( !*((_DWORD *)a1 + 226) )
    v6 = v5;
  v7 = v6 | 0x20;
  if ( v4 >= 0 )
    v7 = v6;
  v8 = v7 | 0x40;
  if ( (v4 & 1) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (v4 & 0x400) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( !*((_QWORD *)a1 + 150) )
    v10 = v9;
  v11 = *((_QWORD *)a1 + 54);
  result = v10;
  if ( v11 && *(_DWORD *)(v11 + 40) )
    result = v10 | 0x100;
  if ( gptiForeground == a1 )
    result |= 0x400u;
  if ( v11 == gpqForeground )
    return result | 0x800;
  return result;
}
