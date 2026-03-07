__int64 __fastcall DisplayID_GetContainerID(const struct DisplayIDObj *a1, struct _GUID *a2)
{
  int v3; // edi
  int v4; // ebx
  _BYTE *i; // r10
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  _BYTE *v8; // r8
  int v9; // eax
  signed int v10; // esi
  struct _GUID *v11; // rcx
  __int64 v12; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v3 = *((_DWORD *)a1 + 5);
  v4 = 0;
  for ( i = *(_BYTE **)a1; v4 < v3; i += (unsigned __int8)(v6 + 5) )
  {
    if ( (*i & 0xF0) != 0x20 )
      break;
    v6 = (unsigned __int8)i[1];
    v7 = v6;
    if ( v6 >= 3 )
    {
      v8 = (_BYTE *)((unsigned __int64)(i + 4) & -(__int64)((_BYTE)v6 != 0));
      do
      {
        if ( !*v8 )
          break;
        v9 = (unsigned __int8)v8[2];
        v10 = v9 + 3;
        if ( v7 < 3 || (int)v7 < v10 )
          break;
        if ( *v8 == 41 )
        {
          if ( (_BYTE)v9 != 16 )
            return 3221225659LL;
          v11 = a2;
          if ( a2 < &a2[1] )
          {
            v12 = v8 - (_BYTE *)a2;
            do
            {
              LOBYTE(v11->Data1) = *((_BYTE *)&v11->Data1 + v12 + 3);
              v11 = (struct _GUID *)((char *)v11 + 1);
            }
            while ( v11 < &a2[1] );
          }
          a2->Data1 = _byteswap_ulong(a2->Data1);
          a2->Data2 = __ROR2__(a2->Data2, 8);
          a2->Data3 = __ROR2__(a2->Data3, 8);
          return 0LL;
        }
        v7 -= v10;
        v8 += (unsigned int)v10;
      }
      while ( v7 >= 3 );
    }
    ++v4;
  }
  return 3221225659LL;
}
