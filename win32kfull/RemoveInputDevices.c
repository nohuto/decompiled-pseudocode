__int64 __fastcall RemoveInputDevices(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)SGDGetUserSessionState(a1);
      if ( v1 )
        break;
      CBaseInput::HandleTSRequest(v2[409], 3LL);
      v1 = 1;
    }
    if ( v1 == 2 )
      break;
    CBaseInput::HandleTSRequest(v2[1584], 3LL);
    if ( (unsigned int)++v1 > 2 )
      goto LABEL_5;
  }
  CBaseInput::HandleTSRequest(v2[2105], 3LL);
LABEL_5:
  v3 = SGDGetUserSessionState(a1);
  CBaseInput::HandleTSRequest(*(_QWORD *)(v3 + 3272), 1LL);
  v5 = SGDGetUserSessionState(v4);
  CBaseInput::HandleTSRequest(*(_QWORD *)(v5 + 12672), 1LL);
  v7 = SGDGetUserSessionState(v6);
  CBaseInput::HandleTSRequest(*(_QWORD *)(v7 + 16840), 1LL);
  return ForceUpdatePointerDeviceSystemMetrics();
}
