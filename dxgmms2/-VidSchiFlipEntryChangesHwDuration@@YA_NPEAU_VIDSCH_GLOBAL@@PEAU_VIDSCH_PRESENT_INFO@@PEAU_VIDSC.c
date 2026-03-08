/*
 * XREFs of ?VidSchiFlipEntryChangesHwDuration@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00493DC
 * Callers:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiFlipEntryChangesHwDuration(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  int v3; // r10d
  int v6; // r11d
  int v7; // edx

  v3 = *((_DWORD *)a3 + 285);
  if ( !v3 || v3 == *((_DWORD *)a2 + 20734) )
  {
    v6 = *((_DWORD *)a2 + 758);
    if ( v6 )
    {
      v7 = (*((_DWORD *)a3 + 284) & 0x10) != 0
         ? ((unsigned __int16)**((_DWORD **)a3 + 147) | (unsigned __int16)(**((_DWORD **)a3 + 147) >> 10)) & 0x3FF
         : (1 << *((_DWORD *)a1 + 38)) - 1;
      if ( _bittest(&v7, *((_DWORD *)a2 + 759)) )
        return v6 != v3;
    }
  }
  else if ( (**((_DWORD **)a3 + 147) & 0x3FF) != 0 && *((_DWORD *)a2 + 758) != v3 )
  {
    return 1;
  }
  return 0;
}
