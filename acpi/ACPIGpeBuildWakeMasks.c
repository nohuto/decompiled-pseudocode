char __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  char *i; // rax
  char *v2; // rbx
  char result; // al
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  __int128 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v11 = 0;
  v10 = 0;
  v6 = a1 + 800;
  v8 = 0LL;
  v9 = 816LL;
  v7 = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    v2 = i;
    result = ACPIExtListTestElement((__int64)&v6, 1);
    if ( !result )
      break;
    ACPIGpeBuildWakeMasks(v2);
    if ( (*((_DWORD *)v2 + 2) & 0x10000) != 0 && (*((_QWORD *)v2 + 126) & 0x500000000LL) == 0 )
    {
      v4 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v2 + 126));
      v5 = 1 << (v2[504] & 7);
      if ( ((unsigned __int8)v5 & *((_BYTE *)GpeEnable + v4)) != 0 )
      {
        if ( _bittest64((const signed __int64 *)v2 + 1, 0x23u) )
        {
          *((_BYTE *)GpeSpecialHandler + v4) |= v5;
          *((_BYTE *)GpeWakeHandler + v4) &= ~(_BYTE)v5;
        }
        else if ( ((unsigned __int8)v5 & *((_BYTE *)GpeSpecialHandler + v4)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v4) |= v5;
        }
      }
    }
  }
  return result;
}
