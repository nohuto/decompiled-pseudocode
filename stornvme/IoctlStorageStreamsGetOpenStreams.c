__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SrbDataBuffer; // rax
  unsigned int *v6; // r14
  _DWORD *v7; // rsi
  __int64 result; // rax
  unsigned __int8 v9; // cl
  int v10; // edx
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned int *v13; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h]
  __int128 v15; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v13 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v13);
  v6 = v13;
  v7 = (_DWORD *)SrbDataBuffer;
  if ( *v13 >= 0x24 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    if ( v9 == 255 )
    {
      *(_BYTE *)(a2 + 3) = 32;
      goto LABEL_3;
    }
    if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 && *(unsigned __int8 *)(a1 + 4009) == v9 )
    {
      GetNamespaceId(a1, v9);
      v14 = 0LL;
      v15 = 0LL;
      result = NVMeDirectiveStreamsReturnParameters(a1);
      if ( (_DWORD)result )
      {
LABEL_12:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_26;
      }
      v10 = WORD4(v15);
      v11 = *v6;
      LODWORD(v13) = WORD4(v15);
      if ( v11 < (unsigned __int64)(4 * (unsigned int)WORD4(v15) + 12) + 28 )
      {
        v7[8] = 4 * WORD4(v15) + 12;
        v4 = 8;
        v7[7] = 1;
        result = 3238002692LL;
        *(_BYTE *)(a2 + 3) = 18;
        goto LABEL_26;
      }
      if ( v7[7] == 1 )
      {
        if ( WORD4(v15) )
        {
          result = NVMeDirectiveStreamsGetStatus(a1, (__int64)(v7 + 10));
          if ( (_DWORD)result )
          {
            result = (unsigned int)result;
            if ( (_DWORD)result == -1056964604 )
            {
              v12 = (int)v13;
              v4 = 8;
              v7[7] = 1;
              v7[8] = 4 * v12 + 12;
              *(_BYTE *)(a2 + 3) = 18;
              goto LABEL_26;
            }
            goto LABEL_12;
          }
          v10 = (int)v13;
        }
        else
        {
          result = 0LL;
        }
        v7[9] = v10;
        v4 = 4 * v10 + 12;
        *(_BYTE *)(a2 + 3) = 1;
        goto LABEL_26;
      }
      result = 3238002694LL;
    }
    else
    {
      result = 3238002695LL;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_26;
  }
  *(_BYTE *)(a2 + 3) = 21;
LABEL_3:
  result = 3238002694LL;
LABEL_26:
  v7[6] = v4;
  return result;
}
