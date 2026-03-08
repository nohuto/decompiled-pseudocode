/*
 * XREFs of ?GetHotKeyLangID@@YAGK@Z @ 0x1C00D8934
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0009EC4 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C00D8704 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C00D88B4 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHotKeyLangID(unsigned int a1)
{
  if ( a1 - 16 > 0x7F )
    return 0;
  else
    return (unsigned __int16)word_1C0319550[(unsigned __int64)a1 >> 4];
}
