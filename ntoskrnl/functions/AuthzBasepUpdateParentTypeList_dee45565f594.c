__int64 __fastcall AuthzBasepUpdateParentTypeList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rsi
  __int64 result; // rax
  int v10; // edi
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rcx
  __int64 i; // rdx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  bool v20; // zf

  LODWORD(v6) = a3;
  while ( 1 )
  {
    result = (unsigned int)v6;
    v10 = 0;
    v11 = -1;
    v12 = 0;
    v13 = 6LL * (unsigned int)v6;
    v6 = *(unsigned int *)(a1 + 48LL * (unsigned int)v6 + 20);
    if ( (_DWORD)v6 == -1 )
      return result;
    for ( i = (unsigned int)(v6 + 1); (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      result = *(unsigned __int16 *)(a1 + 48 * i);
      if ( (unsigned __int16)result <= *(_WORD *)(a1 + 48 * v6) )
        break;
      if ( (_WORD)result == *(_WORD *)(a1 + 8 * v13) )
      {
        v10 |= *(_DWORD *)(a1 + 48 * i + 24);
        v11 &= *(_DWORD *)(a1 + 48 * i + 28);
        v12 |= *(_DWORD *)(a1 + 48 * i + 32);
      }
    }
    v15 = *(_DWORD *)(a1 + 48 * v6 + 24);
    if ( v10 == v15 && v11 == *(_DWORD *)(a1 + 48 * v6 + 28) && v12 == *(_DWORD *)(a1 + 48 * v6 + 32) )
      return result;
    switch ( a5 )
    {
      case 0:
        *(_DWORD *)(a1 + 48 * v6 + 24) = v10;
        v20 = (v15 & ~v10) == 0;
        v17 = v15 & ~v10;
        goto LABEL_18;
      case 1:
        v19 = ~*(_DWORD *)(a1 + 48 * v6 + 28);
        *(_DWORD *)(a1 + 48 * v6 + 28) = v11;
        v17 = v11 & v19;
        v20 = v17 == 0;
LABEL_18:
        if ( !v20 )
        {
          v18 = 0x10000;
LABEL_20:
          AuthzBasepSetAccessReasons(v17, v18, a4, *(_QWORD *)(a1 + 48 * v6 + 40), 0);
        }
        break;
      case 2:
        v16 = ~*(_DWORD *)(a1 + 48 * v6 + 32);
        *(_DWORD *)(a1 + 48 * v6 + 32) = v12;
        v17 = v12 & v16;
        if ( v17 )
        {
          v18 = 0x20000;
          goto LABEL_20;
        }
        break;
      default:
        return result;
    }
  }
}
