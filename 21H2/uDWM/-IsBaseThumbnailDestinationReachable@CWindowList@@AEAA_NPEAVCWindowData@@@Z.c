/*
 * XREFs of ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C238
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18002BDF0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C238 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18009940C (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z @ 0x18002C238 (-IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z.c)
 */

char __fastcall CWindowList::IsBaseThumbnailDestinationReachable(struct CWindowData **this, struct CWindowData *a2)
{
  bool IsBaseThumbnailDestinationReachable; // r8
  __int64 i; // rdi
  __int64 v7; // rdx
  struct CWindowData *v8; // rdx

  IsBaseThumbnailDestinationReachable = 0;
  if ( a2 == this[48] )
    return 1;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 124); i = (unsigned int)(i + 1) )
  {
    if ( IsBaseThumbnailDestinationReachable )
      break;
    v7 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 8 * i);
    if ( (*(_DWORD *)(v7 + 36) & 0x900000) == 0 )
    {
      v8 = *(struct CWindowData **)(v7 + 24);
      if ( v8 )
        IsBaseThumbnailDestinationReachable = CWindowList::IsBaseThumbnailDestinationReachable((CWindowList *)this, v8);
      else
        IsBaseThumbnailDestinationReachable = 1;
    }
  }
  return IsBaseThumbnailDestinationReachable;
}
