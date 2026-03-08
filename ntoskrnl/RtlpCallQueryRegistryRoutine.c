/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x14069B8C4
 * Callers:
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x14069E6E4 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x14069ED54 (RtlpValidateKeyTrust.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r12d
  unsigned int v8; // ebx
  unsigned int v11; // ebp
  __int64 v12; // r11
  int v13; // eax
  unsigned __int64 v14; // r10
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // edx
  char *v19; // r15
  int v20; // ecx
  unsigned __int64 v21; // rdi
  int v22; // r12d
  _WORD *v23; // rdi
  unsigned int v24; // esi
  int v25; // edx
  unsigned int v26; // eax
  __int64 result; // rax
  _WORD *v28; // rcx
  bool v29; // cf
  unsigned __int64 v30; // r12
  int v31; // ecx
  _WORD *i; // rsi
  unsigned int v34; // ebp
  int RegistryDirect; // eax
  unsigned int v37; // eax
  _WORD *v38; // rcx

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v11 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v12 = a1;
  v13 = a3[1];
  v14 = (unsigned __int64)a3;
  if ( v13 )
  {
    v15 = a3[2];
    if ( v15 != -1 )
    {
      v16 = a3[3];
      if ( v16 || v13 != v11 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v19 = *(char **)(a2 + 16);
LABEL_10:
          v11 = a3[1];
          v23 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v24 = a3[3];
          goto LABEL_11;
        }
        if ( v16 )
          v17 = (unsigned int)(v16 + v15);
        else
          v17 = (unsigned int)(a3[4] + 20);
        v18 = a3[4];
        v19 = (char *)(((unsigned __int64)a3 + v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v20 = v18 + 2;
        v21 = (int)(v18 + 2);
        if ( v21 >= 2 )
        {
          v22 = (_DWORD)a3 + v7;
          if ( v22 - (int)v19 < v20 )
          {
            result = 3221225507LL;
            *a4 = v20 + (_DWORD)v19 - (_DWORD)a3;
            return result;
          }
          memmove(v19, a3 + 5, v18);
          v12 = a1;
          v14 = (unsigned __int64)&v19[v21 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v22 - v14;
          *(_WORD *)&v19[a3[4]] = 0;
          goto LABEL_10;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v11 )
  {
    v29 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v29 ? 0xC0000034 : 0;
  }
  v24 = *(_DWORD *)(a2 + 48);
  v19 = *(char **)(a2 + 16);
  v23 = *(_WORD **)(a2 + 40);
  if ( !v24 )
  {
    v28 = *(_WORD **)(a2 + 40);
    if ( v11 - 1 <= 1 )
    {
      if ( !v23 )
        return 3221225532LL;
      while ( *v28++ )
        ;
      v24 = (_DWORD)v28 - (_DWORD)v23;
    }
    else if ( v11 == 7 )
    {
      if ( !v23 )
        return 3221225532LL;
      if ( *v23 )
      {
        do
        {
          while ( *v28++ )
            ;
        }
        while ( *v28 );
      }
      v24 = (_DWORD)v28 - (_DWORD)v23 + 2;
    }
  }
LABEL_11:
  v25 = *(_DWORD *)(a2 + 8);
  if ( (v25 & 0x20) == 0 )
    goto LABEL_12;
  if ( (v25 & 0x100) == 0 )
  {
    if ( (v25 & 0x80u) == 0 || v11 - 1 > 1 && v11 != 7 )
      goto LABEL_12;
    v29 = (v25 & 4) != 0;
    return v29 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v11 )
    return 3221225508LL;
LABEL_12:
  if ( (v25 & 0x10) == 0 )
  {
    if ( v11 == 7 )
    {
      v30 = (unsigned __int64)v23 + v24 - 4;
      v31 = 0;
      for ( i = v23; (unsigned __int64)i < v30; v23 = i )
      {
        while ( *i++ )
          ;
        v34 = (_DWORD)i - (_DWORD)v23;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v31 = RtlpValidateKeyTrust(v12);
            if ( v31 < 0 )
              return (unsigned int)v31;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v23, v34, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v19,
                             1LL,
                             v23,
                             v34,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v31 = 0;
        if ( RegistryDirect != -1073741789 )
          v31 = RegistryDirect;
        if ( v31 < 0 )
          break;
        v12 = a1;
      }
      return (unsigned int)v31;
    }
    if ( v11 == 2 )
    {
      v37 = v24 - 2;
      if ( v24 - 2 <= 0xFFFA )
      {
        v38 = v23;
        if ( v24 != 2 )
        {
          while ( *v38 != 37 )
          {
            ++v38;
            v37 -= 2;
            if ( !v37 )
              goto LABEL_15;
          }
          if ( v7 > 0 )
          {
            if ( (unsigned __int64)v7 > 0xFFFE )
              *(_WORD *)(v14 + 65532) = 0;
            else
              *(_WORD *)(v14 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          return 3221225485LL;
        }
      }
    }
  }
LABEL_15:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(v12);
      if ( (int)result < 0 )
        return result;
    }
    v26 = RtlpQueryRegistryDirect(v11, v23, v24, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v26 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v19,
            v11,
            v23,
            v24,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v26 != -1073741789 )
    return v26;
  return v8;
}
