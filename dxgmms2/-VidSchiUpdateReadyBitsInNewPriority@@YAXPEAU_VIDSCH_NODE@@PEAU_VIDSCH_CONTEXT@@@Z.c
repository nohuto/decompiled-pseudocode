/*
 * XREFs of ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0037AC4
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1C0014574 (VidSchiSetPriorityContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateReadyBitsInNewPriority(struct _VIDSCH_NODE *a1, struct _VIDSCH_CONTEXT *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ecx
  unsigned __int64 v5; // r10

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a2 + 101);
  if ( *((struct _VIDSCH_NODE **)a1 + 2 * v4 + 257) == (struct _VIDSCH_NODE *)((char *)a1 + 16 * v4 + 2056) )
  {
    v5 = *((unsigned __int16 *)a1 + 2);
    *((_DWORD *)a1 + 442) |= 1 << v4;
    if ( !_bittest64(*(const signed __int64 **)(v2 + 496), v5)
      && ((-1 << *((_DWORD *)a2 + 101)) & *((_DWORD *)a1 + 443)) == 0
      && !*((_DWORD *)a1 + 725) )
    {
      RtlSetBitEx(v2 + 488, (unsigned int)v5);
    }
  }
}
