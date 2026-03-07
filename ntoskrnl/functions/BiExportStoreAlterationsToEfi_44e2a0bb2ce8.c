__int64 __fastcall BiExportStoreAlterationsToEfi(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Exporting store alterations to efi");
  v7[1] = v7;
  v7[0] = v7;
  v3 = BiBuildIdentifierList(a1, v2, (__int64)v7);
  if ( v3 < 0 )
    goto LABEL_6;
  v4 = BiExportBcdObjects((__int64)a1, (__int64 *)v7);
  if ( v4 < 0 )
    v3 = v4;
  v5 = v3;
  v3 = BiExportEfiBootManager((__int64)a1, (__int64)v7);
  if ( v3 < 0 || (v3 = v5, v5 < 0) )
LABEL_6:
    BiLogMessage(4LL, L"BiExportStoreAlterationsToEfi failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v7);
  return (unsigned int)v3;
}
