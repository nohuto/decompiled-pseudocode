/*
 * XREFs of PspInitializeFullProcessImageName @ 0x1406C6DA4
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     PspSetProcessShortName @ 0x1406C7C84 (PspSetProcessShortName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  void *v4; // rdi
  ULONG_PTR v5; // rsi
  int NameStringMode; // eax
  int v7; // ebx
  char *v8; // rax
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[34]; // [rsp+50h] [rbp-B0h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0LL;
  if ( (*(_DWORD *)(a2 + 2172) & 1) != 0 )
    goto LABEL_17;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 1304);
    if ( !v12 )
    {
      v7 = -1073741637;
      goto LABEL_11;
    }
    v13 = MiSectionControlArea(v12);
    v5 = MiReferenceControlAreaFile(v13);
  }
  v15 = *(_OWORD *)(v5 + 88);
  PspSetProcessShortName(a2, &v15);
  LODWORD(NumberOfBytes) = 272;
  NameStringMode = ObQueryNameStringMode(v5, (unsigned int)Src, 272, (unsigned int)&NumberOfBytes, 0);
  v7 = NameStringMode;
  if ( NameStringMode == -2147483643 || NameStringMode == -1073741789 || NameStringMode == -1073741820 )
  {
    if ( (unsigned int)NumberOfBytes <= 0x110 )
      goto LABEL_17;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_17;
    v7 = ObQueryNameStringMode(v5, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
    if ( v7 >= 0 )
      goto LABEL_12;
    ExFreePoolWithTag(v4, 0);
LABEL_11:
    if ( v7 >= 0 )
      goto LABEL_12;
    goto LABEL_17;
  }
  if ( NameStringMode >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
  {
    v8 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v4 = v8;
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)Src;
      *((_QWORD *)v8 + 1) = v8 + 16;
      memmove(v8 + 16, Src[1], WORD1(Src[0]));
      goto LABEL_11;
    }
  }
LABEL_17:
  LODWORD(NumberOfBytes) = 16;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v4 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)NumberOfBytes);
    v7 = 0;
  }
  else
  {
    v7 = -1073741801;
  }
LABEL_12:
  *(_QWORD *)(a2 + 1472) = v4;
  return (unsigned int)v7;
}
