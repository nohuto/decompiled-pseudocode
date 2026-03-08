/*
 * XREFs of MmAdvanceMdl @ 0x14061ACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAdvanceMdl(PMDL Mdl, ULONG NumberOfBytes)
{
  CSHORT *p_MdlFlags; // rbx
  unsigned int v5; // r10d
  ULONG ByteOffset; // edi
  __int64 ByteCount; // r9
  unsigned __int64 v8; // r11
  __int16 v9; // cx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  PMDL v13; // rdi
  __int64 v14; // r9
  struct _MDL *Next; // rsi
  _QWORD *p_Next; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax

  if ( NumberOfBytes >= Mdl->ByteCount )
    return -1073741584;
  p_MdlFlags = &Mdl->MdlFlags;
  v5 = 0;
  byte_140C69364 = 1;
  ByteOffset = Mdl->ByteOffset;
  ByteCount = Mdl->ByteCount;
  v8 = (((ByteOffset + LODWORD(Mdl->StartVa)) & 0xFFFuLL) + ByteCount + 4095) >> 12;
  if ( !ByteOffset )
    goto LABEL_10;
  v9 = *p_MdlFlags & 1;
  v10 = 4096 - ByteOffset;
  if ( NumberOfBytes >= (unsigned int)v10 )
  {
    Mdl->StartVa = (char *)Mdl->StartVa + 4096;
    LODWORD(ByteCount) = ByteCount - v10;
    NumberOfBytes -= v10;
    *(_QWORD *)&Mdl->ByteCount = (unsigned int)ByteCount;
    if ( v9 )
      Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + v10;
    v5 = 1;
LABEL_10:
    if ( NumberOfBytes )
    {
      Mdl->ByteCount = ByteCount - NumberOfBytes;
      Mdl->ByteOffset = NumberOfBytes & 0xFFF;
      v5 += NumberOfBytes >> 12;
      Mdl->StartVa = (char *)Mdl->StartVa + 4096 * (unsigned __int64)(NumberOfBytes >> 12);
      if ( (*(_BYTE *)p_MdlFlags & 1) != 0 )
        Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
    }
    if ( v5 )
    {
      if ( (*p_MdlFlags & 0x200) != 0 )
      {
        v11 = (__int64 *)(&Mdl[1].Next + v8);
        do
        {
          v12 = *v11;
          ++v8;
          ++v11;
        }
        while ( v12 >= 0 );
      }
      v13 = Mdl + 1;
      v14 = v5;
      do
      {
        Next = v13->Next;
        p_Next = &v13->Next;
        if ( v8 )
        {
          v17 = 1;
          do
          {
            v18 = v17;
            if ( v17 == v8 )
              v19 = (unsigned __int64)Next | 0x8000000000000000uLL;
            else
              v19 = p_Next[1] & 0x7FFFFFFFFFFFFFFFLL;
            *p_Next = v19;
            ++v17;
            ++p_Next;
          }
          while ( v18 < v8 );
        }
        --v14;
      }
      while ( v14 );
      if ( (*p_MdlFlags & 0x200) == 0 )
        *p_MdlFlags |= 0x200u;
    }
    return 0;
  }
  Mdl->ByteCount = ByteCount - NumberOfBytes;
  Mdl->ByteOffset = ByteOffset + NumberOfBytes;
  if ( v9 )
    Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
  return 0;
}
