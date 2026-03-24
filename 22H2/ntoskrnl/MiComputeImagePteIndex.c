/*
 * XREFs of MiComputeImagePteIndex @ 0x14027D3C0
 * Callers:
 *     MiReferenceInPageFile @ 0x14029D328 (MiReferenceInPageFile.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14027D460 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1403A5B08 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtos; // rdx
  __int64 v11; // rax
  unsigned __int64 v13; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  LODWORD(v6) = 0;
  if ( qword_140C4DF40 && (v4 & 0x10) == 0 )
    v4 &= ~qword_140C4DF40;
  v7 = v4 >> 16;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)v7, a2, v7);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(v7, a2, a3, a4);
    SharedProtos = SubsectionDriverProtos;
    if ( SubsectionDriverProtos )
    {
      v13 = *(_QWORD *)(SubsectionDriverProtos + 72);
      if ( v5 < v13 || v5 >= v13 + 8LL * *(unsigned int *)(v7 + 44) )
        SharedProtos = 0LL;
    }
  }
  if ( SharedProtos )
  {
    v11 = *(_QWORD *)(SharedProtos + 72);
    v6 = (__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)(v8 + 136)) >> 3;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 136);
  }
  return (unsigned int)v6 + (unsigned int)((__int64)(v5 - v11) >> 3);
}
