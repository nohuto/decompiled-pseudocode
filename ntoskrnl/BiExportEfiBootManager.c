/*
 * XREFs of BiExportEfiBootManager @ 0x140A5B928
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x140A5BC98 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     BiQueryBootEntryOrder @ 0x14082BC18 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14082BCCC (BiQueryBootOptions.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiGetElement @ 0x140A59CEC (BiGetElement.c)
 *     BiDeleteEfiVariable @ 0x140A5B6EC (BiDeleteEfiVariable.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A5BD48 (BiHandleFirmwareDefaultEntry.c)
 *     BiSetBootEntryOrder @ 0x140A5C048 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140A5C0C0 (BiSetBootOptions.c)
 *     BiTranslateDisplayOrder @ 0x140A5C138 (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x140A5C1C0 (BiTranslateObjectIdentifier.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiExportEfiBootManager(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *v4; // r15
  void *v5; // r14
  void *v6; // rsi
  int v7; // eax
  int v8; // ebx
  int Element; // eax
  void *Pool2; // rax
  int v11; // r14d
  int v12; // eax
  void *v13; // r13
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  PVOID v18; // r14
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-49h] BYREF
  PVOID P; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-29h] BYREF
  int v27; // [rsp+44h] [rbp-25h] BYREF
  void *Buf2; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-19h] BYREF
  void *Buf1; // [rsp+58h] [rbp-11h] BYREF
  PVOID v31; // [rsp+60h] [rbp-9h] BYREF
  _DWORD *v32; // [rsp+68h] [rbp-1h] BYREF
  _DWORD *v33; // [rsp+70h] [rbp+7h] BYREF
  __int64 v34; // [rsp+78h] [rbp+Fh]
  __int128 v35; // [rsp+80h] [rbp+17h] BYREF
  __int64 v36; // [rsp+90h] [rbp+27h]

  v34 = a2;
  v27 = 0;
  v3 = 0;
  v24 = 0;
  v4 = 0LL;
  v22 = 0;
  v5 = 0LL;
  v26 = 0;
  v6 = 0LL;
  v29 = 0;
  Buf1 = 0LL;
  P = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v32 = 0LL;
  Buf2 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR.Data1, &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      v8 = 0;
    goto LABEL_47;
  }
  Element = BiGetElement(v25, 0x24000001u, &v31, &v22);
  v8 = Element;
  if ( Element >= 0 )
  {
    v22 >>= 4;
    Pool2 = (void *)ExAllocatePool2(258LL, 4LL * v22, 1262764866LL);
    Buf1 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
      goto LABEL_45;
    }
    BiTranslateDisplayOrder(a2, v31, Pool2, &v22);
LABEL_10:
    v11 = BiQueryBootEntryOrder(&Buf2, &v26);
    v12 = BiHandleFirmwareDefaultEntry(a2, v25, &Buf1, &v22);
    v13 = Buf1;
    v8 = v12;
    if ( v12 < 0 )
      goto LABEL_39;
    v14 = v22;
    if ( v11 < 0 || !v22 || v26 != v22 || memcmp(Buf1, Buf2, 4LL * v22) )
    {
      v8 = BiSetBootEntryOrder(v13, v14);
      if ( v8 < 0 )
        goto LABEL_39;
    }
    *(_QWORD *)&v35 = 0x1800000001LL;
    v15 = BiGetElement(v25, 0x25000004u, &v32, &v29);
    v4 = v32;
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741275 )
        goto LABEL_39;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_39;
      DWORD2(v35) = 0;
    }
    else
    {
      v16 = -1;
      v3 = 1;
      if ( *(_QWORD *)v32 <= 0xFFFFFFFFuLL )
        v16 = *v32;
      DWORD2(v35) = v16;
    }
    v17 = BiGetElement(v25, 0x24000002u, &P, &v24);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v18 = P;
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v34, P, &v27);
      if ( v8 >= 0 )
      {
        LODWORD(v36) = v27;
        goto LABEL_29;
      }
      goto LABEL_40;
    }
    if ( v17 == -1073741275 )
    {
      v19 = BiDeleteEfiVariable(L"BootNext");
      v18 = P;
      v8 = v19;
      if ( v19 >= 0 )
      {
        LODWORD(v36) = 0;
LABEL_29:
        v24 = 0;
        v20 = BiQueryBootOptions(&v33, &v24);
        v6 = v33;
        if ( v20 >= 0 && *v33 == (_DWORD)v35 )
        {
          if ( (v3 & 1) != 0 && v33[2] == DWORD2(v35) )
            v3 &= ~1u;
          if ( (v3 & 2) != 0 && v33[4] == (_DWORD)v36 )
            v3 &= ~2u;
        }
        if ( v3 )
          v8 = BiSetBootOptions(&v35, v3);
      }
LABEL_40:
      if ( v13 )
        ExFreePoolWithTag(v13, 0x4B444342u);
      if ( v18 )
        ExFreePoolWithTag(v18, 0x4B444342u);
      v5 = Buf2;
      goto LABEL_45;
    }
LABEL_39:
    v18 = P;
    goto LABEL_40;
  }
  if ( Element == -1073741275 )
  {
    v22 = 0;
    goto LABEL_10;
  }
LABEL_45:
  if ( v31 )
    ExFreePoolWithTag(v31, 0x4B444342u);
LABEL_47:
  if ( v25 )
    BcdCloseObject(v25);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage(4LL, L"BiExportEfiBootManager failed: %x", (unsigned int)v8);
  return (unsigned int)v8;
}
