__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 RSAccess; // rdi
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // ecx
  KIRQL v13; // al
  KIRQL v14; // dl
  __int64 v15; // rax

  v4 = 0;
  if ( a1 < 2 )
  {
    v10 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(0LL, -1072431088);
    v12 = 170;
    goto LABEL_16;
  }
  RSAccess = FindRSAccess(a1);
  if ( !RSAccess )
  {
    RSAccess = ExAllocatePool2(64LL, 48LL, 1382837569LL);
    if ( !RSAccess )
    {
      v10 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v11 = 0;
      v12 = 169;
LABEL_17:
      PrintDebugMessage(v12, v11, 0, 0, 0LL);
      return v10;
    }
    v13 = ExAcquireSpinLockExclusive(&RSAccessLock);
    *(_OWORD *)RSAccess = 0LL;
    v14 = v13;
    v15 = gpRSAccessHead;
    *(_OWORD *)(RSAccess + 16) = 0LL;
    gpRSAccessHead = RSAccess;
    *(_OWORD *)(RSAccess + 32) = 0LL;
    *(_DWORD *)(RSAccess + 8) = a1;
    *(_QWORD *)RSAccess = v15;
    ExReleaseSpinLockExclusive(&RSAccessLock, v14);
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(RSAccess + 32) && a2 )
    {
      v10 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v12 = 171;
LABEL_16:
      v11 = a1;
      goto LABEL_17;
    }
    *(_QWORD *)(RSAccess + 32) = a2;
    *(_QWORD *)(RSAccess + 40) = a3;
  }
  else
  {
    if ( *(_QWORD *)(RSAccess + 16) && a2 )
    {
      v10 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v12 = 168;
      goto LABEL_16;
    }
    *(_QWORD *)(RSAccess + 16) = a2;
    *(_QWORD *)(RSAccess + 24) = a3;
  }
  return v4;
}
