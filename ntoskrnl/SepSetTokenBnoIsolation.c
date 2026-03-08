/*
 * XREFs of SepSetTokenBnoIsolation @ 0x140296F14
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 * Callees:
 *     SepSetTokenCachedHandles @ 0x140739630 (SepSetTokenCachedHandles.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140744278 (SepDereferenceCachedHandlesEntry.c)
 */

__int64 __fastcall SepSetTokenBnoIsolation(__int64 a1, char a2, __int128 *a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rsi
  __int128 v12; // xmm0
  _DWORD v13[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  memset(v13, 0, 24);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      return (unsigned int)-1073741637;
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        if ( a3 && *(_WORD *)a3 && *((_QWORD *)a3 + 1) )
        {
          if ( *(_WORD *)a3 >= 0x110u )
            return (unsigned int)-1073741562;
          if ( a4 > 0xA )
            return (unsigned int)-1073741811;
          goto LABEL_5;
        }
      }
    }
    return (unsigned int)-1073741776;
  }
  if ( a4 )
    return (unsigned int)-1073741776;
  v10 = a5;
  if ( a5 || a3 && (*(_WORD *)a3 || *((_QWORD *)a3 + 1)) )
    return (unsigned int)-1073741776;
LABEL_5:
  if ( *(_QWORD *)(a1 + 1152) )
  {
    SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
  if ( a2 )
  {
    v12 = *a3;
    v13[0] = 1;
    *(_OWORD *)&v13[2] = v12;
    return (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64))SepSetTokenCachedHandles)(
                           a1,
                           v13,
                           a4,
                           v10);
  }
  return v5;
}
