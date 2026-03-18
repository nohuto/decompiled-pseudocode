/*
 * XREFs of bDeleteFlEntry @ 0x1C02961A8
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C0295B94 (GreEudcUnloadLinkW.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C00119A4 (bUnloadEudcFont.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C0014850 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C0014A8C (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0014ED0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0014F34 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0014F84 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00150C4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C001514C (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C0297294 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0297384 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned int v7; // esi
  unsigned __int16 *v8; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v10; // rbx
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v12; // rdi
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  bool v15; // zf
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax
  wchar_t *Str1a; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v21[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  unsigned __int16 *v23; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v23, 0x24Au);
  v6 = Str1a;
  v7 = 0;
  if ( Str1a )
  {
    v8 = v23;
    if ( v23 )
    {
      v22 = 0LL;
      *(_OWORD *)v21 = 0LL;
      if ( (int)StringCchCopyW((char *)v23, 293LL, a2) >= 0 )
      {
        if ( ParseFontLinkEntry(v8, (struct FontLinkData *)v21) )
        {
          if ( (unsigned int)bAppendSysDirectory(v6, v8) )
          {
            if ( _wcsicmp(v6, Dst) )
            {
              if ( off_1C0326330 != (_UNKNOWN *)&off_1C0326330 )
              {
                BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(Str1);
                v10 = BaseFontEntry;
                if ( BaseFontEntry )
                {
                  LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v6, v21[1]);
                  v12 = LinkedFontEntry;
                  if ( LinkedFontEntry )
                  {
                    if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                    {
                      Flink = LinkedFontEntry->Flink;
                      if ( Flink->Blink == v12 )
                      {
                        Blink = v12->Blink;
                        if ( Blink->Flink == v12 )
                        {
                          Blink->Flink = Flink;
                          Flink->Blink = Blink;
                          v15 = HIDWORD(v10[6].Flink)-- == 1;
                          v16 = v12 + 2;
                          if ( !v15 )
                          {
                            vUnlinkEudcRFONTs(v16);
                            v7 = 1;
                            ++LODWORD(v10[6].Blink);
                            goto LABEL_18;
                          }
                          vUnlinkEudcRFONTsAndPFEs(v16, v10);
                          v17 = v10->Flink;
                          if ( v10->Flink->Blink == v10 )
                          {
                            v18 = v10->Blink;
                            if ( v18->Flink == v10 )
                            {
                              v18->Flink = v17;
                              v17->Blink = v18;
                              Win32FreePool(v10);
                              --dword_1C0336374;
                              v7 = 1;
                              ++dword_1C033637C;
LABEL_18:
                              bUnloadEudcFont((__int64)&v12[2]);
                              Win32FreePool(v12);
                              goto LABEL_19;
                            }
                          }
                        }
                      }
                      __fastfail(3u);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_19:
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&v23);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((__int64 *)&Str1a);
  return v7;
}
