__int64 __fastcall InitializeIdentityLut_RGB256x3x16(struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a1)
{
  USHORT *Green; // rdx
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // eax

  Green = a1->Green;
  v2 = 0;
  do
  {
    v3 = v2 | (v2 << 16);
    ++v2;
    v4 = (2 * (v3 | 0x8000)) | ((v3 | 0x8000) << 9);
    *((_DWORD *)Green + 128) = v4;
    *(_DWORD *)Green = v4;
    *((_DWORD *)Green - 128) = v4;
    Green += 2;
  }
  while ( v2 < 0x80 );
  return 0LL;
}
