/*
 * XREFs of PiHotSwapGetDefaultBusRemovalPolicy @ 0x140852F74
 * Callers:
 *     PpHotSwapUpdateRemovalPolicy @ 0x14078F428 (PpHotSwapUpdateRemovalPolicy.c)
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 */

int __fastcall PiHotSwapGetDefaultBusRemovalPolicy(__int64 a1, int *a2)
{
  const wchar_t **v2; // rsi
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rcx

  v2 = (const wchar_t **)(a1 + 48);
  if ( *(_WORD *)(a1 + 40) <= 8u || (LODWORD(v5) = wcsnicmp(*v2, L"USB\\", 4uLL), (_DWORD)v5) )
  {
    v6 = 5;
    if ( *(_WORD *)(a1 + 40) <= 0xAu
      || (LODWORD(v5) = wcsnicmp(*v2, L"1394\\", 5uLL), (_DWORD)v5)
      && (*(_WORD *)(a1 + 40) <= 0xAu || (LODWORD(v5) = wcsnicmp(*v2, L"SBP2\\", 5uLL), (_DWORD)v5)) )
    {
      if ( *(_WORD *)(a1 + 40) <= 0xEu || (LODWORD(v5) = wcsnicmp(*v2, L"PCMCIA\\", 7uLL), (_DWORD)v5) )
      {
        if ( *(_WORD *)(a1 + 40) <= 8u
          || wcsnicmp(*v2, L"PCI\\", 4uLL)
          || (v7 = *(_QWORD *)(a1 + 16), *(_WORD *)(v7 + 56) != 12)
          || (LODWORD(v5) = wcsicmp(*(const wchar_t **)(v7 + 64), L"PCMCIA"), (_DWORD)v5) )
        {
          v5 = *(_QWORD *)(a1 + 720);
          if ( !v5 || (*(_BYTE *)(v5 + 16) & 4) == 0 )
          {
            LODWORD(v5) = -(*(_BYTE *)(*(_QWORD *)(a1 + 16) + 466LL) != 5);
            v6 = 5 - (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 466LL) != 5);
          }
        }
      }
    }
  }
  else
  {
    v6 = 5;
  }
  *a2 = v6;
  return v5;
}
