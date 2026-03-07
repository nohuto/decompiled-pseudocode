__int64 __fastcall ExpUuidGetValues(__int64 a1)
{
  int v2; // eax
  __int32 v3; // r8d
  unsigned int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  __int32 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v7 = 0;
  v6 = 0;
  v2 = ExpAllocateUuids((__int64)&v8, &v7, &v6);
  if ( v2 == -1073741267 )
    return 3221226029LL;
  if ( v2 < 0 )
    return 3221225495LL;
  v3 = v7;
  v4 = v6 >> 8;
  *(_BYTE *)(a1 + 13) = v6;
  *(_BYTE *)(a1 + 12) = v4 & 0x3F | 0x80;
  *(_QWORD *)a1 = v8 + (unsigned int)(v3 - 1) + 5748192000000000LL;
  result = 0LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 8), v3);
  return result;
}
