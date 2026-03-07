__int64 __fastcall CmGetDeviceInterfaceClassGuidString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 result; // rax

  v3 = a3;
  v4 = a3;
  LOBYTE(a3) = 1;
  result = CmGetDeviceInterfaceSubkeyPath(a1, a2, a3, v4, 0LL, 0);
  if ( !(_DWORD)result )
    return 3221225701LL;
  if ( (_DWORD)result == -1073741789 )
  {
    *(_WORD *)(v3 + 76) = 0;
    return 0LL;
  }
  return result;
}
