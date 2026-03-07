__int64 __fastcall Pointer::GetPointerInfoByPointerId(
        Pointer *this,
        const struct tagPOINTER_INFO **a2,
        const struct tagPOINTER_INFO **a3)
{
  __int16 v4; // bx
  struct tagTHREADINFO *v5; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  const struct tagPOINTER_INFO **v7; // r8
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (__int16)this;
  v5 = PtiCurrentShared((__int64)this);
  ThreadPointerData = GetThreadPointerData((struct _LIST_ENTRY *)((char *)v5 + 1128), v4, &v9, 0LL);
  if ( ThreadPointerData )
    return Pointer::GetPointerInfoByPointerMsgId((Pointer *)ThreadPointerData, a2, v7);
  else
    return 3221225485LL;
}
