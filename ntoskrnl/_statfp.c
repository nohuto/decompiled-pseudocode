__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
