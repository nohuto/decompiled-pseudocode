/*
 * XREFs of BiDeleteRegistryValue @ 0x14083089C
 * Callers:
 *     BiSetFirmwareModified @ 0x140390340 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x14082B918 (BiMarkTreatAsSystemStore.c)
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 * Callees:
 *     CmSiCloseSection @ 0x1402F8438 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1402FDDE8 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     BiZwDeleteValueKey @ 0x1403905D4 (BiZwDeleteValueKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3)
{
  unsigned __int64 v5; // rax
  void *v6; // rsi
  int v7; // eax
  void *v8; // rbx
  unsigned int v9; // edi
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  RtlInitUnicodeString(&v11, a2);
  v5 = BiSanitizeHandle(a1);
  v12 = 0LL;
  v6 = (void *)v5;
  if ( !a3 )
  {
    v8 = (void *)v5;
    goto LABEL_3;
  }
  v7 = BiOpenKey(v5, a3, 0x2001Fu, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v9 = BiZwDeleteValueKey(v8, &v11);
  if ( v8 != v6 && v8 )
    CmSiCloseSection(v8);
  return v9;
}
