__int64 __fastcall GreIsDisconnectDeviceAttached(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v6, *(HSEMAPHORE *)(v1 + 80));
  v2 = *(_QWORD *)(v1 + 1392);
  v3 = 1;
  if ( !v2 || (*(_DWORD *)(v2 + 160) & 1) == 0 )
  {
    v4 = *(_QWORD *)(v1 + 1376);
    if ( !v4 || (*(_DWORD *)(v4 + 160) & 1) == 0 )
      v3 = 0;
  }
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)&v6);
  return v3;
}
