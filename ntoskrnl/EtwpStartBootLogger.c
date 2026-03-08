/*
 * XREFs of EtwpStartBootLogger @ 0x140B944B4
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpStartBootLogger(__int64 a1)
{
  __int64 Pool2; // rax
  UNICODE_STRING *v3; // rbx
  unsigned int started; // edi
  const WCHAR *v5; // rdx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 Length; // rcx
  ULONGLONG v11; // rcx

  if ( !a1 || !*(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(256LL, 0x4E4uLL, 0x50777445u);
  v3 = (UNICODE_STRING *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 44) = 0x20000;
    *(_DWORD *)(Pool2 + 64) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a1 + 52);
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)(a1 + 32);
    RtlInitUnicodeString((PUNICODE_STRING)(Pool2 + 144), *(PCWSTR *)(a1 + 16));
    v5 = *(const WCHAR **)(a1 + 24);
    if ( v5 )
      RtlInitUnicodeString(v3 + 8, v5);
    *(_DWORD *)&v3[3].Length = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(&v3[3].MaximumLength + 1) = *(_DWORD *)(a1 + 60);
    LODWORD(v3[3].Buffer) = *(_DWORD *)(a1 + 64);
    HIDWORD(v3[4].Buffer) = *(_DWORD *)(a1 + 68);
    v6 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)&v3[7].Length |= 0x80000002;
    HIDWORD(v3[3].Buffer) = v6;
    LODWORD(v3[4].Buffer) = 0x80000000;
    LOWORD(v3[4].Buffer) = 176;
    BYTE2(v3[4].Buffer) = -1;
    *(_DWORD *)&v3[11].Length = 1;
    v7 = *(_DWORD *)(a1 + 88);
    if ( v7 > 0x20 )
      v7 = 32;
    v8 = v7 >> 2;
    if ( *(_QWORD *)(a1 + 80) && v8 )
    {
      *(&v3[11].MaximumLength + 2) = 1;
      *(&v3[11].MaximumLength + 1) = v8 + 1;
      v3[11].Length += v8 + 1;
      memmove(&v3[11].Buffer, *(const void **)(a1 + 80), 4LL * v8);
      ++v3[11].MaximumLength;
    }
    v9 = *(_DWORD *)(a1 + 104) >> 2;
    if ( v9 > 0x100 )
      v9 = 256;
    if ( *(_QWORD *)(a1 + 96) )
    {
      if ( v9 )
      {
        Length = v3[11].Length;
        *(&v3[11].MaximumLength + 2 * Length) = 3;
        *(&v3[11].Length + 2 * Length) = v9 + 1;
        v3[11].Length += v9 + 1;
        memmove(&v3[11].MaximumLength + 2 * Length + 1, *(const void **)(a1 + 96), 4LL * v9);
        ++v3[11].MaximumLength;
      }
    }
    v11 = EtwpHostSiloState;
    *(_DWORD *)&v3->Length = 4 * v3[11].Length + 176;
    started = EtwpStartLogger(v11, (__int64)v3);
    ExFreePoolWithTag(v3, 0x50777445u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return started;
}
