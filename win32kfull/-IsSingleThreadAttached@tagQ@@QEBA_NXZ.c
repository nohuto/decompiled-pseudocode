/*
 * XREFs of ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00CE1A4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::IsSingleThreadAttached(tagQ *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 60);
  if ( v1 && !*(_QWORD *)(v1 + 1528) )
  {
    return !*((_QWORD *)this + 61);
  }
  else
  {
    v2 = *((_QWORD *)this + 61);
    if ( !v2 )
      return 0;
    return *(_QWORD *)(v2 + 1536) == 0LL;
  }
}
