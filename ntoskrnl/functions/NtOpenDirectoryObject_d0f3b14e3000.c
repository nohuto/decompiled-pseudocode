__int64 __fastcall NtOpenDirectoryObject(_QWORD *a1, int a2, int a3)
{
  int v3; // r10d
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v8[0] = 0LL;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a3 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(v3, (_DWORD)ObpDirectoryObjectType, a3, 0, a2, 0LL, (__int64)v8);
  *a1 = v8[0];
  return result;
}
