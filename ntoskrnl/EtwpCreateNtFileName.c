/*
 * XREFs of EtwpCreateNtFileName @ 0x14077271C
 * Callers:
 *     EtwpDelayCreate @ 0x1407725F4 (EtwpDelayCreate.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpCreateNtFileName(_WORD *a1, wchar_t **a2, _BYTE *a3)
{
  __int64 v4; // rax
  _WORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // eax
  const wchar_t *v8; // rsi
  int v9; // ecx
  __int64 v10; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v12; // rdi
  NTSTATUS result; // eax

  *a3 = 0;
  v4 = -1LL;
  v5 = a1;
  do
    ++v4;
  while ( a1[v4] );
  v6 = 2 * v4;
  if ( !v6 )
    return -1073741773;
  v7 = v6 + 2;
  if ( v7 > 0xA )
  {
    if ( *a1 != 92 )
      goto LABEL_6;
    if ( a1[1] == 92 && a1[2] == 63 && a1[3] == 92 )
    {
      v7 -= 8;
      v5 = a1 + 4;
    }
  }
  if ( *v5 == 92 && v5[1] == 92 )
  {
    v8 = L"\\??\\UNC\\";
    *a3 = 1;
    v5 += 2;
    v9 = 12;
    goto LABEL_7;
  }
LABEL_6:
  v8 = L"\\DosDevices\\";
  v9 = 24;
LABEL_7:
  v10 = v9 + v7;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1350005829LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    result = RtlStringCbPrintfW(Pool2, (unsigned int)v10, L"%ws%ws", v8, v5);
    if ( !result )
    {
      *a2 = v12;
      return result;
    }
    ExFreePoolWithTag(v12, 0);
    result = -1073741811;
  }
  else
  {
    result = -1073741801;
  }
  *a2 = 0LL;
  return result;
}
