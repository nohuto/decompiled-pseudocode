int __fastcall IsPointerMessageTouchpad(struct tagTHREADINFO *a1, unsigned __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax

  v6 = SGDGetUserSessionState(a1);
  return CTouchProcessor::IsPointerMessageTouchpad(*(CTouchProcessor **)(v6 + 3424), a1, a2, a3);
}
