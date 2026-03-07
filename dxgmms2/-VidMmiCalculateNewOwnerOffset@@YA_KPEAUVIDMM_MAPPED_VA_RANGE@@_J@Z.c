unsigned __int64 __fastcall VidMmiCalculateNewOwnerOffset(struct VIDMM_MAPPED_VA_RANGE *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *((_QWORD *)a1 + 15);
  result = a2 + *((_QWORD *)a1 + 9);
  if ( v2 )
    return *((_QWORD *)a1 + 14) + (result - *((_QWORD *)a1 + 14)) % (v2 << 12);
  return result;
}
