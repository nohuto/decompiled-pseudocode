int __fastcall CPTPEngine::SendRightDownFromPhysical(CPTPEngine *a1, __int64 *a2, _QWORD *a3, int a4)
{
  int result; // eax
  __int64 v8; // r8
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+20h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  char v13; // [rsp+70h] [rbp+10h] BYREF

  result = *((_DWORD *)a1 + 984) | 0x100;
  *((_DWORD *)a1 + 984) = result;
  if ( (result & 0x10) == 0 )
  {
    v9 = 0LL;
    LODWORD(v9) = a4;
    v11 = v9;
    v12 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(a1, 4LL, &v11);
    if ( a3 )
    {
      HIDWORD(v10) = 0;
      *(_QWORD *)((char *)&v10 + 4) = *a3;
      LODWORD(v10) = 1;
      v12 = 0LL;
      v11 = v10;
      CBasePTPEngine::SendTelemetryOutput(a1, 6LL, &v11);
    }
    v8 = *(__int64 *)((char *)a2 + 28);
    if ( (*((_DWORD *)a1 + 67) & 0x200) != 0 )
      v8 = **(_QWORD **)&CPTPEngine::DoTPButtonWarpBack(a1, (struct PTPInput *)&v13, a2);
    result = (unsigned int)CBasePTPEngine::SendMouseOutput((__int64)a1, 3, v8);
    *((_DWORD *)a1 + 984) |= 0x10u;
  }
  return result;
}
