__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdi
  unsigned int v7; // r14d
  int OutputSIGNATURE; // eax
  int DiskSignature; // ebx
  int v10; // esi
  unsigned __int64 v11; // r13
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  char v14; // r13
  int DriveGeometry; // eax
  unsigned int v16; // ecx
  wchar_t *Pool2; // rax
  WCHAR *v18; // rbx
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-79h]
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-41h] BYREF
  __int64 v24; // [rsp+60h] [rbp-39h] BYREF
  __int64 v25; // [rsp+68h] [rbp-31h] BYREF
  int v26[2]; // [rsp+70h] [rbp-29h]
  int v27[2]; // [rsp+78h] [rbp-21h]
  wchar_t *Src[2]; // [rsp+80h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  __int128 v30; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+17h]

  *(_QWORD *)v26 = a4;
  *(_QWORD *)v27 = a3;
  P = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v31 = 0LL;
  *(_OWORD *)Src = 0LL;
  DestinationString = 0LL;
  v30 = 0LL;
  result = ExpParseEfiPath((void *)(a1 + 12));
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v6 = P;
    v7 = 1;
    v23 = 0;
    LODWORD(P) = *((_DWORD *)P + 1);
    DiskSignature = ExpFindDiskSignature(
                      (int)v6 + 24,
                      (unsigned int)&P,
                      (unsigned int)&v23,
                      (unsigned int)&v25,
                      (__int64)&v24,
                      0);
    if ( DiskSignature < 0 )
      goto LABEL_7;
    v10 = (int)P;
    if ( *((_DWORD *)v6 + 1) == (_DWORD)P )
    {
      v11 = v25;
      v12 = v23;
      v13 = v24;
      if ( v6[1] == v25 && v6[2] == v24 )
      {
        v14 = 0;
        goto LABEL_20;
      }
      DriveGeometry = ExpGetDriveGeometry(v23, &v30);
      v16 = HIDWORD(v31);
      if ( DriveGeometry < 0 )
        v16 = 1;
      HIDWORD(v31) = v16;
      if ( v6[1] == v11 / v16 && v6[2] == v13 / v16 )
      {
        v14 = 1;
LABEL_20:
        Pool2 = (wchar_t *)ExAllocatePool2(64LL, 94LL, 1920364101LL);
        v18 = Pool2;
        if ( !Pool2 )
        {
          DiskSignature = -1073741670;
          goto LABEL_7;
        }
        LODWORD(v21) = v10;
        swprintf_s(Pool2, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v12, v21);
        v19 = ExpTranslateSymbolicLink(v18);
        ExFreePoolWithTag(v18, 0);
        if ( v19 < 0 )
        {
          DiskSignature = v19;
          goto LABEL_7;
        }
        if ( a2 == 3 )
        {
          OutputSIGNATURE = ExpCreateOutputNT(*(_QWORD *)v27, *(_QWORD *)v26, &DestinationString, 0LL);
        }
        else if ( a2 == 2 )
        {
          if ( v14 == 1 )
          {
            DiskSignature = ExpGetDriveGeometry(v12, &v30);
            if ( DiskSignature < 0 )
              goto LABEL_6;
            v7 = HIDWORD(v31);
          }
          LODWORD(P) = *((_DWORD *)v6 + 1);
          v20 = v6[2] * v7;
          v25 = v6[1] * v7;
          v24 = v20;
          OutputSIGNATURE = ExpCreateOutputSIGNATURE(
                              v27[0],
                              v26[0],
                              (int)v6 + 24,
                              (int)&P,
                              (__int64)&v25,
                              (__int64)&v24,
                              0LL,
                              0);
        }
        else
        {
          OutputSIGNATURE = ExpCreateOutputARC(*(_QWORD *)v27, *(_QWORD *)v26, &DestinationString, 0LL);
        }
        DiskSignature = OutputSIGNATURE;
LABEL_6:
        ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_7:
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)DiskSignature;
      }
    }
    DiskSignature = -1073741811;
    goto LABEL_7;
  }
  return result;
}
