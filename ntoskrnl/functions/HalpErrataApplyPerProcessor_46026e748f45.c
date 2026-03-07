char HalpErrataApplyPerProcessor()
{
  unsigned __int64 v0; // rax
  unsigned __int8 v2; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int8 v3; // [rsp+38h] [rbp+18h] BYREF
  char v4; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int8 v5; // [rsp+48h] [rbp+28h] BYREF

  v4 = 0;
  v2 = 0;
  v5 = 0;
  v3 = 0;
  LOBYTE(v0) = -HalpGetCpuInfo(&v4, &v5, &v2, &v3);
  if ( (v3 & (unsigned __int8)-((_BYTE)v0 != 0)) == 1 )
  {
    if ( v4 == 15 )
    {
      v0 = __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL;
      __writemsr(0xC001001F, v0);
    }
    if ( v4 == 18 )
    {
      v0 = __readmsr(0xC0011029) | 0x80000000;
      __writemsr(0xC0011029, v0);
    }
    if ( v4 == 23 && v2 == 1 && v5 == 1 )
    {
      v0 = __readmsr(0xC0011023) | 0x100;
      __writemsr(0xC0011023, v0);
    }
    if ( !HalpHvCpuManager && v4 == 23 && v2 <= 0x2Fu )
    {
      v0 = __readmsr(0xC001102C) | 0x8000000000000LL;
      __writemsr(0xC001102C, v0);
    }
  }
  return v0;
}
