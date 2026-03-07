__int64 __fastcall ExprOp1_32(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  __int64 result; // rax
  int v6; // r10d
  unsigned int v7; // r9d
  char v8; // cl
  unsigned int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // ecx
  unsigned int i; // edx
  int v14; // eax
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v18 = 0LL;
  v4 = 0;
  result = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, a2[10] + 40LL, 135, (__int64)&v18);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) != 128 )
      {
        if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
        {
          v15 = !_BitScanReverse((unsigned int *)&v16, *(_DWORD *)(a2[10] + 16LL));
        }
        else
        {
          if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
          {
            if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
            {
              v12 = 1;
              for ( i = *(_DWORD *)(a2[10] + 16LL); i; i >>= 4 )
              {
                v14 = v12 * (i & 0xF);
                v12 *= 10;
                v4 += v14;
              }
            }
            else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
            {
              v6 = 4;
              v7 = 0;
              v8 = 0;
              v9 = *(_DWORD *)(a2[10] + 16LL);
              do
              {
                if ( !v9 )
                  break;
                v10 = v9 / 0xA;
                v11 = (v9 % 0xA) << v8;
                v8 = v6;
                v4 |= v11;
                v6 += 4;
                ++v7;
                v9 = v10;
              }
              while ( v7 < 8 );
            }
            goto LABEL_21;
          }
          v15 = !_BitScanForward((unsigned int *)&v16, *(_DWORD *)(a2[10] + 16LL));
        }
        if ( !v15 )
          v4 = v16 + 1;
        goto LABEL_21;
      }
      v4 = ~*(_DWORD *)(a2[10] + 16LL);
LABEL_21:
      v17 = v18;
      *(_WORD *)(a2[11] + 2LL) = 1;
      *(_DWORD *)(a2[11] + 16LL) = v4;
      return WriteObject(a1, v17, a2[11]);
    }
  }
  return result;
}
