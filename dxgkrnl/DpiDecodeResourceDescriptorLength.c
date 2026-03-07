unsigned __int64 __fastcall DpiDecodeResourceDescriptorLength(unsigned __int8 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  if ( (_BYTE)v1 == 3 )
    return *((unsigned int *)a1 + 3);
  if ( (_BYTE)v1 != 7 )
    goto LABEL_10;
  v1 = *((unsigned __int16 *)a1 + 1);
  if ( (v1 & 0x200) != 0 )
    return (unsigned __int64)*((unsigned int *)a1 + 3) << 8;
  if ( (v1 & 0x400) != 0 )
    return (unsigned __int64)*((unsigned int *)a1 + 3) << 16;
  if ( (v1 & 0x800) != 0 )
    return (unsigned __int64)*((unsigned int *)a1 + 3) << 32;
LABEL_10:
  WdLogSingleEntry1(3LL, v1);
  return 0LL;
}
