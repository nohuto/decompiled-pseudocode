unsigned __int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  _DWORD *v4; // r9
  char v8; // r8
  unsigned __int64 result; // rax
  _KPROCESS *Process; // rcx
  unsigned int v11; // eax
  bool v12; // zf
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  v4 = (_DWORD *)(a2 + 152);
  if ( (a3 & 1) != 0 && (*v4 & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_4;
  }
  if ( (*v4 & 0x200000) != 0 && (*v4 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v11 = *(_DWORD *)(a2 + 520);
    if ( HIDWORD(Process[1].ActiveProcessors.StaticBitmap[8]) == v11 )
      v12 = (Process[1].DirectoryTableBase & 0x400000000000LL) == 0;
    else
      v12 = (unsigned int)PfCheckDeprioritizeImage(v11) == 0;
    if ( v12 )
      goto LABEL_13;
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v13, 0x63536343u);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      v15 = 1LL;
    if ( !(unsigned int)PfCheckDeprioritizeFile(*(unsigned int *)(a2 + 520), v14, v15) )
    {
LABEL_13:
      CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
      goto LABEL_4;
    }
    goto LABEL_19;
  }
LABEL_4:
  v8 = v3 | 2;
  if ( (a3 & 2) == 0 )
    v8 = v3;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 176), v8);
  if ( (a3 & 2) == 0 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
