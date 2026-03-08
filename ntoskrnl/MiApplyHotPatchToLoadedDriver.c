/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x140A323A8
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140A321B0 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiDetachSessionGlobal @ 0x1402EA04C (MiDetachSessionGlobal.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiMakeZeroedPageTables @ 0x14036C240 (MiMakeZeroedPageTables.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VslPrepareDriverForPatch @ 0x140549980 (VslPrepareDriverForPatch.c)
 *     KeIsImageIATProtected @ 0x14056A0EC (KeIsImageIATProtected.c)
 *     MiDereferenceSessionGlobal @ 0x1406350F4 (MiDereferenceSessionGlobal.c)
 *     MiAttachToSessionForBaseImage @ 0x14063F7A4 (MiAttachToSessionForBaseImage.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiGenerateSystemImageNames @ 0x14072ECD0 (MiGenerateSystemImageNames.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     MiEnumerateBasePatches @ 0x1407F7420 (MiEnumerateBasePatches.c)
 *     MiFindEntryInImportList @ 0x140A28344 (MiFindEntryInImportList.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 */

__int64 __fastcall MiApplyHotPatchToLoadedDriver(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 *v7; // r15
  int v8; // r14d
  __int64 PteAddress; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v13; // ebx
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  unsigned int *v17; // r10
  unsigned int *v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  int v21; // ecx
  unsigned int *v22; // [rsp+40h] [rbp-69h] BYREF
  __int128 v23; // [rsp+48h] [rbp-61h] BYREF
  __int64 v24; // [rsp+58h] [rbp-51h]
  unsigned __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING v26; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v27; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING v28; // [rsp+88h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-11h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v28 = 0LL;
  v27 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v23 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
  {
    PteAddress = MiGetPteAddress(v3);
    v11 = PteAddress + 8 * (((v10 >> 12) + ((v10 & 0xFFF) != 0) + 511LL) & 0xFFFFFFFFFFFFFE00uLL);
    if ( !(unsigned int)MiMakeZeroedPageTables(
                          v11,
                          v11 + 8 * (((unsigned int)dword_140C694FC >> 12) + ((dword_140C694FC & 0xFFF) != 0) - 1LL),
                          0,
                          12) )
      return 3221225626LL;
  }
  v13 = 0x40000000;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
  {
    v13 = 1073741825;
    KeStackAttachProcess((PRKPROCESS)*(&xmmword_140C694C8 + 1), &ApcState);
    v7 = MiAttachToSessionForBaseImage(a1);
  }
  v14 = v13 | 0x10000000;
  if ( !(unsigned int)KeIsImageIATProtected(a1) )
    v14 = v13;
  v15 = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v26, &v28, &v27);
  if ( v15 >= 0 )
  {
    v16 = MmLoadSystemImageEx((__int64)a2, 0LL, 0LL, a3, v14, &v22, &v25);
    v15 = v16;
    if ( v16 != -1073741411 )
    {
      if ( v16 != -1073741554 )
      {
        if ( v16 < 0 )
          goto LABEL_36;
        v18 = v22;
        v8 = 1;
        if ( (v14 & 1) == 0
          || _bittest((const signed __int32 *)(a1 + 104), 0x1Bu) && _bittest((const signed __int32 *)v22 + 26, 0x1Bu) )
        {
          if ( !(unsigned int)MiFindEntryInImportList(*((_QWORD *)v22 + 17), a1) )
          {
            v24 = 0LL;
            v23 = (unsigned __int64)v18;
            MiEnumerateBasePatches(
              a1,
              (unsigned int (__fastcall *)(_QWORD *, __int64))MiFindMatchingPatch,
              (__int64)&v23);
            if ( *((_QWORD *)&v23 + 1) )
            {
              v15 = -1073740758;
            }
            else
            {
              v15 = VslPrepareDriverForPatch(*(_QWORD *)(a1 + 48));
              if ( v15 >= 0 )
              {
                v17 = v22;
                goto LABEL_27;
              }
            }
LABEL_32:
            v18 = v22;
            goto LABEL_33;
          }
          v15 = -1073740945;
        }
        else
        {
          v15 = -1073740620;
        }
LABEL_33:
        MiDriverLoadSucceeded((__int64)v18, *((_QWORD *)v18 + 14), (__int128 *)a2, (__int64)&v27, (__int64)&v26, 1);
LABEL_34:
        if ( v8 )
          MmUnloadSystemImage((ULONG_PTR)v22);
        goto LABEL_36;
      }
      v17 = v22;
      if ( (v22[49] & 0x20) != 0 )
      {
        if ( *((_QWORD *)v22 + 35) != a1 )
        {
          v15 = -1073741791;
          goto LABEL_36;
        }
        if ( !*((_QWORD *)v22 + 14) )
        {
          v15 = -1073740758;
          goto LABEL_36;
        }
LABEL_27:
        v19 = MiSectionControlArea(*((_QWORD *)v17 + 14));
        v15 = MiApplyDriverHotPatch(v20, a1, v19, v14);
        v21 = v8;
        if ( v15 >= 0 )
        {
          if ( (MiFlags & 0x40000) != 0 )
            v22[26] |= 0x2100u;
          v8 = 0;
        }
        if ( !v21 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
  }
LABEL_36:
  if ( v7 )
  {
    MiDetachSessionGlobal((__int64)(&xmmword_140C694D8 + 1));
    MiDereferenceSessionGlobal(v7);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  }
  return (unsigned int)v15;
}
