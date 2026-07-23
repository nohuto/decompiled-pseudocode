/*
 * XREFs of MiDriverLoadSucceeded @ 0x14075BE34
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9248 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiDereferenceControlAreaFile @ 0x1402D7994 (MiDereferenceControlAreaFile.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140347B60 (RtlStringCbPrintfW.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140372784 (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14039E500 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x1403D1B10 (_wcsnicmp.c)
 *     PsCallImageNotifyRoutines @ 0x14061B690 (PsCallImageNotifyRoutines.c)
 *     RtlGetNtSystemRoot @ 0x14069F2A0 (RtlGetNtSystemRoot.c)
 *     MiCacheImageSymbols @ 0x14075D3B0 (MiCacheImageSymbols.c)
 *     MiProtectSystemImage @ 0x1407A1ABC (MiProtectSystemImage.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  ULONG_PTR v12; // rbx
  wchar_t *Pool; // rbx
  __m128i v14; // xmm0
  PWSTR NtSystemRoot; // rax
  NTSTATUS v16; // eax
  __int64 result; // rax
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
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)&v19, v12);
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
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
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
  result = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( (_DWORD)result == 1 )
    return MiSessionUpdateImageCharges(a1);
  return result;
}
