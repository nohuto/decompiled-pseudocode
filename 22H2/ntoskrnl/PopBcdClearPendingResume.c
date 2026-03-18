/*
 * XREFs of PopBcdClearPendingResume @ 0x1408041B8
 * Callers:
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 * Callees:
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
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
