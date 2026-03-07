__int64 __fastcall DisplayID_GetBlock(__int64 *a1, int a2, _QWORD *a3)
{
  int v3; // r11d
  int v4; // esi
  __int64 v6; // r9
  unsigned int v8; // r8d
  unsigned int v9; // r10d
  unsigned __int8 *v10; // rdx
  int v11; // edi
  int v12; // ecx

  *a3 = 0LL;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 5);
  v6 = *a1;
  if ( v4 > 0 )
  {
    do
    {
      v8 = *(unsigned __int8 *)(v6 + 1);
      v9 = v8;
      if ( v8 >= 3 )
      {
        v10 = (unsigned __int8 *)((v6 + 4) & -(__int64)((_BYTE)v8 != 0));
        do
        {
          v11 = *v10;
          if ( !(_BYTE)v11 )
            break;
          v12 = v10[2] + 3;
          if ( v9 < 3 || (int)v9 < v12 )
            break;
          if ( v11 == a2 )
          {
            *a3 = v10;
            return 0LL;
          }
          v9 -= v12;
          v10 += (unsigned int)v12;
        }
        while ( v9 >= 3 );
      }
      ++v3;
      v6 += (unsigned __int8)(v8 + 5);
    }
    while ( v3 < v4 );
  }
  return 3221225659LL;
}
