/*
 * XREFs of MiDriverLoadSucceeded @ 0x1407F6FFC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14036C5E8 (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14036C724 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     PsCallImageNotifyRoutines @ 0x1407D30D0 (PsCallImageNotifyRoutines.c)
 *     MiCacheImageSymbols @ 0x1407F7234 (MiCacheImageSymbols.c)
 *     RtlGetNtSystemRoot @ 0x1407F7270 (RtlGetNtSystemRoot.c)
 *     MiProtectSystemImage @ 0x14080A600 (MiProtectSystemImage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfDriverLoadSucceeded @ 0x140ABA300 (VfDriverLoadSucceeded.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  __int64 v12; // rbx
  wchar_t *Pool; // rbx
  __m128i v14; // xmm0
  __int64 NtSystemRoot; // rax
  NTSTATUS v16; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    *(_DWORD *)(a1 + 196) |= 0x100u;
    v9 = (__int64 *)MiSectionControlArea(a2);
    v10 = *v9;
    BYTE8(v19) = 3;
    v11 = *(_BYTE *)(v10 + 15);
    DWORD2(v20) = 0;
    DWORD2(v21) = 0;
    *(_QWORD *)&v21 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 48);
    DWORD2(v19) = DWORD2(v19) & 0xFFF80FFF | ((v11 & 0xF1 | ((v11 & 0xE) << 7) | 1) << 8);
    v12 = MiReferenceControlAreaFile((__int64)v9);
    PsCallImageNotifyRoutines(a3, 0LL, &v19, v12);
    MiDereferenceControlAreaFile((__int64)v9, v12);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      DestinationString = 0LL;
      Pool = (wchar_t *)MiAllocatePool(256, 0x100uLL, 0x6E4C6D4Du);
      if ( Pool )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v14 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 4, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, Pool);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(_QWORD *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(Pool, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    MiSessionUpdateImageCharges(a1);
  return VfDriverLoadSucceeded(a1);
}
