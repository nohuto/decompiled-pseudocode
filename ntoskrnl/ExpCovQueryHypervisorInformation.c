/*
 * XREFs of ExpCovQueryHypervisorInformation @ 0x140A03908
 * Callers:
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlGetCoverageData @ 0x14053D1C8 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x14053D328 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x14053D84C (HvlResetCoverageVector.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpCovQueryHypervisorInformation(__int64 *a1)
{
  void *v2; // rsi
  WCHAR *Pool2; // rax
  __int64 v4; // rdx
  WCHAR *v5; // r14
  char v6; // r12
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // r13
  size_t v10; // rbx
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int Length; // edx
  unsigned __int16 MaximumLength; // ax
  void *v20; // rcx
  size_t v21; // r8
  wchar_t *Buffer; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  size_t Size; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+58h]

  v25 = 0;
  v2 = 0LL;
  DestinationString = 0LL;
  LODWORD(Size) = 0;
  if ( HvlHypervisorConnected )
  {
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, 64LL, 1920364355LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      if ( HvlGetCoverageInfo(Pool2, v4, &Size, &v25) )
      {
        RtlInitUnicodeString(&DestinationString, v5);
        v6 = *((_BYTE *)a1 + 12);
        v7 = *((_DWORD *)a1 + 2);
        v8 = *((_DWORD *)a1 + 12);
        v9 = *a1;
        v26 = v7;
        if ( v6 )
        {
          if ( v6 == 1 && v8 == 2 )
          {
            v10 = v25;
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)a1 + 1, &DestinationString, 1u) )
            {
              v7 = v26;
              goto LABEL_11;
            }
          }
        }
        else if ( !v8 )
        {
          v10 = (unsigned int)Size;
LABEL_11:
          v11 = -1;
          if ( (unsigned int)v10 < 0xFFFFFFE0 )
          {
            v12 = DestinationString.Length + v10 + 32;
            if ( v12 < 0x20 )
              v12 = -1;
            v11 = v12;
          }
          v13 = *((_DWORD *)a1 + 14);
          v14 = v13 + v11;
          if ( v13 + v11 >= v13 )
          {
            *((_DWORD *)a1 + 14) = v14;
            if ( v7 >= v14 )
            {
              v15 = 4096;
              if ( (unsigned int)v10 > 0x1000 )
                v15 = v10;
              v16 = ExAllocatePool2(64LL, v15, 1920364355LL);
              v2 = (void *)v16;
              if ( v16 )
              {
                if ( HvlGetCoverageData(v6, v10, v16, v17) )
                {
                  *(_DWORD *)(v9 + 4) = 1;
                  *(_DWORD *)v9 = v11;
                  *(_DWORD *)(v9 + 24) = v10;
                  memmove((void *)(v9 + 28), v2, v10);
                  Length = DestinationString.Length;
                  MaximumLength = DestinationString.MaximumLength;
                  v20 = (void *)(v10 + v9 + 32);
                  *(_WORD *)(v9 + 8) = DestinationString.Length;
                  v21 = Length;
                  Buffer = DestinationString.Buffer;
                  *(_QWORD *)(v9 + 16) = v20;
                  *(_WORD *)(v9 + 10) = MaximumLength;
                  memmove(v20, Buffer, v21);
                  ++*((_DWORD *)a1 + 13);
                  *a1 += v11;
                  if ( v6 )
                    HvlResetCoverageVector();
                }
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 13);
            }
          }
        }
      }
      ExFreePoolWithTag(v5, 0);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
  }
}
