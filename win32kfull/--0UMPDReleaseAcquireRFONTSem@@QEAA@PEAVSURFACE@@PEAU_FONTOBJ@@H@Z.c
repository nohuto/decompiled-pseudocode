UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  int **v4; // rdi
  __int64 v6; // rax
  struct RFONTOBJ *v7; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = (int **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 7) = (char *)this + 12;
  v6 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 8) = v6;
  v7 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 72);
  *(_QWORD *)v7 = a3;
  if ( v6 && (*(_DWORD *)(v6 + 40) & 0x8080) == 0x8080 && a3 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v7, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v4);
  return this;
}
