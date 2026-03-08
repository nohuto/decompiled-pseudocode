/*
 * XREFs of ExpDuplicateSingleHandle @ 0x1407060D0
 * Callers:
 *     ExDupHandleTable @ 0x140705D54 (ExDupHandleTable.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ObInheritObjectHandle @ 0x140706174 (ObInheritObjectHandle.c)
 *     ExpGetHandleExtraInfo @ 0x1408A6B3A (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1409F63C0 (ExpSetHandleExtraInfo.c)
 */

__int64 __fastcall ExpDuplicateSingleHandle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int64 *a4,
        __int64 a5,
        _OWORD *a6,
        char a7)
{
  __int64 result; // rax
  int v12; // ebx
  _DWORD *HandleExtraInfo; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-28h]

  *a6 = *(_OWORD *)a4;
  v15 = 0LL;
  *(_QWORD *)&v15 = *(_QWORD *)a6 & 0xFFFFFFFFFFFE0001uLL;
  *(_QWORD *)a6 = v15;
  *(_QWORD *)a6 |= 1uLL;
  if ( *(_DWORD *)(a3 + 4) )
  {
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a3, a2);
    if ( HandleExtraInfo )
    {
      if ( *HandleExtraInfo || HandleExtraInfo[1] )
      {
        v12 = ExpSetHandleExtraInfo(a5, a2, HandleExtraInfo);
        if ( v12 < 0 )
        {
          _InterlockedExchangeAdd64(a4, 1uLL);
          _InterlockedOr(v14, 0);
          if ( *(_QWORD *)(a3 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
          goto LABEL_12;
        }
      }
    }
  }
  result = ObInheritObjectHandle(a1, a2, a3, a4, v15, *((_QWORD *)&v15 + 1));
  v12 = result;
  if ( (int)result < 0 )
  {
    if ( !a7 )
      v12 = 263;
LABEL_12:
    result = (unsigned int)v12;
    *a6 = 0LL;
  }
  return result;
}
