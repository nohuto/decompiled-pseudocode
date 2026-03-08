/*
 * XREFs of bDeleteFlEntry @ 0x1C02A1F2C
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B9FA4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0115FA0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     bUnloadEudcFont @ 0x1C01162DC (bUnloadEudcFont.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C02A1020 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C02A1A0C (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C02A3018 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02A311C (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  __int64 *v13; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  bool v16; // zf
  __int64 *v17; // rcx
  struct _LIST_ENTRY *v18; // rcx
  void **p_Flink; // rax
  wchar_t *Str1a; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 *v22[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v23; // [rsp+38h] [rbp-8h]
  unsigned __int16 *v24; // [rsp+78h] [rbp+38h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v24, 0x24Au);
  v6 = Str1a;
  if ( Str1a )
  {
    v7 = v24;
    if ( v24 )
    {
      v23 = 0LL;
      *(_OWORD *)v22 = 0LL;
      if ( (int)StringCchCopyW((char *)v24, 293LL, a2) >= 0 && ParseFontLinkEntry(v7, (struct FontLinkData *)v22) )
      {
        if ( (unsigned int)bAppendSysDirectory(v6, v7) )
        {
          v9 = *(_QWORD *)(SGDGetSessionState(v8) + 32);
          if ( _wcsicmp(v6, (const wchar_t *)(v9 + 13336)) )
          {
            if ( *(_QWORD *)(v9 + 13912) != v9 + 13912 )
            {
              BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(Str1);
              v11 = BaseFontEntry;
              if ( BaseFontEntry )
              {
                LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v6, v22[1]);
                v13 = (__int64 *)LinkedFontEntry;
                if ( LinkedFontEntry )
                {
                  if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                  {
                    Flink = LinkedFontEntry->Flink;
                    if ( LinkedFontEntry->Flink->Blink == LinkedFontEntry )
                    {
                      Blink = LinkedFontEntry->Blink;
                      if ( (__int64 *)Blink->Flink == v13 )
                      {
                        Blink->Flink = Flink;
                        Flink->Blink = Blink;
                        v16 = HIDWORD(v11[6].Flink)-- == 1;
                        v17 = v13 + 4;
                        if ( !v16 )
                        {
                          vUnlinkEudcRFONTs(v17);
                          ++LODWORD(v11[6].Blink);
                          goto LABEL_18;
                        }
                        vUnlinkEudcRFONTsAndPFEs(v17, v11);
                        v18 = v11->Flink;
                        if ( v11->Flink->Blink == v11 )
                        {
                          p_Flink = (void **)&v11->Blink->Flink;
                          if ( *p_Flink == v11 )
                          {
                            *p_Flink = v18;
                            v18->Blink = (struct _LIST_ENTRY *)p_Flink;
                            Win32FreePool(v11);
                            --*(_DWORD *)(v9 + 13904);
                            ++*(_DWORD *)(v9 + 13900);
LABEL_18:
                            bUnloadEudcFont(v13 + 4);
                            Win32FreePool(v13);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v24);
                            AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
                            return 1LL;
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
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&v24);
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Str1a);
  return 0LL;
}
