/*
 * XREFs of CleanupMediaChange @ 0x1C00F5900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CleanupMediaChange()
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v1; // rax

  if ( gpEventMediaChange )
  {
    ObfDereferenceObject(gpEventMediaChange);
    gpEventMediaChange = 0LL;
  }
  if ( gMediaChangeMutex )
  {
    Win32FreePool(gMediaChangeMutex);
    gMediaChangeMutex = 0LL;
  }
  if ( gMediaChangeList.Flink )
  {
    while ( 1 )
    {
      Flink = gMediaChangeList.Flink;
      if ( gMediaChangeList.Flink == &gMediaChangeList )
        break;
      if ( gMediaChangeList.Flink->Blink != &gMediaChangeList
        || (v1 = gMediaChangeList.Flink->Flink, gMediaChangeList.Flink->Flink->Blink != gMediaChangeList.Flink) )
      {
        __fastfail(3u);
      }
      gMediaChangeList.Flink = gMediaChangeList.Flink->Flink;
      v1->Blink = &gMediaChangeList;
      Win32FreePool(Flink);
    }
  }
}
