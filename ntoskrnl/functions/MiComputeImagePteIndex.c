__int64 __fastcall MiComputeImagePteIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtos; // rdx
  __int64 v9; // rax
  unsigned __int64 v11; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  LODWORD(v4) = 0;
  if ( qword_140C657C0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C657C0;
  v5 = v2 >> 16;
  v6 = *(_QWORD *)v5;
  if ( (*(_BYTE *)(v5 + 34) & 2) != 0 && (*(_DWORD *)(v6 + 56) & 0x8000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)v5, a2, v5);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(v5);
    SharedProtos = SubsectionDriverProtos;
    if ( SubsectionDriverProtos )
    {
      v11 = *(_QWORD *)(SubsectionDriverProtos + 72);
      if ( v3 < v11 || v3 >= v11 + 8LL * *(unsigned int *)(v5 + 44) )
        goto LABEL_7;
    }
  }
  if ( SharedProtos )
  {
    v9 = *(_QWORD *)(SharedProtos + 72);
    v4 = (__int64)(*(_QWORD *)(v5 + 8) - *(_QWORD *)(v6 + 136)) >> 3;
    return (unsigned int)v4 + (unsigned int)((__int64)(v3 - v9) >> 3);
  }
LABEL_7:
  v9 = *(_QWORD *)(v6 + 136);
  return (unsigned int)v4 + (unsigned int)((__int64)(v3 - v9) >> 3);
}
