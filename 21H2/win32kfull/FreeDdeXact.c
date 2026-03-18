/*
 * XREFs of FreeDdeXact @ 0x1C02177D0
 * Callers:
 *     FindQMsg @ 0x1C0057C00 (FindQMsg.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02151E0 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C0217AA8 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z @ 0x1C002338C (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C02152A8 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B6DA0 (GreDeleteServerMetaFile.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct _HANDLEENTRY *__fastcall FreeDdeXact(void *a1)
{
  struct _HANDLEENTRY *result; // rax
  __int64 v3; // rcx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v4, a1);
  result = (struct _HANDLEENTRY *)HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = *((_QWORD *)a1 + 7);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 16) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_QWORD *)(v3 + 48));
      if ( (*((_DWORD *)a1 + 16) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*((_QWORD *)a1 + 7) + 74LL), *(void **)(*((_QWORD *)a1 + 7) + 48LL));
        *((_DWORD *)a1 + 16) &= ~0x2000u;
      }
      Win32FreePool(*((_QWORD *)a1 + 7));
    }
    result = (struct _HANDLEENTRY *)HMFreeObject(a1);
  }
  if ( v4 )
  {
    result = gphePrimaryDestroyTarget;
    gphePrimaryDestroyTarget = 0LL;
  }
  return result;
}
