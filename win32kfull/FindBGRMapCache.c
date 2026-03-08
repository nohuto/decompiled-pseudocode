/*
 * XREFs of FindBGRMapCache @ 0x1C0257DE8
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 *     CreateDyesColorMappingTable @ 0x1C0257C98 (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     TrimBGRMapCache @ 0x1C02582A0 (TrimBGRMapCache.c)
 */

__int64 __fastcall FindBGRMapCache(__int64 a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // esi
  _DWORD *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  __int128 v13; // xmm6

  v4 = 0LL;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 24));
  v6 = *(_QWORD *)(v5 + 48);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v5 + 56);
    if ( v7 )
    {
      v8 = (_DWORD *)(v6 + 16LL * (v7 - 1));
      do
      {
        if ( v4 )
          break;
        if ( a1 == *(_QWORD *)v8 )
        {
          v9 = v8[2];
          v4 = a1;
          if ( v9 )
          {
            v10 = v9 - 1;
            v8[2] = v10;
            if ( !v10 )
              ++*(_DWORD *)(v5 + 64);
          }
        }
        else if ( v8[3] == a2 )
        {
          v11 = v8[2];
          v4 = *(_QWORD *)v8;
          v8[2] = v11 + 1;
          if ( !v11 )
            --*(_DWORD *)(v5 + 64);
          v12 = *(_DWORD *)(v5 + 56);
          if ( v7 < v12 )
          {
            v13 = *(_OWORD *)v8;
            memmove(v8, v8 + 4, 16LL * (v12 - v7));
            *(_OWORD *)(*(_QWORD *)(v5 + 48) + 16LL * *(int *)(v5 + 56) - 16) = v13;
          }
        }
        v8 -= 4;
        --v7;
      }
      while ( v7 );
    }
  }
  if ( *(int *)(v5 + 56) > 5 && *(_DWORD *)(v5 + 64) )
    TrimBGRMapCache();
  EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 24));
  return v4;
}
