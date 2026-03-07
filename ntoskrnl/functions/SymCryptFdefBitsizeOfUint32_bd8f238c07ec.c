__int64 __fastcall SymCryptFdefBitsizeOfUint32(int a1)
{
  int v1; // r10d
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // r10d
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // edx

  v1 = ((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32) & 0x10;
  v2 = (unsigned __int16)(a1 & ~(unsigned __int16)((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32)) | ((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32) & ((a1 & 0xFFFF0000) >> 16);
  v3 = -(((unsigned __int16)(a1 & ~(unsigned __int16)((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32)) | ((unsigned __int64)-(__int64)(a1 & 0xFFFF0000) >> 32) & ((a1 & 0xFFFF0000) >> 16)) & 0xFF00) >> 16;
  v4 = v3 & 8 | v1;
  v5 = v3 & (v2 >> 8) | v2 & (unsigned __int8)~(_BYTE)v3;
  v6 = -(((unsigned __int8)(v3 & BYTE1(v2)) | v2 & (unsigned __int8)~(_BYTE)v3) & 0xF0) >> 16;
  v7 = (unsigned int)-((unsigned __int8)v5 & (unsigned __int8)~(_BYTE)v6 & 0xC | (unsigned __int8)v6 & (unsigned __int8)(v5 >> 4) & 0xC) >> 16;
  v8 = ((unsigned __int8)v5 & (unsigned __int8)~(_BYTE)v6 & 0xF | v6 & (unsigned __int8)(v5 >> 4)) & (unsigned __int8)~(_BYTE)v7 & 3 | v7 & (((unsigned __int8)v5 & (unsigned __int8)~(_BYTE)v6 & 0xF | v6 & (v5 >> 4)) >> 2);
  return (v8 & 1 | ((v8 & 2) != 0)) + (v6 & 4 | v4 | (v8 >> 1) & 1 | v7 & 2);
}
