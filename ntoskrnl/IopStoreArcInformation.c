/*
 * XREFs of IopStoreArcInformation @ 0x140B6F0F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14035BCD8 (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x1403D3C80 (_strnicmp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  __int64 **v1; // r14
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 *i; // rsi
  PVOID *Pool2; // rdi
  __int64 v6; // rbp
  ULONG_PTR v7; // rbp
  char *v8; // rax
  char *v9; // r15
  PVOID **v10; // rax
  __int64 j; // rax
  __int64 v13; // rax
  int v14; // edx
  __int64 k; // rcx
  __int64 m; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  v2 = dword_140C316F0;
  v3 = 0;
  qword_140D54BE0 = (__int64)&IoArcTableListHead;
  IoArcTableListHead = (__int64)&IoArcTableListHead;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = IoArcTableListHead; (__int64 *)j != &IoArcTableListHead; j = *(_QWORD *)j )
      {
        if ( !*(_BYTE *)(j + 36) && !*(_BYTE *)(j + 72) )
        {
          v14 = *(_DWORD *)(j + 32);
          for ( k = *(_QWORD *)j; (__int64 *)k != &IoArcTableListHead; k = *(_QWORD *)k )
          {
            if ( !*(_BYTE *)(k + 36) && !*(_BYTE *)(k + 72) && v14 == *(_DWORD *)(k + 32) )
            {
              *(_BYTE *)(j + 72) = 1;
              *(_BYTE *)(k + 72) = 1;
            }
          }
        }
      }
      if ( v2 == 1 )
      {
        for ( m = IoArcTableListHead; (__int64 *)m != &IoArcTableListHead; m = *(_QWORD *)m )
        {
          if ( *(_BYTE *)(m + 76) && *(_BYTE *)(m + 72) )
            IopAmbiguousSystemDisk = 1;
        }
      }
      return v3;
    }
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 0x50uLL, 0x20206F49u);
    if ( !Pool2 )
    {
      v3 = -1073741670;
      goto LABEL_21;
    }
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(i[3] + v6) );
    v7 = v6 + 1;
    v8 = (char *)ExAllocatePool2(64LL, v7, 0x344E6F49u);
    v9 = v8;
    if ( !v8 )
      break;
    *(_OWORD *)Pool2 = *(_OWORD *)i;
    *((_OWORD *)Pool2 + 1) = *((_OWORD *)i + 1);
    *((_OWORD *)Pool2 + 2) = *((_OWORD *)i + 2);
    *((_OWORD *)Pool2 + 3) = *((_OWORD *)i + 3);
    RtlStringCbCopyA(v8, v7, (NTSTRSAFE_PCSTR)i[3]);
    Pool2[3] = v9;
    if ( v2 == 1 && v7 >= 9 && !strnicmp(&v9[v7 - 9], "rdisk(0)", 8uLL) )
      *((_BYTE *)Pool2 + 76) = 1;
    v10 = (PVOID **)qword_140D54BE0;
    if ( *(__int64 **)qword_140D54BE0 != &IoArcTableListHead )
LABEL_26:
      __fastfail(3u);
    *Pool2 = &IoArcTableListHead;
    Pool2[1] = v10;
    *v10 = Pool2;
    qword_140D54BE0 = (__int64)Pool2;
  }
  v3 = -1073741670;
  while ( 1 )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_21:
    Pool2 = (PVOID *)IoArcTableListHead;
    if ( (__int64 *)IoArcTableListHead == &IoArcTableListHead )
      return v3;
    if ( *(__int64 **)(IoArcTableListHead + 8) != &IoArcTableListHead )
      goto LABEL_26;
    v13 = *(_QWORD *)IoArcTableListHead;
    if ( *(_QWORD *)(*(_QWORD *)IoArcTableListHead + 8LL) != IoArcTableListHead )
      goto LABEL_26;
    IoArcTableListHead = *(_QWORD *)IoArcTableListHead;
    *(_QWORD *)(v13 + 8) = &IoArcTableListHead;
    ExFreePoolWithTag(Pool2[3], 0);
  }
}
