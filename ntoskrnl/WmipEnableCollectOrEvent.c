/*
 * XREFs of WmipEnableCollectOrEvent @ 0x14069C2A8
 * Callers:
 *     WmipOpenBlock @ 0x14069AF1C (WmipOpenBlock.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipSendEnableRequest @ 0x140786FAC (WmipSendEnableRequest.c)
 */

__int64 __fastcall WmipEnableCollectOrEvent(ULONG_PTR BugCheckParameter2, int a2, _BYTE *a3)
{
  int v5; // edx
  int v6; // ebx
  __int64 *i; // rax
  int v8; // ecx

  *a3 = 0;
  v5 = a2 - 2244924;
  if ( !v5 )
  {
    v6 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    for ( i = *(__int64 **)(BugCheckParameter2 + 56); i != (__int64 *)(BugCheckParameter2 + 56); i = (__int64 *)*i )
    {
      v8 = *((_DWORD *)i + 4);
      if ( (v8 & 0x1000) == 0 && ((v8 & 0x8000) == 0 || !v6) && (v6 || (v8 & 4) != 0) )
        v6 = 1;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( !v6 )
      return (unsigned int)v6;
LABEL_13:
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v6 = WmipSendEnableRequest(BugCheckParameter2);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( v6 >= 0 )
      *a3 = 1;
    return (unsigned int)v6;
  }
  if ( v5 == 4 )
    goto LABEL_13;
  return 3221225647LL;
}
