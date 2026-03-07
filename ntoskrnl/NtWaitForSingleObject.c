__int64 __fastcall NtWaitForSingleObject(int a1, unsigned __int8 a2, unsigned __int64 a3)
{
  int v3; // r9d
  int PreviousMode; // edx
  __int64 v5; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v7.QuadPart = 0LL;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v5 = a3;
  if ( a3 && (_BYTE)PreviousMode )
  {
    if ( a3 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    v7 = *(LARGE_INTEGER *)v5;
    v5 = (__int64)&v7;
  }
  return ObWaitForSingleObject(a1, PreviousMode, (unsigned __int8)PreviousMode, v3, (PLARGE_INTEGER)v5);
}
