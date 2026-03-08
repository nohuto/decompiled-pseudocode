/*
 * XREFs of ACPIGetUniqueId @ 0x1C0089190
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = *(_QWORD **)(a1 + 760);
  v9 = 0LL;
  Src = 0LL;
  v10 = 0LL;
  v4 = AMLIGetNamedChild(v3, 1145656671);
  v5 = (volatile signed __int32 *)v4;
  if ( !v4 )
    return 3221226021LL;
  v7 = AMLIEvalNameSpaceObject(v4, (__int64)&v9, 0, 0LL);
  AMLIDereferenceHandleEx(v5, v8);
  if ( v7 >= 0 )
  {
    if ( WORD1(v9) == 1 )
    {
      *a2 = v10;
    }
    else if ( WORD1(v9) == 2 && (unsigned int)(DWORD2(v10) - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(DWORD2(v10) - 1));
    }
    else
    {
      v7 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)&v9);
  }
  return (unsigned int)v7;
}
