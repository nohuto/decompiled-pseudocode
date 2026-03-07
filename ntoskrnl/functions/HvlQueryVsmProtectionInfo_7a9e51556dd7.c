__int64 __fastcall HvlQueryVsmProtectionInfo(void *a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v7; // ebx
  char v8; // al
  _DWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  v11 = a3;
  v12 = 0LL;
  v7 = 0;
  if ( (unsigned int)a2 < 3 )
  {
    v7 = -1073741584;
    *a3 = 0;
    return v7;
  }
  if ( (unsigned int)a2 >= 4 )
    v5 = 4;
  Src[1] = v5;
  Src[0] = 0;
  if ( !HvlHypervisorConnected )
    goto LABEL_5;
  if ( (HvlpFlags & 2) == 0 )
  {
    if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
      LOBYTE(Src[0]) = 1;
    BYTE1(Src[0]) = (HvlpFlags & 0x40) != 0;
    goto LABEL_7;
  }
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    HviGetHardwareFeatures((__int64)&v12, a2, (__int64)a3, a4);
    v8 = (unsigned __int8)v12 >> 7;
    BYTE1(Src[0]) = (unsigned __int8)v12 >> 7;
  }
  else
  {
LABEL_5:
    v8 = HvlpProcessIommu();
    BYTE1(Src[0]) = 0;
  }
  LOBYTE(Src[0]) = v8;
LABEL_7:
  BYTE2(Src[0]) = (HvlpFlags & 0x20000) != 0;
  HIBYTE(Src[0]) = HIBYTE(HvlpFlags) & 1;
  memmove(a1, Src, v5);
  *a3 = v5;
  return v7;
}
