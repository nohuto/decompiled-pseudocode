/*
 * XREFs of MiConvertPrivateToProto @ 0x14034A20C
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 * Callees:
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiDecrementCombinedPteEx @ 0x14029DAF4 (MiDecrementCombinedPteEx.c)
 *     MiCreateCombineAnchor @ 0x14034A2A4 (MiCreateCombineAnchor.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 */

__int64 __fastcall MiConvertPrivateToProto(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 112);
  v7 = MiCreateCombineAnchor(a1, a2, &v12);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 == -1073741302 )
    {
      v9 = a3;
      v10 = v12;
      v8 = MiCombineWithExisting(a1, a2, v12, v9);
      if ( v8 < 0 )
        MiDecrementCombinedPteEx(v4, v10 + 32, 0);
    }
  }
  else
  {
    return (unsigned int)MiCombineInitialInstance(a1, a2, a3);
  }
  return (unsigned int)v8;
}
