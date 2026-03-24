/*
 * XREFs of PopBcdClearPendingResume @ 0x140781C60
 * Callers:
 *     PopFreeHiberContext @ 0x14077404C (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
