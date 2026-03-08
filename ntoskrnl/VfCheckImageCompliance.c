/*
 * XREFs of VfCheckImageCompliance @ 0x140AC049C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140AD7704 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC09DC (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckImageCompliance(__int64 a1)
{
  int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rdi
  ULONG_PTR v5; // rsi
  unsigned int *v6; // r14
  unsigned int v7; // r12d
  unsigned int v8; // ecx
  __int16 v9; // ax
  int v10; // edx
  char Str1[8]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+38h] [rbp-18h]

  v2 = 1;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v3 = RtlImageNtHeader(*(_QWORD *)(a1 + 48));
    v4 = v3;
    if ( v3 )
    {
      v5 = *(unsigned __int16 *)(v3 + 20) + v3 + 24;
      v6 = (unsigned int *)(v3 + 232);
      if ( !*(_DWORD *)(v3 + 232) || !*(_DWORD *)(v3 + 236) )
        v2 = 0;
      v7 = 0;
      if ( *(_WORD *)(v3 + 6) )
      {
        do
        {
          if ( (*(_DWORD *)(v5 + 36) & 0xA0000000) == 0xA0000000 )
          {
            *(_QWORD *)Str1 = *(_QWORD *)v5;
            v12 = 0;
            if ( stricmp(Str1, "INIT") || (VfOptionFlags & 0x100) != 0 )
            {
              ViCiPreprocessOptions(
                Response,
                "The image %wZ contains an executable and writable section 0x%p (name %s).",
                8195LL,
                a1 + 88,
                v5,
                Str1);
              VfReportIssueWithOptions(0xC4u, 0x2003uLL, a1 + 88, v5, (ULONG_PTR)Str1, Response);
              if ( (MmVerifierData & 0x1000) != 0 )
                ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 292LL);
              _InterlockedIncrement(&dword_140C138C4);
            }
          }
          if ( v2 )
          {
            v8 = *(_DWORD *)(v5 + 12);
            if ( v8 <= *v6 && *(_DWORD *)(v5 + 8) + v8 > *v6 && (*(_DWORD *)(v5 + 36) & 0x20000000) != 0 )
            {
              *(_QWORD *)Str1 = *(_QWORD *)v5;
              v12 = 0;
              ViCiPreprocessOptions(
                byte_140C0DC9C,
                "The image %wZ contains an IAT, 0x%p in executable section (name %s).",
                8197LL,
                a1 + 88,
                v6,
                Str1);
              VfReportIssueWithOptions(0xC4u, 0x2005uLL, a1 + 88, (ULONG_PTR)v6, (ULONG_PTR)Str1, byte_140C0DC9C);
              if ( (MmVerifierData & 0x1000) != 0 )
                ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 300LL);
              _InterlockedIncrement(&dword_140C138CC);
            }
          }
          v9 = *(_WORD *)(v4 + 24);
          if ( v9 == 267 || v9 == 523 )
          {
            v10 = *(_DWORD *)(v4 + 56);
            if ( !v10 || (v10 & 0xFFF) != 0 )
            {
              *(_QWORD *)Str1 = *(_QWORD *)v5;
              v12 = 0;
              ViCiPreprocessOptions(
                byte_140C0DC94,
                "The image %wZ contains section 0x%p that is not page aligned (name %s).",
                8196LL,
                a1 + 88,
                v5,
                Str1);
              VfReportIssueWithOptions(0xC4u, 0x2004uLL, a1 + 88, v5, (ULONG_PTR)Str1, byte_140C0DC94);
              if ( (MmVerifierData & 0x1000) != 0 )
                ViTargetIncrementCounter(*(_QWORD *)(a1 + 56), 296LL);
              _InterlockedIncrement(&dword_140C138C8);
            }
          }
          v5 += 40LL;
          ++v7;
        }
        while ( v7 < *(unsigned __int16 *)(v4 + 6) );
      }
    }
  }
}
