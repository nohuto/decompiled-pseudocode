/*
 * XREFs of ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1803B9F60
 * Callers:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803B9F80 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1803BBA60 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KBViewInfo::GetFirstViewType(KBViewInfo *this)
{
  if ( *((_QWORD *)this + 7) )
    return *(unsigned int *)(**((_QWORD **)this + 6) + 16LL);
  else
    return 0xFFFFFFFFLL;
}
