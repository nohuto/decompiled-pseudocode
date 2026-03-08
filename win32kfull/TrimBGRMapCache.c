/*
 * XREFs of TrimBGRMapCache @ 0x1C02582A0
 * Callers:
 *     AddBGRMapCache @ 0x1C0255FE8 (AddBGRMapCache.c)
 *     FindBGRMapCache @ 0x1C0257DE8 (FindBGRMapCache.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall TrimBGRMapCache(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int v3; // eax
  unsigned __int64 v4; // rsi
  _OWORD *v5; // rbp
  unsigned int v6; // r14d
  int v7; // ecx
  int v8; // r8d

  v1 = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 48);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 24));
  v3 = *(_DWORD *)(v2 + 56);
  if ( v3 > 5 && *(_DWORD *)(v2 + 64) )
  {
    v4 = *(_QWORD *)(v2 + 48);
    v1 = *(_DWORD *)(v2 + 56);
    v5 = (_OWORD *)v4;
    v6 = v1;
    do
    {
      --v6;
      v7 = v3;
      if ( v3 <= 5 )
        break;
      if ( *(_DWORD *)(v4 + 8) )
      {
        if ( v5 != (_OWORD *)v4 )
        {
          *v5 = *(_OWORD *)v4;
          v3 = *(_DWORD *)(v2 + 56);
        }
        ++v5;
      }
      else
      {
        EngFreeMem(*(PVOID *)v4);
        --*(_DWORD *)(v2 + 56);
        --*(_DWORD *)(v2 + 64);
        v3 = *(_DWORD *)(v2 + 56);
      }
      v4 += 16LL;
      v7 = v3;
    }
    while ( v6 );
    if ( v1 != v7 )
    {
      if ( v4 > (unsigned __int64)v5 )
      {
        v8 = *(_DWORD *)(v2 + 48) + 16 * v1 - v4;
        if ( v8 > 0 )
          memmove(v5, (const void *)v4, v8);
      }
      v1 -= *(_DWORD *)(v2 + 56);
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 24));
  return v1;
}
