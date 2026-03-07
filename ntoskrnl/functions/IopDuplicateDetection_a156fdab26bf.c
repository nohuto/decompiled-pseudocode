__int64 __fastcall IopDuplicateDetection(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 LegacyBusDeviceNode; // rax
  void (__fastcall **v11)(_QWORD); // rdi
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  P = 0LL;
  v12[0] = 0LL;
  v7 = a2;
  *a4 = 0LL;
  v8 = a1;
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a1, a2);
  if ( !LegacyBusDeviceNode )
    return 3221225488LL;
  if ( (int)IopQueryResourceHandlerInterface(3LL, *(_QWORD *)(LegacyBusDeviceNode + 32), 0LL, &P) < 0 )
    return 3221225488LL;
  v11 = (void (__fastcall **)(_QWORD))P;
  if ( !P )
    return 3221225488LL;
  if ( (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))P + 4))(*((_QWORD *)P + 1), v8, v7, a3, v12) >= 0
    && v12[0] )
  {
    *a4 = *(_QWORD *)(*(_QWORD *)(v12[0] + 312LL) + 40LL);
  }
  else
  {
    v4 = -1073741808;
  }
  v11[3](v11[1]);
  ExFreePoolWithTag(v11, 0);
  return v4;
}
