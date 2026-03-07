__int64 __fastcall IvtInvalidateContextEntry(__int64 a1, int *a2, unsigned __int16 a3, __int64 a4, char a5)
{
  int v6; // eax
  __int64 v7; // r9
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a2;
  v7 = a2[1] & 3;
  v9[1] = 0LL;
  v9[0] = ((a3 | (((unsigned __int16)v6 | (unsigned __int64)(v7 << 16)) << 16)) << 16) | 0x31;
  result = IvtIommuSendCommand(a1, (unsigned __int64)v9, 1);
  if ( a5 )
    return IvtIommuWaitCommand(a1, 0, 1);
  return result;
}
