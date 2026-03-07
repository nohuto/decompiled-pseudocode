__int64 __fastcall NtUserfnPOINTERINPUT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // r10
  int v12; // edx

  v10 = 0LL;
  v11 = PtiCurrentShared(a1);
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400);
    return v10;
  }
  v12 = a6;
  if ( a6 != 689 && a6 != 691 && (unsigned int)(a6 - 695) > 1 )
    return v10;
  if ( a2 == 528 )
  {
    if ( (_WORD)a3 != 582 )
      return v10;
    a3 >>= 16;
    return xxxSendPointerMessage((__int64)v11, a3, a1, a2, v10, a5, v12);
  }
  if ( a2 == 587 )
  {
    v10 = a4;
    return xxxSendPointerMessage((__int64)v11, a3, a1, a2, v10, a5, v12);
  }
  if ( (a2 != 592 || (*((_DWORD *)v11 + 318) & 0x2000) != 0)
    && IsPointerInputMessage(a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *((_QWORD *)v11 + 53) )
  {
    return xxxSendPointerMessage((__int64)v11, a3, a1, a2, v10, a5, v12);
  }
  return v10;
}
