float __fastcall ApplyEdgeFlagsWorker_196608_65536_131072_(int a1, float a2, float a3)
{
  int v3; // ecx

  v3 = a1 & 0x30000;
  switch ( v3 )
  {
    case 65536:
      a2 = a2 - a3;
      break;
    case 131072:
      a2 = a2 + a3;
      break;
    case 196608:
      return a2;
  }
  return (float)(((int)(float)(a2 * 256.0) + 127) >> 8);
}
