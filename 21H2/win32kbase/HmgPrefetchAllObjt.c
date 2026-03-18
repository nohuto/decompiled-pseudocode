/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C0089290
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v6; // ebx
  GdiHandleManager *v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  _QWORD v20[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h]
  _QWORD *v22; // [rsp+40h] [rbp-C8h]
  _QWORD v23[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v23, 0, sizeof(v23));
  v21 = 0LL;
  result = (__int64)v23;
  v22 = v23;
  v6 = 0;
  v20[0] = 1LL;
  v20[1] = -3LL;
LABEL_2:
  v7 = gpHandleManager;
  while ( ++v6 < *(_DWORD *)gpHandleManager )
  {
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    result = v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
    if ( v6 < (unsigned int)result )
    {
      v10 = v6 >= v9 ? ((v6 - v9) >> 16) + 1 : 0LL;
      v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
      v12 = (_DWORD)v10 ? v6 + ((1 - (_DWORD)v10) << 16) - v9 : v6;
      if ( v12 < *(_DWORD *)(v11 + 20) )
      {
        result = *(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8));
        if ( *(_QWORD *)(result + 16LL * (unsigned __int8)v12 + 8) )
        {
          result = *(_QWORD *)v11;
          v13 = *(_QWORD *)v11 + 24LL * v12;
          if ( v13 )
          {
            if ( !v6 )
              break;
            if ( *(_BYTE *)(v13 + 14) == a1 )
            {
              result = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v6);
              v14 = *((_QWORD *)v7 + 2);
              v15 = (unsigned int)result;
              v16 = *(_DWORD *)(v14 + 2056);
              if ( (unsigned int)result < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
              {
                if ( (unsigned int)result >= v16 )
                  v17 = (((unsigned int)result - v16) >> 16) + 1;
                else
                  v17 = 0LL;
                v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
                if ( (_DWORD)v17 )
                {
                  result = ((1 - (_DWORD)v17) << 16) - v16;
                  v15 = (unsigned int)(result + v15);
                }
                if ( (unsigned int)v15 < *(_DWORD *)(v18 + 20) )
                {
                  result = *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8));
                  v19 = *(_QWORD *)(result + 16LL * (unsigned __int8)v15 + 8);
                  if ( v19 )
                  {
                    result = 2LL * v4++;
                    v23[result] = v19;
                    v23[result + 1] = a2;
                  }
                }
              }
            }
            if ( v4 == 16 )
            {
              v21 = 16LL;
              result = MmPrefetchVirtualAddresses(v20);
              v4 = 0;
            }
            goto LABEL_2;
          }
        }
      }
    }
  }
  if ( v4 )
  {
    v21 = v4;
    return MmPrefetchVirtualAddresses(v20);
  }
  return result;
}
