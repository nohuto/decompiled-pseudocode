/*
 * XREFs of DiagGeneric @ 0x1C00114BC
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 * Callees:
 *     DiagAllDiagnosticData @ 0x1C00110F4 (DiagAllDiagnosticData.c)
 */

__int64 __fastcall DiagGeneric(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  char v5; // bl
  __int64 result; // rax
  bool v7; // zf

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_QWORD *)(a2 + 64);
    v4 = *(unsigned int *)(a2 + 60);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(unsigned int *)(a2 + 16);
  }
  *(_DWORD *)(v3 + 20) = 0;
  v5 = 1;
  if ( (unsigned int)v4 < 0x48 || v4 < (unsigned __int64)*(unsigned int *)(v3 + 24) + 28 )
  {
    *(_DWORD *)(v3 + 20) = 1;
    result = 3238002692LL;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v3 + 4) != 83
    || *(_BYTE *)(v3 + 5) != 84
    || *(_BYTE *)(v3 + 6) != 79
    || *(_BYTE *)(v3 + 7) != 82
    || *(_BYTE *)(v3 + 8) != 68
    || *(_BYTE *)(v3 + 9) != 73
    || *(_BYTE *)(v3 + 10) != 65
    || *(_BYTE *)(v3 + 11) != 71 )
  {
    *(_DWORD *)(v3 + 20) = 4;
    result = 3238002695LL;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v3 + 28) != 44 )
  {
    *(_DWORD *)(v3 + 20) = 2;
    result = 3238002699LL;
LABEL_27:
    v5 = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v3 + 32) != *(_DWORD *)(v3 + 60) + 40 )
  {
    *(_DWORD *)(v3 + 20) = 3;
LABEL_18:
    result = 3238002694LL;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v3 + 36) != 2 )
  {
    *(_DWORD *)(v3 + 20) = 5;
    goto LABEL_18;
  }
  v7 = *(_DWORD *)(v3 + 40) == 0;
  *(GUID *)(v3 + 44) = GUID_DIAGNOSTIC_PROVIDER_STORNVME;
  if ( !v7 )
    goto LABEL_18;
  result = DiagAllDiagnosticData(a1, v3 + 28, v3);
  if ( (_DWORD)result && (_DWORD)result != -1056964604 )
    v5 = 4;
LABEL_28:
  *(_BYTE *)(a2 + 3) = v5;
  return result;
}
