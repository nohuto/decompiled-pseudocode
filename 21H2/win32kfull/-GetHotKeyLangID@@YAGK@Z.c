/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1C01037BC
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00F5638 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C01035E4 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C010373C (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_1C02E8DD0[(unsigned __int64)a1 >> 4];
}
