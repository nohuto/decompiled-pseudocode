__int64 __fastcall MiCheckDosCalls(unsigned __int16 *a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned __int16 *v5; // r10
  unsigned __int16 i; // dx
  unsigned __int64 v7; // rdi
  int v8; // r8d

  v2 = a1[15];
  if ( (_WORD)v2 )
  {
    v4 = a1[20];
    v5 = (unsigned __int16 *)((char *)a1 + v4);
    if ( v4 + 2 * v2 <= a2 )
    {
      for ( i = 0; i < (unsigned __int16)v2; ++i )
      {
        v7 = a1[21] + (unsigned int)*v5;
        if ( v7 >= a2 )
          break;
        v8 = *((unsigned __int8 *)a1 + v7);
        if ( !(_BYTE)v8 || (unsigned int)(v7 + v8) >= a2 )
          break;
        if ( (_BYTE)v8 == 8 && *(_QWORD *)((char *)a1 + v7 + 1) == 0x534C4C4143534F44LL )
          return 1LL;
        ++v5;
      }
    }
  }
  return 0LL;
}
