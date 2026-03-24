/*
 * XREFs of bDeleteFlEntry @ 0x1C0298040
 * Callers:
 *     GreEudcUnloadLinkW @ 0x1C0297A90 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0064C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C009FD78 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00A096C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C00A0F24 (-ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00A1144 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z @ 0x1C00A1BA8 (-FindLinkedFontEntry@@YAPEAU_PFEDATA@@PEAU_LIST_ENTRY@@PEBG1@Z.c)
 *     bUnloadEudcFont @ 0x1C00A1D5C (bUnloadEudcFont.c)
 *     vUnlinkEudcRFONTs @ 0x1C02983B4 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02984B0 (vUnlinkEudcRFONTsAndPFEs.c)
 */

__int64 __fastcall bDeleteFlEntry(wchar_t *Str1, char *a2, int a3)
{
  wchar_t *v6; // rdi
  unsigned __int16 *v7; // rbx
  struct _LIST_ENTRY *BaseFontEntry; // rax
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *LinkedFontEntry; // rax
  struct _LIST_ENTRY *v11; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  bool v14; // zf
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rcx
  void **p_Flink; // rax
  unsigned int v18; // ebp
  wchar_t *Str1a; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 *v21[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  unsigned __int16 *v23; // [rsp+78h] [rbp+20h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Str1a, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v23, 0x24Au);
  v6 = Str1a;
  v7 = v23;
  if ( Str1a )
  {
    if ( v23 )
    {
      v22 = 0LL;
      *(_OWORD *)v21 = 0LL;
      if ( (int)StringCchCopyW((char *)v23, 293LL, a2) >= 0 )
      {
        if ( ParseFontLinkEntry(v7, (struct FontLinkData *)v21) )
        {
          if ( (unsigned int)bAppendSysDirectory(v6, v7) )
          {
            if ( _wcsicmp(v6, Dst) )
            {
              if ( off_1C032A378 != (_UNKNOWN *)&off_1C032A378 )
              {
                BaseFontEntry = (struct _LIST_ENTRY *)FindBaseFontEntry(Str1);
                v9 = BaseFontEntry;
                if ( BaseFontEntry )
                {
                  LinkedFontEntry = FindLinkedFontEntry(BaseFontEntry + 1, v6, v21[1]);
                  v11 = LinkedFontEntry;
                  if ( LinkedFontEntry )
                  {
                    if ( LODWORD(LinkedFontEntry[1].Flink) == a3 )
                    {
                      Flink = LinkedFontEntry->Flink;
                      if ( Flink->Blink == v11 )
                      {
                        Blink = v11->Blink;
                        if ( Blink->Flink == v11 )
                        {
                          Blink->Flink = Flink;
                          Flink->Blink = Blink;
                          v14 = HIDWORD(v9[6].Flink)-- == 1;
                          v15 = v11 + 2;
                          if ( !v14 )
                          {
                            vUnlinkEudcRFONTs(v15);
                            v18 = 1;
                            ++LODWORD(v9[6].Blink);
                            goto LABEL_18;
                          }
                          vUnlinkEudcRFONTsAndPFEs(v15, v9);
                          v16 = v9->Flink;
                          if ( v9->Flink->Blink == v9 )
                          {
                            p_Flink = (void **)&v9->Blink->Flink;
                            if ( *p_Flink == v9 )
                            {
                              *p_Flink = v16;
                              v16->Blink = (struct _LIST_ENTRY *)p_Flink;
                              Win32FreePool(v9);
                              --dword_1C033A0B8;
                              v18 = 1;
                              ++dword_1C033A0B0;
LABEL_18:
                              bUnloadEudcFont((__int64)&v11[2]);
                              Win32FreePool(v11);
                              goto LABEL_21;
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
  v18 = 0;
LABEL_21:
  if ( v7 )
    Win32FreePool(v7);
  if ( v6 )
    Win32FreePool(v6);
  return v18;
}
