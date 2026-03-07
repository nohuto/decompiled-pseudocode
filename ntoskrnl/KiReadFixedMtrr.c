unsigned __int64 __fastcall KiReadFixedMtrr(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax

  v1 = 0LL;
  if ( byte_140C41591 == 1 )
  {
    v1 = __readmsr(0xC0010010) | 0x80000;
  }
  else
  {
    if ( KeGetCurrentPrcb()->CpuVendor != 1 )
      goto LABEL_3;
    v3 = __readmsr(0xC0010010);
    v1 = v3;
    if ( (v3 & 0xC0000) == 0 || (v3 & 0x1000000) != 0 )
      goto LABEL_3;
    v1 = v3 & 0xFFFFFFFFFFF3FFFFuLL;
  }
  __writemsr(0xC0010010, v1);
LABEL_3:
  *a1 = __readmsr(0x250u);
  a1[1] = __readmsr(0x258u);
  a1[2] = __readmsr(0x259u);
  a1[3] = __readmsr(0x268u);
  a1[4] = __readmsr(0x269u);
  a1[5] = __readmsr(0x26Au);
  a1[6] = __readmsr(0x26Bu);
  a1[7] = __readmsr(0x26Cu);
  a1[8] = __readmsr(0x26Du);
  a1[9] = __readmsr(0x26Eu);
  result = __readmsr(0x26Fu);
  a1[10] = result;
  if ( byte_140C41591 == 1 )
  {
    result = v1 & 0xFFFFFFFFFFF7FFFFuLL;
    __writemsr(0xC0010010, v1 & 0xFFFFFFFFFFF7FFFFuLL);
  }
  return result;
}
