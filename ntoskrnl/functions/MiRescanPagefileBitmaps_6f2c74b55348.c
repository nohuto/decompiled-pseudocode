__int64 __fastcall MiRescanPagefileBitmaps(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // r8
  unsigned __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0;
  v8[1] = 0;
  MiInitializePagefileBitmapsCache();
  v4 = *(_QWORD *)(a1 + 176);
  v5 = 0;
  v8[0] = *(_DWORD *)a1;
  v6 = *(_QWORD *)(a1 + 112);
  v11 = v4;
  v9 = *(_QWORD *)(v6 + 32);
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong(v8, v5, v3, 0xFFFFFFFF, &v10);
    if ( !(_DWORD)result )
      break;
    v3 = v10;
    v5 = v10 + result;
    if ( (unsigned int)result > *(_DWORD *)(v4 + 52) )
    {
      MiRescanPageFileBitmapPortion(a1, *(_QWORD *)(a1 + 112) + 8LL, v10, result, &v11);
      v4 = v11;
    }
  }
  if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
    v1 = *(_DWORD *)(v4 + 52);
  *(_DWORD *)(a1 + 140) = v1;
  return result;
}
