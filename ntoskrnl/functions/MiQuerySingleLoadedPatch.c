__int64 __fastcall MiQuerySingleLoadedPatch(
        UNICODE_STRING **a1,
        _DWORD *a2,
        int *a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  _KPROCESS *Process; // rbx
  unsigned int ProcessImageHotPatchRecord; // edi
  unsigned __int16 Length; // bp
  unsigned __int64 v13; // rsi
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v15; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  DestinationString = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  RtlInitUnicodeString(&DestinationString, 0LL);
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord((__int64)Process, *a3, a3[1], 0, &DestinationString);
  if ( (int)(ProcessImageHotPatchRecord + 0x80000000) < 0 || ProcessImageHotPatchRecord == -1073741275 )
  {
    Length = DestinationString.Length;
    v13 = DestinationString.Length + 48LL;
    if ( a6 < v13 )
    {
      ProcessImageHotPatchRecord = 0;
      *a1 = 0LL;
LABEL_10:
      *a2 = v13;
      goto LABEL_11;
    }
    Pool = (UNICODE_STRING *)MiAllocatePool(256, (unsigned int)v13, 0x71486D4Du);
    ProcessImageHotPatchRecord = 0;
    v15 = Pool;
    if ( Pool )
    {
      Pool->Buffer = (wchar_t *)-1LL;
      *(_DWORD *)&Pool->Length = 1;
      LODWORD(Pool[1].Buffer) = a4;
      *(_QWORD *)&Pool[1].Length = *(_QWORD *)a3;
      if ( Length )
      {
        Pool[2].MaximumLength = Length;
        Pool[2].Length = Length;
        Pool[2].Buffer = &Pool[3].Length;
        RtlCopyUnicodeString(Pool + 2, &DestinationString);
        v15[2].Buffer = (wchar_t *)((char *)v15[2].Buffer + a5 - (_QWORD)v15);
      }
      *a1 = v15;
      goto LABEL_10;
    }
    ProcessImageHotPatchRecord = -1073741670;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
  return ProcessImageHotPatchRecord;
}
