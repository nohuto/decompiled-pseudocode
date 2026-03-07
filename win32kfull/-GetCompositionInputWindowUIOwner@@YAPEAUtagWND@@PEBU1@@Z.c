struct tagWND *__fastcall GetCompositionInputWindowUIOwner(const struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v3) && *(_DWORD *)(v3 + 32) )
    return *(struct tagWND **)(v3 + 40);
  return (struct tagWND *)v1;
}
