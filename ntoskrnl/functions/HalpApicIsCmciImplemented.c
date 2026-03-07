bool __fastcall HalpApicIsCmciImplemented(int *a1, int *a2)
{
  char CpuInfo; // al
  int v5; // ebx
  char v6; // r8
  int v7; // ebp
  bool v8; // di
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  CpuInfo = HalpApicGetCpuInfo(0LL, 0LL, 0LL, (__int64)&v12);
  v5 = 0;
  v6 = CpuInfo != 0 ? v12 : 0;
  v7 = 0;
  v8 = 0;
  v12 = v6;
  if ( v6 == 2 )
  {
    v9 = __readmsr(0x179u);
    LODWORD(v9) = v9 & 0x400;
    v8 = (_DWORD)v9 != 0;
    v5 = (unsigned int)v9 != 0LL ? 0x2F0 : 0;
  }
  else if ( v6 == 1 && (int)((__int64 (__fastcall *)(__int64))HalpApicRead)(48LL) < 0 )
  {
    v11 = ((__int64 (__fastcall *)(__int64))HalpApicRead)(1024LL) & 0xFF0000;
    v5 = (unsigned int)v11 > 0x10000 ? 0x510 : 0;
    v8 = (unsigned int)v11 > 0x10000;
    if ( (unsigned int)v11 > 0x20000 )
      v7 = 1312;
  }
  if ( a1 && v8 )
    *a1 = v5;
  if ( a2 )
    *a2 = v7;
  return v8;
}
