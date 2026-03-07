void __fastcall Bulk_TransferData_DetermineTransferMechanism(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // ebx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // r9
  _QWORD *v7; // rax

  v1 = *(_DWORD *)(a1 + 104);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v4 + 2) != 8
      && *(_WORD *)(v4 + 2) != 9
      && *(_WORD *)(v4 + 2) != 10
      && *(_WORD *)(v4 + 2) != 50
      && *(_WORD *)(v4 + 2) != 55
      && *(_WORD *)(v4 + 2) != 56
      && (unsigned int)*(unsigned __int16 *)(v4 + 2) - 57 < 2 )
    {
      goto LABEL_9;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 320LL) && v1 <= 8 )
    {
      v2 = 1;
      goto LABEL_8;
    }
    if ( TR_IsUrbUsingChainedMdl(v4)
      || v5 > *(_DWORD *)(v6 + 24)
      || (v7 = TR_AcquireDoubleBuffer(v6), *(_QWORD *)(a1 + 96) = v7, v2 = 2, !v7) )
    {
LABEL_9:
      v2 = 3;
    }
  }
LABEL_8:
  *(_DWORD *)(a1 + 76) = v2;
}
