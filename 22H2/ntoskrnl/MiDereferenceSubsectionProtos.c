/*
 * XREFs of MiDereferenceSubsectionProtos @ 0x1407B6248
 * Callers:
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiDereferencePerSessionProtos @ 0x1407B6168 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B62B0 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x14033E8A0 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14033E908 (MiUpdatePerSessionProto.c)
 */

void __fastcall MiDereferenceSubsectionProtos(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 *SessionProtosInSubsection; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  int v9; // ecx

  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
  {
    SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a1, a2);
    v7 = SessionProtosInSubsection;
    if ( (*((_DWORD *)SessionProtosInSubsection + 20))-- == 1 )
    {
      MiUpdatePerSessionProto(*v6, a1, (unsigned __int64)SessionProtosInSubsection, 0);
      v9 = *(_DWORD *)(a1 + 44);
      *v7 = *a3;
      *((_DWORD *)v7 + 20) = v9;
      v7[8] = a1;
      *a3 = (__int64)v7;
    }
  }
}
