__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD v9[4]; // [rsp+48h] [rbp-20h] BYREF

  v9[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, (__int64)MmSessionObjectType, PreviousMode, 0LL, a2, 0LL, (__int64)v9);
  *a1 = v9[0];
  return result;
}
