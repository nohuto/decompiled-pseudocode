__int64 __fastcall DeferNotifyDelegateCapture(struct _LIST_ENTRY *a1, __int16 a2, int a3, struct tagWND *a4)
{
  __int64 v7; // rcx
  struct _LIST_ENTRY *ThreadPointerData; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = FindThreadPointerData(a1, a2);
  if ( !ThreadPointerData )
    return 0LL;
  v14 = 0LL;
  v9 = SGDGetUserSessionState(v7);
  CTouchProcessor::GetPointerCapture(
    *(CTouchProcessor **)(v9 + 3424),
    (unsigned __int64)ThreadPointerData[1].Blink,
    0,
    (void **)&v14,
    0LL);
  if ( !v14 )
    return 0LL;
  v11 = (struct tagWND *)v14[10];
  if ( !v11 )
    return 0LL;
  if ( v11 != a4 )
    return 0LL;
  v12 = SGDGetUserSessionState(v10);
  if ( a3 != CTouchProcessor::GetPointerDownFrame(
               *(CTouchProcessor **)(v12 + 3424),
               (unsigned __int64)ThreadPointerData[1].Blink) )
    return 0LL;
  LODWORD(ThreadPointerData[3].Flink) |= 4u;
  result = 1LL;
  HIDWORD(a1[2].Flink) = 1;
  return result;
}
