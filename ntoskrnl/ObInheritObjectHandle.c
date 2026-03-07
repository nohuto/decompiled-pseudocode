__int64 __fastcall ObInheritObjectHandle(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // r14
  void *v9; // rsi
  int v10; // ebx
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  HandlePointer = ExGetHandlePointer((__int64 *)a4);
  v9 = (void *)(HandlePointer + 48);
  ObpIncrPointerCount((volatile signed __int64 *)HandlePointer);
  v13 = *(_DWORD *)(a4 + 8) & 0x1FFFFFF;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a4, 1uLL);
  _InterlockedOr(v12, 0);
  if ( *(_QWORD *)(a3 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a3 + 48), 0LL);
  v10 = ObpIncrementHandleCountEx(3, (unsigned int)&v13, a1, (_DWORD)v9, 0, 0, 0LL);
  if ( v10 < 0 )
  {
    ObfDereferenceObject(v9);
  }
  else if ( (xmmword_140D1EAD0 & 0x40) != 0 )
  {
    EtwTraceDuplicateHandle(
      a2,
      a2,
      (_DWORD)v9,
      *(_DWORD *)(a1 + 1344),
      *(_DWORD *)(a1 + 1088),
      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]);
  }
  return (unsigned int)v10;
}
