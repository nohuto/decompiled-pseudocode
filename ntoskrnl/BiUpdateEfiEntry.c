/*
 * XREFs of BiUpdateEfiEntry @ 0x140A5C248
 * Callers:
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x140A5B800 (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x14066F1C4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiGetElement @ 0x140A59CEC (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x140A5B328 (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5BF28 (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(__int64 a1, __int64 a2)
{
  PVOID v3; // r12
  _DWORD *v4; // r15
  _WORD *v5; // r14
  int v6; // ebx
  int updated; // eax
  _DWORD *v8; // r13
  int v9; // eax
  void *v10; // rdi
  unsigned int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  _OWORD *v15; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  void *Buf2; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v20; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0;
  v21 = 0;
  v13 = 0;
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  Buf2 = 0LL;
  v14 = 0LL;
  v6 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v14);
  if ( v6 < 0 )
    goto LABEL_13;
  BiGetElement(v14, 0x12000004u, &P, &v20);
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    BiGetElement(v14, 0x11000001u, &v15, &v21);
    updated = BiSpacesUpdatePhysicalDevicePath(&v15);
    if ( updated < 0 )
      BiLogMessage(3LL, L"BiSpacesUpdatePhysicalDevicePath failed %x", (unsigned int)updated);
    BiGetElement(v14, 0x12000002u, &v16, &v13);
    v4 = v15;
    v5 = v16;
  }
  v8 = *(_DWORD **)(a2 + 40);
  v3 = P;
  v9 = BiCreateMergedBootEntry(v8, P, v4, v5, &Buf2);
  v6 = v9;
  if ( v9 == -1073741766 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  if ( v9 < 0 )
    goto LABEL_13;
  v10 = Buf2;
  v11 = v8[1];
  if ( v11 != *((_DWORD *)Buf2 + 1) || memcmp(v8, Buf2, v11) )
  {
    v6 = BiModifyBootEntry((__int64)v10);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v10, 0x4B444342u);
LABEL_13:
      BiLogMessage(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
      goto LABEL_14;
    }
  }
  ExFreePoolWithTag(v8, 0x4B444342u);
  *(_QWORD *)(a2 + 40) = v10;
LABEL_14:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v14 )
    BcdCloseObject(v14);
  return (unsigned int)v6;
}
