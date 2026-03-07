__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C6A3D0 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C6A3D0, 8LL);
  DWORD2(xmmword_140C6A3D0) = result;
  return result;
}
