/*
 * XREFs of ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C005CEA8
 * Callers:
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
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
