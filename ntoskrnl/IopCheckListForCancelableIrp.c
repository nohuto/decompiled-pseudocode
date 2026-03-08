/*
 * XREFs of IopCheckListForCancelableIrp @ 0x1402F30DC
 * Callers:
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 * Callees:
 *     IopInterlockedAdd @ 0x1402F3488 (IopInterlockedAdd.c)
 */

char __fastcall IopCheckListForCancelableIrp(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v6; // r10
  char v7; // di
  _QWORD *v8; // rbx

  v6 = a5;
  v7 = 1;
  *a6 = 0LL;
  if ( !a5 )
    v6 = *a1;
  while ( a1 != v6 )
  {
    v8 = v6 - 4;
    if ( (v6[7] & 0xFFFFFFFFFFFFFFF9uLL) == a2 && (!a3 || v8[9] == a3) && (!a4 || v8[19] == a4) )
    {
      if ( *((char *)v8 + 67) < *((char *)v8 + 66) + 2 && !*((_BYTE *)v8 + 68) )
      {
        v7 = 0;
        IopInterlockedAdd(v8 + 11, 1LL);
        *a6 = v8;
        return v7;
      }
      v7 = (v8[2] & 0x10000) != 0 ? v7 : 0;
    }
    v6 = (_QWORD *)*v6;
  }
  return v7;
}
