__int64 __fastcall KdpReportLoadSymbolsStateChange(char **a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[30]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  do
  {
    KdpSetCommonState(12337, a4, (__int64)v13);
    KdpSetContextState(v13, a4);
    v13[5] = *(_QWORD *)a2;
    v13[6] = *(unsigned int *)(a2 + 8);
    v13[7] = *(_QWORD *)(a2 + 16);
    LOBYTE(v13[8]) = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(a1[1], (__int64)KdpPathBuffer, *(unsigned __int16 *)a1, 0, 4, &v13[4]);
      ++LODWORD(v13[4]);
      v9 = &v11;
      *((_QWORD *)&v11 + 1) = KdpPathBuffer;
      LOWORD(v11) = v13[4];
      KdpPathBuffer[LOWORD(v13[4]) - 1] = 0;
    }
    else
    {
      LODWORD(v13[4]) = 0;
      v9 = 0LL;
    }
    LOWORD(v12) = 240;
    *((_QWORD *)&v12 + 1) = v13;
    result = KdpSendWaitContinue(v8, &v12, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
