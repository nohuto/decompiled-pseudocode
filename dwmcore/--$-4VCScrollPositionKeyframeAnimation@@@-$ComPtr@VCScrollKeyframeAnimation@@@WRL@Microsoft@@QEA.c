__int64 *__fastcall Microsoft::WRL::ComPtr<CScrollKeyframeAnimation>::operator=<CScrollPositionKeyframeAnimation>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
