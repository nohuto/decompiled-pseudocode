__int64 __fastcall ExprOp1_64(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // r10d
  unsigned int v7; // r9d
  char v8; // cl
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 i; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  result = ValidateArgTypes(a1, a2[10], 0, "I");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, a2[10] + 40LL, 135, (__int64)&v17);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(a2[7] + 8LL) != 128 )
      {
        if ( *(_DWORD *)(a2[7] + 8LL) == 129 )
        {
          v14 = !_BitScanReverse64((unsigned __int64 *)&v15, *(_QWORD *)(a2[10] + 16LL));
        }
        else
        {
          if ( *(_DWORD *)(a2[7] + 8LL) != 130 )
          {
            if ( *(_DWORD *)(a2[7] + 8LL) == 10331 )
            {
              v12 = 1LL;
              for ( i = *(_QWORD *)(a2[10] + 16LL); i; i >>= 4 )
              {
                v4 += v12 * (i & 0xF);
                v12 *= 10LL;
              }
            }
            else if ( *(_DWORD *)(a2[7] + 8LL) == 10587 )
            {
              v6 = 4;
              v7 = 0;
              v8 = 0;
              v9 = *(_QWORD *)(a2[10] + 16LL);
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
              while ( v7 < 0x10 );
            }
            goto LABEL_21;
          }
          v14 = !_BitScanForward64((unsigned __int64 *)&v15, *(_QWORD *)(a2[10] + 16LL));
        }
        if ( !v14 )
          v4 = (unsigned int)(v15 + 1);
        goto LABEL_21;
      }
      v4 = ~*(_QWORD *)(a2[10] + 16LL);
LABEL_21:
      v16 = v17;
      *(_WORD *)(a2[11] + 2LL) = 1;
      *(_QWORD *)(a2[11] + 16LL) = v4;
      return WriteObject(a1, v16, a2[11]);
    }
  }
  return result;
}
