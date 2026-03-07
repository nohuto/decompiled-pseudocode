__int64 __fastcall MiImageProtoChargedCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned int SessionId; // r12d
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int *v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // edi
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtosAtDpcLevel; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v5 = a1 + 128;
  v6 = 0;
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    v7 = (unsigned int *)(v5 + 44);
    v8 = *(_QWORD *)(v5 + 8);
    v9 = *(unsigned __int16 *)(v5 + 32) >> 1;
    if ( a2 >= v8 && a2 < v8 + 8LL * *v7 )
    {
LABEL_9:
      LOBYTE(v6) = (v9 & 0x1Fu) >= 4;
      return v6;
    }
    if ( (*(_BYTE *)(v5 + 34) & 2) == 0 || (*(_DWORD *)(a1 + 56) & 0x8000000) == 0 )
      break;
    SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, SessionId, v5);
    if ( SharedProtosAtDpcLevel )
    {
      v13 = *(_QWORD *)(SharedProtosAtDpcLevel + 72);
      if ( a2 >= v13 && a2 < v13 + 8LL * *v7 )
        goto LABEL_9;
    }
LABEL_6:
    v5 = *(_QWORD *)(v5 + 16);
  }
  SubsectionDriverProtos = MiGetSubsectionDriverProtos(v5);
  if ( !SubsectionDriverProtos )
    goto LABEL_6;
  v14 = *(_QWORD *)(SubsectionDriverProtos + 72);
  if ( a2 < v14 || a2 >= v14 + 8LL * *v7 )
    goto LABEL_6;
  return 1LL;
}
