__int64 DxgIsRemoteSessionUsingXddmMonitors(void)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v1 = 0;
  if ( !Current )
    return 0LL;
  v2 = *((_QWORD *)Current + 11);
  if ( !v2 )
    return 0LL;
  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v2 + 224))(0LL, 0LL, &v4) )
    return v4 == 0;
  return v1;
}
