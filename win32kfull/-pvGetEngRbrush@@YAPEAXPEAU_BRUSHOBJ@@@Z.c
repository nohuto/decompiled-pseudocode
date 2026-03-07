PVOID __fastcall pvGetEngRbrush(struct _BRUSHOBJ *a1)
{
  PVOID result; // rax
  PVOID pvRbrush; // rcx

  result = a1[1].pvRbrush;
  if ( !result )
  {
    if ( (unsigned int)bGetRealizedBrush(*(struct BRUSH **)&a1[4].flColorType, (struct EBRUSHOBJ *)a1, EngRealizeBrush) )
    {
      vTryToCacheRealization(
        (struct EBRUSHOBJ *)a1,
        (struct RBRUSH *)a1[1].pvRbrush,
        *(struct BRUSH **)&a1[4].flColorType,
        1);
      return a1[1].pvRbrush;
    }
    else
    {
      pvRbrush = a1[1].pvRbrush;
      if ( pvRbrush )
      {
        Win32FreePool(pvRbrush);
        a1[1].pvRbrush = 0LL;
      }
      return 0LL;
    }
  }
  return result;
}
