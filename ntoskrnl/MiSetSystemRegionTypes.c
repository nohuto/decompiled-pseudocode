/*
 * XREFs of MiSetSystemRegionTypes @ 0x140B6087C
 * Callers:
 *     MiInitializeSystemVa @ 0x140B60308 (MiInitializeSystemVa.c)
 * Callees:
 *     MiConvertAssignedRegionToVaType @ 0x140B6090C (MiConvertAssignedRegionToVaType.c)
 */

unsigned __int64 MiSetSystemRegionTypes()
{
  unsigned int v0; // r8d
  __int64 *v1; // r9
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rdx
  char v4; // al
  __int64 v5; // rdx
  unsigned __int64 i; // r10
  unsigned __int64 result; // rax

  v0 = 0;
  v1 = qword_140C6A160;
  v2 = (unsigned __int64)MiState;
  do
  {
    v3 = *(v1 - 1);
    if ( v0 != 5 || v3 )
    {
      v4 = MiConvertAssignedRegionToVaType(v0, ((v3 >> 39) & 0x1FF) - 256);
      for ( i = (unsigned __int64)*v1 >> 39; i; --i )
      {
        *(_BYTE *)(v5 + v2 + 20312) = v4;
        v5 = (unsigned int)(v5 + 1);
      }
    }
    ++v0;
    v1 += 2;
  }
  while ( v0 < 0xF );
  result = ((v2 >> 39) & 0x1FF) - 256;
  *(_BYTE *)((unsigned int)result + v2 + 20312) = 12;
  return result;
}
