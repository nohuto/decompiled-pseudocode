bool __fastcall GetDeviceRects(void *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagRECT v6; // xmm1
  bool result; // al
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = a3;
  if ( !TouchExtensibility::ghInjectionDevice )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &Object) < 0 )
    return 0;
  v3 = (char *)Object + 72;
  if ( Object != (PVOID)-72LL )
    v3 = (_QWORD *)*v3;
  TouchExtensibility::hDeviceUser = v3;
  ObfDereferenceObject(Object);
  v4 = HMValidateHandleNoSecure((int)v3, 19);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 472);
  if ( !v5 )
    return 0;
  TouchExtensibility::rcHimetricRect = *(struct tagRECT *)(v5 + 176);
  v6 = *(struct tagRECT *)(v5 + 192);
  result = 1;
  TouchExtensibility::rcLogicalRect = v6;
  return result;
}
