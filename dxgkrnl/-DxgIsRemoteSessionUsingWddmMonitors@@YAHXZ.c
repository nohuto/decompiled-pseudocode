__int64 __fastcall DxgIsRemoteSessionUsingWddmMonitors(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
    return 0LL;
  v2 = *((_QWORD *)Current + 11);
  if ( !v2 )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v2 + 224))(0LL, 0LL, &v4);
  return v4;
}
