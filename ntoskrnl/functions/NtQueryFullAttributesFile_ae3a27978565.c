__int64 __fastcall NtQueryFullAttributesFile(__int64 a1, unsigned __int64 a2)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // esi
  __int64 result; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _OWORD v10[14]; // [rsp+50h] [rbp-258h] BYREF
  __int128 v11; // [rsp+130h] [rbp-178h] BYREF
  __int128 v12; // [rsp+140h] [rbp-168h]
  __int128 v13; // [rsp+150h] [rbp-158h]
  __int64 v14; // [rsp+160h] [rbp-148h]
  _BYTE v15[272]; // [rsp+170h] [rbp-138h] BYREF

  memset(v15, 0, sizeof(v15));
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = a2;
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  LODWORD(v10[0]) = 14680072;
  WORD3(v10[4]) = 7;
  DWORD2(v10[5]) = 1;
  LODWORD(v10[4]) = 2113536;
  BYTE9(v10[8]) = 1;
  BYTE11(v10[8]) = 1;
  *(_QWORD *)&v10[9] = v15;
  *(_QWORD *)&v10[3] = a1;
  DWORD2(v10[9]) = 32;
  if ( PreviousMode )
    *((_QWORD *)&v10[6] + 1) = &v11;
  else
    *((_QWORD *)&v10[6] + 1) = a2;
  memset(&v10[10], 0, 40);
  LOWORD(v10[10]) = 40;
  *(_QWORD *)&v10[12] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (int)v10,
         *(__int64 *)&v10[12],
         Handle);
  if ( *((_QWORD *)&v10[10] + 1) && (unsigned __int8)FsRtlpCleanupEcps() )
    *((_QWORD *)&v10[10] + 1) = 0LL;
  if ( LODWORD(v10[2]) == -1096154543 )
  {
    result = LODWORD(v10[1]);
    if ( SLODWORD(v10[1]) >= 0 )
    {
      if ( PreviousMode )
      {
        *(_OWORD *)a2 = v11;
        *(_OWORD *)(a2 + 16) = v12;
        *(_OWORD *)(a2 + 32) = v13;
        *(_QWORD *)(a2 + 48) = v14;
      }
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return (unsigned int)-1073741788;
    }
    return (unsigned int)v7;
  }
  return result;
}
