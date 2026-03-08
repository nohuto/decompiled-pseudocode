/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C00A4130
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-D0h]
  _QWORD *v24; // [rsp+40h] [rbp-C8h]
  _QWORD v25[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v25, 0, sizeof(v25));
  v23 = 0LL;
  v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  result = (__int64)v25;
  v24 = v25;
  v8 = 0;
  v22[0] = 1LL;
  v22[1] = -3LL;
LABEL_2:
  v9 = *(_QWORD *)(v6 + 8008);
  while ( ++v8 < *(_DWORD *)v9 )
  {
    v10 = *(_QWORD *)(v9 + 16);
    v11 = *(_DWORD *)(v10 + 2056);
    result = v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
    if ( v8 < (unsigned int)result )
    {
      if ( v8 >= v11 )
        v12 = ((v8 - v11) >> 16) + 1;
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        result = v8 + ((1 - (_DWORD)v12) << 16) - v11;
      else
        result = v8;
      v14 = 0LL;
      if ( (unsigned int)result < *(_DWORD *)(v13 + 20) )
      {
        v15 = (unsigned int)result;
        result = *(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)(unsigned int)result >> 8));
        if ( *(_QWORD *)(result + 16LL * (unsigned __int8)v15 + 8) )
        {
          result = *(_QWORD *)v13;
          v14 = *(_QWORD *)v13 + 24 * v15;
        }
      }
      if ( v14 )
      {
        if ( !v8 )
          break;
        if ( *(_BYTE *)(v14 + 14) == a1 )
        {
          result = GdiHandleManager::DecodeIndex(*(GdiHandleEntryDirectory ***)(v6 + 8008), v8);
          v16 = *(_QWORD *)(v9 + 16);
          v17 = (unsigned int)result;
          v18 = *(_DWORD *)(v16 + 2056);
          if ( (unsigned int)result < v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)result >= v18 )
              v19 = (((unsigned int)result - v18) >> 16) + 1;
            else
              v19 = 0LL;
            v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
            if ( (_DWORD)v19 )
            {
              result = ((1 - (_DWORD)v19) << 16) - v18;
              v17 = (unsigned int)(result + v17);
            }
            if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
            {
              v21 = 0LL;
            }
            else
            {
              result = *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8));
              v21 = *(_QWORD *)(result + 16LL * (unsigned __int8)v17 + 8);
            }
            if ( v21 )
            {
              result = 2LL * v4++;
              v25[result] = v21;
              v25[result + 1] = a2;
            }
          }
        }
        if ( v4 == 16 )
        {
          v23 = 16LL;
          result = MmPrefetchVirtualAddresses(v22);
          v4 = 0;
        }
        goto LABEL_2;
      }
    }
  }
  if ( v4 )
  {
    v23 = v4;
    return MmPrefetchVirtualAddresses(v22);
  }
  return result;
}
