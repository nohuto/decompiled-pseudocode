/*
 * XREFs of InitQMiPTrace @ 0x1C01E1DD4
 * Callers:
 *     InitModuleAllocations @ 0x1C01341E0 (InitModuleAllocations.c)
 * Callees:
 *     <none>
 */

void InitQMiPTrace()
{
  struct tagQMSG_HISTORY *v0; // rcx

  if ( (gdwPostMortemLogging & 1) != 0 && gSessionId != gServiceSessionId )
  {
    gpQmsgHistory = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
    if ( !gpQmsgHistory )
    {
LABEL_4:
      gdwPostMortemLogging &= ~1u;
      return;
    }
    gpQmsgHistory2 = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
    v0 = gpQmsgHistory2;
    if ( !gpQmsgHistory2 )
    {
      Win32FreePool(gpQmsgHistory);
      gpQmsgHistory = 0LL;
      goto LABEL_4;
    }
    *((_DWORD *)gpQmsgHistory + 1) = 512;
    *((_DWORD *)v0 + 1) = 512;
  }
}
