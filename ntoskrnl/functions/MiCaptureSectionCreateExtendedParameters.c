__int64 __fastcall MiCaptureSectionCreateExtendedParameters(
        _BYTE *Address,
        ULONGLONG ullMultiplicand,
        char a3,
        char a4,
        __int64 a5)
{
  _BYTE *v6; // rbx
  NTSTATUS v7; // ecx
  __int64 v9; // r14
  int v10; // esi
  _BYTE *v11; // r14
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  ULONGLONG pullResult; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v18; // [rsp+38h] [rbp-30h]
  _BYTE *v19; // [rsp+48h] [rbp-20h]

  v6 = Address;
  pullResult = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  if ( (a3 & 1) != 0 )
    *(_DWORD *)(a5 + 20) = 1;
  if ( (_DWORD)ullMultiplicand )
  {
    if ( Address )
    {
      v9 = (unsigned int)ullMultiplicand;
      v7 = RtlULongLongMult((unsigned int)ullMultiplicand, 0x10uLL, &pullResult);
      if ( v7 >= 0 )
      {
        v10 = 0;
        if ( a4 )
          ProbeForWrite(v6, pullResult, 8u);
        v18 = v6;
        v11 = &v6[16 * v9];
        v19 = v11;
        while ( v6 < v11 )
        {
          v12 = (unsigned __int8)*(_DWORD *)v6;
          if ( (unsigned int)(v12 - 1) > 2 || *(_QWORD *)v6 >= 0x100uLL )
            return (unsigned int)-1073741811;
          v13 = 1 << v12;
          if ( ((1 << v12) & 0xE) == 0 )
            return (unsigned int)-1073741811;
          if ( (v13 & v10) != 0 )
            return (unsigned int)-1073741811;
          v10 |= v13;
          v14 = v12 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              if ( v15 != 1 )
                return (unsigned int)-1073741811;
              if ( a4 )
                return (unsigned int)-1073741811;
              *(_BYTE *)(a5 + 12) = v6[8];
            }
            else
            {
              if ( *((_QWORD *)v6 + 1) > 0xFFFFFFFFuLL )
                return (unsigned int)-1073741811;
              v16 = *((_DWORD *)v6 + 2);
              *(_DWORD *)(a5 + 8) = v16;
              if ( v16 == -1 )
                return (unsigned int)-1073741811;
              *(_DWORD *)(a5 + 8) = v16 + 1;
            }
          }
          else
          {
            if ( (*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              return (unsigned int)-1073741811;
            *(_BYTE *)a5 = 1;
            *(_DWORD *)(a5 + 4) = *((_DWORD *)v6 + 2);
          }
          v6 += 16;
          v18 = v6;
        }
        *(_DWORD *)(a5 + 16) = v10;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return Address != 0LL ? 0xC000000D : 0;
  }
  return (unsigned int)v7;
}
